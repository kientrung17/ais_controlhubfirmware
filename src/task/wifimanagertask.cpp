#include "task/wifimanagertask.h"
#include "loggermanager.h"
#include "common/common.h"
#include "esp_sntp.h"


WifiManagerTask::WifiManagerTask(WiFiManagerAbstract *wifimanager, std::string nameTask, int numElementQueueSet)
    : TaskAbstract(nameTask, numElementQueueSet)
{
    mWiFiManager = wifimanager;

    mSntpServer = SntpManager();
}

WifiManagerTask::~WifiManagerTask()
{
}

void WifiManagerTask::onTimer100HzProcess()
{
    mCounter100Hz++;

    // check sntp sync status
    if (!gIsSntpSynced && mIsWifiStaConnected)
    {
        sntp_sync_status_t status = sntp_get_sync_status();
        if (status == SNTP_SYNC_STATUS_COMPLETED)
        {
            gIsSntpSynced = true;
            LOG_INFO("WifiManagerTask", "SNTP synchronized successfully");
        }
    }

    // Print free heap memory every 10 seconds for memory leak diagnostic
    if (mCounter100Hz % DIV_COUNTER_10_S == 0)
    {
        LOG_INFO("WifiManagerTask", "Diagnostics: Free Heap Size: %d bytes", (int)esp_get_free_heap_size());
    }

    // div timer
    if (mCounter100Hz % DIV_COUNTER_10_S == 0)
    {
        // check disconneted
        if (mWiFiManager->isWifiConnected() == false && mWifiStaInited)
        {
            LOG_DEBUG("MonitorSystemTask", "Reconnect to wifi: ssid: %s, pass: %s",
                      mWiFiManager->getSsidWifiSTA().c_str(), mWiFiManager->getPassWifiSTA().c_str());
            mWiFiManager->reconnectWifi();
        }
    }
    if (mCounter100Hz % DIV_COUNTER_10Hz == 0)
    {
        if (mIsWifiStaConnected != mWiFiManager->isWifiConnected() && mWifiStaInited)
        {
            mIsWifiStaConnected = mWiFiManager->isWifiConnected();
            if (mIsWifiStaConnected == true)
            {
                LOG_INFO("WifiManagerTask", "Wifi sta connected");
                xEventGroupSetBits(gEventGroupNetworkState, BIT_WIFI_CONNECTED);

                // Disable WiFi Power Save to prevent DELBA timeout and hangs
                esp_wifi_set_ps(WIFI_PS_NONE);
                LOG_INFO("WifiManagerTask", "WiFi Power Save disabled");

                // Initialize SNTP once with multiple backup servers
                esp_sntp_stop();
                esp_sntp_setoperatingmode(ESP_SNTP_OPMODE_POLL);
                esp_sntp_setservername(0, "pool.ntp.org");
                esp_sntp_setservername(1, "time.google.com");
                esp_sntp_setservername(2, "time.cloudflare.com");
                esp_sntp_init();
                LOG_INFO("WifiManagerTask", "SNTP initialized with backup servers");
            }
            else
            {
                LOG_INFO("WifiManagerTask", "Wifi sta disconnected");
                xEventGroupClearBits(gEventGroupNetworkState, BIT_WIFI_CONNECTED);
            }
        }
    }
}

void WifiManagerTask::onQueueSetMessageProcess(OSBase::QueueHandle queue_sem)
{

}

// init config wifi infor
void WifiManagerTask::onInitProcess()
{
    LOG_INFO("WifiManagerTask", "Init task");
    mStaConfig.ssid = gConfigSystem.getConfigSystem().ssidWifiSta;
    mStaConfig.password = gConfigSystem.getConfigSystem().passWifiSta;
    mApConfig.ssid = SSID_WIFI_AP;
    mApConfig.password = PASS_WIFI_AP;
    LOG_INFO("WifiManagerTask", "Init mode MODE_STA");
    mWiFiManager->initWifi(WiFiManagerAbstract::ModeWifi::MODE_AP_STA, mStaConfig, mApConfig);
    mWifiStaInited = true;
}

// check mode to init (Normal(wifi run Sta) or Config(wifi run Ap + STA))
void WifiManagerTask::changeModeWifiToAPSta()
{
    // return if wifi not init
    if (mWiFiManager->getModeWifi() == WiFiManagerAbstract::ModeWifi::MODE_AP_STA)
    {
        return;
    }
    LOG_INFO("WifiManagerTask", "Init mode MODE_AP_STA => Device on mode Config");
    mWiFiManager->changeWifiMode(WiFiManagerAbstract::ModeWifi::MODE_AP_STA, mStaConfig, mApConfig);
}

void WifiManagerTask::processInitSntpStateMachine(StateSntp stateSntp)
{
    switch (stateSntp)
    {
    case StateSntp::Idle:
    {
        // state reset
        LOG_INFO("WifiManagerTask", "SntpStateMachine: State idle");
        mCountCheckSntpSync = 0;
        mStateSntpCurrent = StateSntp::Init;
        processInitSntpStateMachine(mStateSntpCurrent);
        break;
    }
    case StateSntp::Init:
    {
        esp_sntp_stop(); // Stop SNTP client to prevent crash when re-initializing or switching servers
        if (mServerType == ServerType::Ntp)
        {
            mSntpServer.beginUpdateSync(SERVER_SNTSP_NTP);
            LOG_INFO("WifiManagerTask", "SntpStateMachine: State Init: server Ntp");
        }
        else if (mServerType == ServerType::Google)
        {
            mSntpServer.beginUpdateSync(SERVER_SNTSP_GOOGLE);
            LOG_INFO("WifiManagerTask", "SntpStateMachine: State Init: server google");
        }
        else
        {
            mSntpServer.beginUpdateSync(SERVER_SNTP_CLOULDFARE);
            LOG_INFO("WifiManagerTask", "SntpStateMachine: State Init: server clouldfare");
        }
        // change state
        mStateSntpCurrent = StateSntp::WaitSync;
        processInitSntpStateMachine(mStateSntpCurrent);
        break;
    }
    case StateSntp::WaitSync:
    {
        if (mSntpServer.checkSntpSynced() == true)
        {
            LOG_INFO("WifiManagerTask", "SntpStateMachine: State WaitSync: server sysned");
            // change state
            mStateSntpCurrent = StateSntp::Synced;
            processInitSntpStateMachine(mStateSntpCurrent);
        }
        else
        {
            mCountCheckSntpSync++;
            // 10s không đồng bộ được thời gian thì chuyển server
            if (mCountCheckSntpSync == COUNTER_10_S)
            {
                LOG_INFO("WifiManagerTask", "SntpStateMachine: State WaitSync: sysnc faild => change server");
                // change state ChangeServer to start re begin new server
                mStateSntpCurrent = StateSntp::ChangeServer;
                processInitSntpStateMachine(mStateSntpCurrent);
            }
        }
        break;
    }
    case StateSntp::ChangeServer:
    {
        LOG_INFO("WifiManagerTask", "SntpStateMachine: State ChangeServer");
        // change server
        if (mServerType == ServerType::Ntp)
        {
            mServerType = ServerType::Google;
        }
        else if (mServerType == ServerType::Google)
        {
            mServerType = ServerType::Clouldfare;
        }
        else
        {
            mServerType = ServerType::Ntp;
        }
        // change state
        mStateSntpCurrent = StateSntp::Idle;
        processInitSntpStateMachine(mStateSntpCurrent);
        break;
    }
    case StateSntp::Synced:
    {
        // update status sntp system
        gIsSntpSynced = true;
        break;
    }
    }
}
