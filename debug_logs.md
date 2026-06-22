[21:44:45 --- Rx] ets Jul 29 2019 12:21:46

rst:0x1 (POWERON_RESET),boot:0x3 (DOWNLOAD_BOOT(UART0/UART1/SDIO_REI_REO_V2))
waiting for downlï
[21:44:45 184 Rx] ets Jul 29 2019 12:21:46

rst:0x1 (POWERON_RESET),boot:0x3 (DOWNLOAD_BOOT(UART0/UART1/SDIO_REI_REO_V2))
waiting for download

[21:44:47 --- Rx] ets Jul 29 2019þets Jul 29 2019 12:21:46

rst:0x1 (POWERON_RESET),boot:0x17 (SPI_FAST_FLASH_BOOT)
configsip: 0, SPIWP:0xee
clk_drv:0x00,q_drv:0x00,d_drv:0x00,cs0_drv:0x00,hd_drv:0x00,wp_drv:0x00
mode:DIO, clock div:2
load:0x3fff0030,len:6380
ho 0 tail 12 room 4
load:0x40078000,len:15916
load:0x40080400,len:3860
entry 0x40080630
I (29) boot: ESP-IDF 5.5.0 2nd stage bootloader
I (29) boot: compile time Jun 22 2026 20:35:16
I (29) boot: Multicore bootloader
I (31) boot: chip revision: v3.1
I (33) boot.esp32: SPI Speed      : 40MHz
I (37) boot.esp32: SPI Mode       : DIO
I (41) boot.esp32: SPI Flash Size : 4MB
I (4
[21:44:47 100 Rx] 4) boot: Enabling RNG early entropy source...
I (49) boot: Partition Table:
I (51) boot: ## Label            Usage          Type ST Offset   Length
I (58) boot:  0 nvs              WiFi data        01 02 00009000 00006000
I (64) boot:  1 factory          factory app      00 00 00010000 003ef000
I (71) boot: End of partition table
I (74) esp_image: segment 0: paddr=00010020 vaddr=3f400020 size=22cc8h (142536) map
I (130) esp_image: segment 1: paddr=00032cf0 vaddr=3ff80000 size=00020h (    32) load
I (130) esp_image: segment 2: paddr=00032d18 vaddr=3ffb0000 size=04018h ( 16408) load
I (140) esp_image: segment 3: paddr=00036d38 vaddr=40080000 size=092e0h ( 37600) load
I (156) esp_image: segment 4: paddr=00040020 vaddr=400d0020 si
[21:44:47 340 Rx] ze=af080h (716928) map
I (401) esp_image: segment 5: paddr=000ef0a8 vaddr=400892e0 size=0f61ch ( 63004) load
I (438) boot: Loaded app from partition at offset 0x10000
I (438) boot: Disabling RNG early entropy source...
I (449) cpu_start: Multicore app
I (457) cpu_start: Pro cpu start user code
I (457) cpu_start: cpu freq: 160000000 Hz
I (457) app_init: Application information:
I (457) app_init: Project name:     MonitorTemAndPower
I (462) app_init: App version:      402f6f7-dirty
I (466) app_init: Compile time:     Jun 22 2026 20:34:07
I (471) app_init: ELF file SHA256:  b8d80e98b...
I (476) app_init: ESP-IDF:          5.5.0
I (480) efuse_init: Min chip rev:     v0.0
I (483) efuse_init: Max chip rev:     v3.99 
I (487) efuse_init: Chip rev:         v3.1
I (491) heap_init: Initializing. RAM available for dynamic allocation:
I (498) heap_init: At 3FFAE6E0 len 00001920 (6 KiB): DRAM
I (503) heap_init: At 3FFB8D
[21:44:48 104 Rx] E8 len 00027218 (156 KiB): DRAM
I (508) heap_init: At 3FFE0440 len 00003AE0 (14 KiB): D/IRAM
I (513) heap_init: At 3FFE4350 len 0001BCB0 (111 KiB): D/IRAM
I (519) heap_init: At 400988FC len 00007704 (29 KiB): IRAM
I (526) spi_flash: detected chip: generic
I (528) spi_flash: flash io: dio
I (555) [info][FlashManager]: [components/framework/src/HAL/HAL_ESP32/flashmanager.cpp:39:init] NVS namespace 'storage' opened
I (557) main_task: Started on CPU0
I (567) main_task: Calling app_main()
I (567) [info]MyMain: [src/MyMain.cpp:146:startAllTask] ************Start init system and run task****************
I (567) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:143:readConfigFromFlash] Read system config success
I (577) [info]MyMain: [src/common/common.cpp:94:initSystem] Loaded custom config from Flash NVS successfully!
I (587) [info]MyMain: [src/common/common.cpp:100:initSystem] UserSystemID: sys000001  
I (597) [info]MyMain: [src/common/common.cpp:101:initSystem] Ssid: Tiáº¿n BG Ä‘áº¹p zai  
I (607) [info]M
[21:44:48 102 Rx] yMain: [src/common/common.cpp:102:initSystem] Pass: 23456789  
I (607) [info]MyMain: [src/common/common.cpp:106:initSystem] Device ID: 163091810856900
I (617) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (627) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:88:registerSemaphoreToQueueset] [WifiManagerTask]Create semaphore 100Hz success: 51
I (647) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (657) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:88:registerSemaphoreToQueueset] [RelayManagerTask]Create semaphore 100Hz success: 52
I (677) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:102:registerQueueToQueueset] [RelayManagerTask]Create Queue: 3 success
I (687) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (697) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:88:registerSemaphoreToQueueset] [PowerManagerTask]Create semaphore
[21:44:48 105 Rx]  100Hz success: 53
I (717) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (727) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:88:registerSemaphoreToQueueset] [AdcReaderTask]Create semaphore 100Hz success: 54
I (737) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (757) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:88:registerSemaphoreToQueueset] [EspNowReceiverTask]Create semaphore 100Hz success: 55
I (767) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (777) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:88:registerSemaphoreToQueueset] [ConfigSystemTask]Create semaphore 100Hz success: 56
I (797) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (807) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\ta
[21:44:48 102 Rx] skabstract.cpp:88:registerSemaphoreToQueueset] [MqttManagerTask]Create semaphore 100Hz success: 57
I (827) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:102:registerQueueToQueueset] [MqttManagerTask]Create Queue: 4 success
I (837) [info]MyMain: [src/MyMain.cpp:84:StartWifiMamnagerTask] Start Task wifi
I (847) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process WifiManagerTask
I (857) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:72:onInitProcess] Init task
I (867) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:77:onInitProcess] Init mode MODE_STA
I (877) [info]MyMain: [src/MyMain.cpp:111:StartRelayManagerTask] Start Task relay
I (877) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process RelayManagerTask
I (887) wifi:wifi driver task: 3ffc5374, prio:23, stack:6656, core=0
I (897) [info]RelayManagerTask: [src/task/relaymanagertask.cpp:53:onInitProcess] Init task
I (917) [info]MyMain: [src/MyMain.cpp:120:StartPowerManagerTask] Start Task Power Manager
I (917) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:40:readRelayInforFro
[21:44:48 103 Rx] mFlash] Read config relay control infor: 0 success
I (917) wifi:I (917) [info]MyMain: [src/MyMain.cpp:129:StartAdcReaderTask] Start Task ADC Reader
wifi firmware version: f3dbad7
I (937) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process AdcReaderTask
I (937) wifi:wifi certification version: v7.0I (917) [info]MyMain: [src/MyMain.cpp:93:StartConfigSystemTask] Start Task Config System

I (947) [info]AdcReaderTask: [src/task/adcreadertask.cpp:25:onInitProcess] Init ADC hardware...
I (957) wifi:config NVS flash: enabled
I (967) [info]AdcReaderTask: [src/task/adcreadertask.cpp:75:initAdc] ADC1 init OK: GPIO36(CH0), GPIO39(CH3), GPIO35(CH7)
I (977) wifi:config nano formatting: disabled
I (987) [info]AdcReaderTask: [src/task/adcreadertask.cpp:94:initCalibration] ADC Calibration OK (eFuse line fitting)
I (987) wifi:Init data frame dynamic rx buffer num: 32
I (997) [info]AdcReaderTask: [src/task/adcreadertask.cpp:38:onInitProcess] adcBurstTask spawned OK
I (1007) wifi:I (927) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:40:readRelayInforFromFlash] Read config relay control info
[21:44:48 106 Rx] r: 1 success
Init static rx mgmt buffer num: 5
I (917) [info]MyMain: [src/MyMain.cpp:102:StartMqttManagerTask] Start Task MQTT Manager
I (1027) wifi:Init management short buffer num: 32I (957) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process ConfigSystemTask

I (1027) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:40:readRelayInforFromFlash] Read config relay control infor: 2 success
I (1057) wifi:Init dynamic tx buffer num: 32
I (917) [info]MyMain: [src/MyMain.cpp:138:StartEspNowReceiverTask] Start Task ESP-NOW Receiver
I (1067) wifi:Init static rx buffer size: 1600I (1077) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process EspNowReceiverTask

I (917) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process PowerManagerTask
I (1097) wifi:Init static rx buffer num: 10I (1037) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process MqttManagerTask

I (1067) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:40:readRelayInforFromFlash] Read
[21:44:48 102 Rx]  config relay control infor: 3 success
I (1127) wifi:Init dynamic rx buffer num: 32
I (1057) [info]ConfigSystemTask: [src/task/configsystemtask.cpp:25:onInitProcess] Initializing ConfigSystemTask on UDP port 8080
I (1137) wifi_init: rx ba win: 6
I (1157) wifi_init: accept mbox: 6
I (1137) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:40:readRelayInforFromFlash] Read config relay control infor: 4 success
I (1157) wifi_init: tcpip mbox: 32
I (1167) wifi_init: udp mbox: 6
I (1107) [inf«½Ý•É5…¹…•).UÍ­: [src/task/powermanagertask.cpp:41:onInitProcess] Init task
I (1177) wifi_init: tcp mbox: 6
I (1127) [info]MqttManagerTask: [src/task/mqttmanagertask.cpp:24:onInitProcess] Initializing MqttManagerTask...
I (1187) wifi_init: tcp tx win: 5760
I (1197) wifi_init: tcp rx win: 5760
I (1097) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:23:onInitProcess] Initializing ESP-NOW receiver...
I (1197) wifi_init: tcp mss: 1440
I (1177) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:40:readRelayInforFromFlash] Read config relay control infor: 5 success
I (1217) wifi_init: WiFi IRAM OP enabled
I (1227) wifi_init: WiFi RX IRAM OP enabled
I (1227) [info]RelayManagerTask: [src/task/relaym
[21:44:48 104 Rx] anagertask.cpp:120:emergencyTask] EStopTask listening for E-Stop events...
I (1217) ESPNOW: espnow [version: 2.0] init
W (1247) wifi:Password length matches WPA2 standards, authmode threshold changes from OPEN to WPA2
I (1247) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:48:onInitProcess] ESP-NOW receiver ready. Listening for deviceId=101
I (1267) phy_init: phy_version 4860,6b7a6e5,Feb  6 2025,14:47:07
I (1157) [info]ConfigSystemTask: [src/task/configsystemtask.cpp:50:onInitProcess] Socket created and bound successfully.
I (1227) [info]RelayManagerTask: [src/task/relaymanagertask.cpp:88:onInitProcess] EStopTask spawned OK

[21:44:48 106 Rx] I (1347) wifi:mode : sta (94:54:c5:73:af:c4) + softAP (94:54:c5:73:af:c5)
I (1357) wifi:enable tsf
I (1357) wifi:Total power save buffer number: 16
I (1357) wifi:Init max length of beacon: 752/752
I (1357) wifi:Init max length of beacon: 752/752
I (1367) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:125:initWifi] Started Wi-Fi in mode 2
I (1367) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:230:eventHandlerWifi] STA started, connectingâ€¦
I (917) [info]MyMain: [src/MyMain.cpp:223:startAllTask] Start All Task Success
I (1387) esp_netif_lwip: DHCP server started on interface WIFI_AP_DEF with IP: 192.168.4.1

[21:44:50 --- Rx] I (2497) main_task: Returned from app_main()

[21:44:50 486 Rx] I (2997) [info]AdcReaderTask: [src/task/adcreadertask.cpp:235:adcBurstTask] ADC burst sampling started

[21:44:53 --- Rx] I (6397) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (6397) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (6397) TASK_MONITOR: PowerManagerTas      Ready      3          1680           
I (6407) TASK_MONITOR: AdcBurst             Ready      2          1892           
I (6417) TASK_MONITOR: TaskMonitor          Running    1          3600           
I (6417) TASK_MONITOR: IDLE1                Ready      0          1024           
I (6427) TASK_MONITOR: IDLE0                Ready      0          920            
I (6437) TASK_MONITOR: taskfreezer          Blocked    1          3592           
I (6447) TASK_MONITOR: tiT                  Blocked    18         1628           
I (6447) TASK_MONITOR: ipc0                 Suspended  24         508            
I (6457) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (6467) TASK_MONITOR: ipc1                 Suspended  24         500            
I (6477) TASK_MONITOR: sys_evt              Blocked    20         420            
I (6477) TASK_MONITOR: wifi                 Blocked    23         4304           
I (6487) TASK_MONITOR: AdcReaderTask        Blocked    5          1680           
I (6497) TASK_MONITOR: esp_timer            Suspended
[21:44:54 106 Rx]   22         3320           
I (6497) TASK_MONITOR: WifiManagerTask      Blocked    5          5280           
I (6507) TASK_MONITOR: EspNowReceiverT      Blocked    3          1536           
I (6517) TASK_MONITOR: ConfigSystemTas      Blocked    3          5820           
I (6527) TASK_MONITOR: MqttManagerTask      Blocked    3          5512           
I (6527) TASK_MONITOR: RelayManagerTas      Blocked    3          5264           
I (6537) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (6547) TASK_MONITOR: Free Heap: 151868 bytes, Min Free Heap: 147360 bytes
I (6547) TASK_MONITOR: =============================================================

[21:44:56 --- Rx] I (8697) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=82 GPIO39=1831 GPIO35=0
I (8797) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212
[21:44:56 104 Rx] :computeAndSendRms] DC1=184mV DC2=1643mV | RMS=22.4mV/16.6mV | A1=0.38A A2=0.41A [N=628]

[21:44:59 --- Rx] I (12397) [debug]MonitorSystemTask: [src/task/wifimanagertask.cpp:40:onTimer100HzProcess] Reconnect to wifi: ssid: Tiáº¿n BG Ä‘áº¹p zai, pass: 23456789
I (12397) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:203:reconnectWifi] Reconnecting to Tiáº¿n BG Ä‘áº¹p zai
I (12417) wifi:ap channel adjust o:1,1 n:10,2
I (12417) wifi:new:<10,2>, old:<1,1>, ap:<10,2>, sta:<10,2>, prof:1, snd_ch_cfg:0x0
I (12427) wifi:state: init -> auth (0xb0)
I (12447) wifi:state: auth -> assoc (0x0)
I (12457) wifi:state: assoc -> run (0x10)

[21:45:00 180 Rx] I (12577) wifi:connected with Tiáº¿n BG Ä‘áº¹p zai, aid = 5, channel 10, 40D, bssid = 1c:3b:f3:6a:77:74
I (12577) wifi:security: WPA2-PSK, phy: bgn, rssi: -37
I (12577) wifi:pm start, type: 1

I (12577) wifi:dp: 1, bi: 102400, li: 3, scale listen interval from 307200 us to 307200 us
I (12587) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:241:eventHandlerWifi] Received event WIFI_EVENT_STA_CONNECTED
I (12607) wifi:AP's beacon interval = 102400 us, DTIM period = 1
I (12637) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:2, winSize:64

[21:45:01 --- Rx] I (13847) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (13847) wifi:<ba-del>idx:0, tid:0

[21:45:01 474 Rx] I (14327) esp_netif_handlers: sta ip: 192.168.0.105, mask: 255.255.255.0, gw: 192.168.0.1
I (14327) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:267:eventHandlerWifi] Received event IP_EVENT_STA_GOT_IP: 192.168.0.105
I (14337) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:268:eventHandlerWifi] Has ip => Set bit WIFI_CONNECTED_BIT
I (14357) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:101:processInitSntpStateMachine] SntpStateMachine: State idle
I (14357) [info]SntpManager: [components/framework/src/HAL/HAL_ESP32/sntpmamager.cpp:12:beginUpdateSync] Initializing SNTP with server: pool.ntp.org
I (14377) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:113:processInitSntpStateMachine] SntpStateMachine: State Init: server Ntp
I (14417) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:52:onTimer100HzProcess] Wifi sta connected
I (14427) [info]MqttManagerTask: [src/task/mqttmanagertask.cpp:70:onTimer100HzP
[21:45:01 104 Rx] rocess] Wifi connected, starting MQTT client...
I (14427) [debug]MqttClientEsp32: [components/framework/src/HAL/HAL_ESP32/mqttclientesp32.cpp:39:start] Client ID: esp32_9454C573AFC4
I (14437) [info]MqttClientEsp32: [components/framework/src/HAL/HAL_ESP32/mqttclientesp32.cpp:76:start] MQTT client started successfully: uri: mqtts://0a4a8b1e715a4ce5a3b5e78451cdba8.s1.eu.hivemq.cloud, port: 8883, user: esp32_control, pass: Pass123456, clientid: esp32_9454C573AFC4
I (14457) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:6, winSize:64

[21:45:02 260 Rx] I (14697) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=86 GPIO39=1831 GPIO35=0

[21:45:02 100 Rx] I (14797) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=185mV DC2=1641mV | RMS=13.5mV/24.0mV | A1=0.31A A2=0.38A [N=557]

[21:45:04 --- Rx] I (16557) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (16557) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (16557) TASK_MONITOR: AdcBurst             Redy      2          1668           
I (16567) TASK_MONITOR: TaskMonitor          Running    1          2224           
I (16577) TASK_MONITOR: IDLE1                Ready      0          912            
I (16587 TASK_MONITOR: ILE0                Ready      0         920           
I (16587) TASK_MONITOR: mqtt_task            Blocked    18         3500           
I (16597) TASK_MONITOR: taskfreezer          Blocked    1          3592           
I (16607) TASK_MONITOR: tiT                  Blocked    18         1628           
I (16607) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (16607) [info]MqttClientEsp32: [components/framework/src/HAL/HAL_ESP32/mqttclientesp32.cpp:191:handleEvent] Connected
I (16627) [info]MqttManagerTask: [src/task/mqttmanagertask.cpp:155:onSubscribeTopic] MQTT Connected! Subscribing to topic: devices/163091810856900/commands
I (16647) TASK_MONITOR: ipc1                 Suspended  24         500            
I (16647) [info]MqttClientEsp32: [components/framework/src/HAL/HAL_ESP32/mqttclientesp32.cpp:143:subs
[21:45:04 104 Rx] cribe] [subscribe] Topic: devices/163091810856900/commands success
I (16667) TASK_MONITOR: sys_evt              Blocked    20         388            
I (16667) TASK_MONITOR: wifi                 Blocked    23         3600           
I (16677) TASK_MONITOR: AdcReaderTask        Blocked    5          1680           
I (16687) TASK_MONITOR: esp_timer            Suspended  22         3304           
I (16697) TASK_MONITOR: WifiManagerTask      Blocked    5          5280           
I (16697) TASK_MONITOR: EspNowReceiverT      Blocked    3          1536           
I (16707) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (16717) TASK_MONITOR: RelayManagerTas      Blocked    3          5264           
I (16727) TASK_MONITOR: ConfigSystemTas      Blocked    3          5820           
I (16727) TASK_MONITOR: PowerManagerTas      Blocked    3          1680           
I (16737) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (16747) TASK_MONITOR: ipc0                 Suspended  24         508            
I (16757) TASK_MONITOR: Free Heap: 100684 bytes, Min Free Heap: 92352 bytes
I (16757) TASK_MONITOR: =============================================================

[21:45:04 755 Rx] I (17427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:05 985 Rx] I (18427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:06 995 Rx] I (19427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:07 998 Rx] I (20427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:08 260 Rx] I (20697) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=99 GPIO39=1833 GPIO35=0
I (20797) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:21
[21:45:08 104 Rx] 2:computeAndSendRms] DC1=184mV DC2=1643mV | RMS=13.9mV/23.5mV | A1=0.37A A2=0.44A [N=620]

[21:45:08 626 Rx] I (21427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:09 974 Rx] I (22407) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.03 Oxy=5.11 pH=8.04 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (22427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (22447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (22447) wifi:<ba-del>idx:0, tid:0

[21:45:10 339 Rx] I (22757) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:28, winSize:64

[21:45:10 672 Rx] I (23427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:11 932 Rx] I (24367) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:145:processInitSntpStateMachine] SntpStateMachine: State WaitSync: sysnc faild => change server
I (24367) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:155:processInitSntpStateMachine] SntpStateMachine: State ChangeServer
I (24377) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:101:procesInitSntpStateMachine] SntpStateMachine: State idle
I (24387) [info]SntpManager: [components/framework/src/HAL/HAL_ESP32/sntpmamager.cpp:12:beginUpdateSync] Initializing SNTP with server: time.google.com
I (24407) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:118:processInitSntpStateMachine] SntpStateMachine: State Init: server google
I (24427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:12 --- Rx] I (25427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:13 605 Rx] I (26047) wifi:<ba-add>idx:1 (ifx:0, 1c:3b:f3:6a:77:74), tid:1, ssn:1, winSize:64
I (26047) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:134:processInitSntpStateMachine] SntpStateMachine: State WaitSync: server sysned

[21:45:13 384 Rx] I (26427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (26447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (26447) wifi:<ba-del>idx:0, tid:0
I (26447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:1, initiator:1(originator)
I (26457) wifi:<ba-del>idx:1, tid:1

[21:45:14 263 Rx] I (26697) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=111 GPIO39=1827 GPIO35=0
I (26737) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:35, winSize:64
I (26767) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (26767) TASK_MONITOR: Task Name            State      Priority   Stak High Water
I (26767) TASK_ONITOR: AdcBurst             Ready      2          1668           
I (26777) TASK_MONITOR: TaskMonitor        Running    1          2224           
I (26787) TASK_MONITOR IDLE1        
[21:45:14 103 Rx]         Ready      0          912           
I (26787) TASK_MONITOR: IDLE0                Ready      0          920            
I (26797) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=187mV DC2=1641mV | RMS=24.0mV/15.2mV | A1=0.37A A2=0.38A [N=541]
I (26797) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (26817) TASK_MONITOR: taskfreezer          Blocked    1          3592           
I (26827) TASK_MONITOR: tiT                  Blocked    18         1628           
I (26837) TASK_MONITOR: ipc1                 Suspended  24         500            
I (26837) TASK_MONITOR: sys_evt              Blocked    20         388            
I (26847) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (26857) TASK_MONITOR: wifi                 Blocked    23         3600           
I (26867) TASK_MONITOR: AdcReaderTask        Blocked    5          1680           
I (26867) TASK_MONITOR: esp_timer            Suspended  22         3304           
I (26877) TASK_MONITOR: WifiManagerTask      Blocked    5          5072           
I (26887) TASK_MONITOR: EspNowReceiverT      Blocked   
[21:45:14 101 Rx]  3          1536           
I (26897) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (26897) TASK_MONITOR: RelayManagerTas      Blocked    3          5264           
I (26907) TASK_MONITOR: ConfigSystemTas      Blocked    3          5820           
I (26917) TASK_MONITOR: PowerManagerTas      Blocked    3          1680           
I (26917) TASK_MONITOR: ipc0                 Suspended  24         508            
I (26927) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (26937) TASK_MONITOR: Free Heap: 102092 bytes, Min Free Heap: 92164 bytes
I (26947) TASK_MONITOR: =============================================================

[21:45:14 504 Rx] I (27407) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.06 Oxy=5.16 pH=8.06 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (27427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:15 --- Rx] I (28427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:16 996 Rx] I (29427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices63091810856900telemetry, len: 20

[21:45:17 985 Rx] I (30427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:18 994 Rx] I (31427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (31447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (31447) wifi:<ba-del>idx:0, tid:0

[21:45:19 232 Rx] I (31657) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:43, winSize:64

[21:45:19 718 Rx] I (32397) TIMER_DBG: 100Hz timer alive | tick=3184 | heap_free=102092 min=92164
I (32407) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.12 pH=8.06 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (32427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/16391810856900/telemetry, len: 20

[21:45:20 311 Rx] I (32717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=78 GPIO39=1822 GPIO35=0
I (32817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=184mV DC2=1640mV | RMS=13.4mV/22.6mV | A1=0.34A A2=0.47A [N=602]

[21:45:20 699 Rx] I (33427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:21 987 Rx] I (34427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:22 994 Rx] I (35427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:23 988 Rx] I (36427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:24 518 Rx] I (36947) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (36947) TASK_MONITOR: Task Name            State      Priority   Stack Hih Water
I (6947) TASK_MONTOR: PowerManagerTas      Ready      3         1680           
I (36957) TASK_MONITOR: AdcBurst             Ready      2         1668           
I (36967) TASK_MONITOR: TaskMonitor          Running    1          224           
I (36967) TASK_MONITOR: IDL1                Ready      0          912            
I (36977) TASK_MONITOR: IDLE0               Ready      0          920           
I (36987) TASK_MONITOR: mqtt_task            Blocked              3452           
I (36997) TASK_MONITOR: taskfreezer         Blocked    1          3592          
I (36997) TASK_MONITOR: tiT                  Blocked    18         1628           
I (3707) TASK_MONITOR: sys_evt              Blocked    20         388            
I (37017) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (37017) TASK_MONITOR: ipc0                 Suspended  24         508            
I (37027) TASK_MONITOR: wifi                 Blocked    23         3600           
I (37037) TASK_MONITOR: AdcReaderTask        Blocked    5          1680  
[21:45:24 100 Rx]          
I (37047) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (37047) TASK_MONITOR: WifiManagerTask      Blocked    5          5072           
I (37057) TASK_MONITOR: EspNowReceiverT      Blocked    3          1536           
I (37067) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (37077) TASK_MONITOR: RelayManagerTas      Blocked    3          5264           
I (37077) TASK_MONITOR: ConfigSystemTas      Blocked    3          5820           
I (37087) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (37097) TASK_MONITOR: ipc1                 Suspended  24         500            
I (37107) TASK_MONITOR: Free Heap: 102092 bytes, Min Free Heap: 92164 bytes
I (37107) TASK_MONITOR: =============================================================

[21:45:24 350 Rx] I (37407) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.02 Oxy=5.18 pH=8.07 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (37427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:25 --- Rx] I (38427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:26 276 Rx] I (38717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=64 GPIO39=1808 GPIO35=0
I (38817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:21
[21:45:26 104 Rx] 2:computeAndSendRms] DC1=185mV DC2=1640mV | RMS=18.1mV/17.4mV | A1=0.38A A2=0.48A [N=559]

[21:45:26 604 Rx] I (39427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:27 999 Rx] I (40427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (40447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (40447) wifi:<ba-del>idx:0, tid:0

[21:45:28 237 Rx] I (40667) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:56, winSize:64

[21:45:28 750 Rx] I (41427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/16301810856900/telemetry, len: 20
I (41447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (41447) wifi:<ba-del>idx:0, tid:0

[21:45:29 263 Rx] I (41697) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:57, winSize:64

[21:45:29 711 Rx] I (42407) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.19 pH=8.09 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (42427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (42447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (42447) wifi:<ba-del>idx:0, tid:0

[21:45:30 311 Rx] I (42727) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:58, winSize:64

[21:45:30 691 Rx] I (43427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (43447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (43447) wifi:<ba-del>idx:0, tid:0

[21:45:31 302 Rx] I (43747) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:60, winSize:64

[21:45:31 681 Rx] I (44427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/tlemetry, len: 20

[21:45:32 276 Rx] I (44717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=78 GPIO39=1825 GPIO35=0
I (44817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=186mV DC2=1640mV | RMS=19.6mV/16.2mV | A1=0.39A A2=0.40A [N=586]

[21:45:32 697 Rx] I (45427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:33 988 Rx] I (46427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:34 673 Rx] I (47117) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (47117) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (47117) TASK_MONITOR: PowerManagerTas      Ready      3          1680           
I (47127) TASK_MONITOR: ConfigSystemTas      Ready      3          582          
I (47137) TASK_MONITOR: AdcBurst            Ready      2          1668           
I (4714) TASK_MONITOR: TaskMonitor          Running    1          2224           
I (47147) TASK_MONITOR: IDLE0                Ready      0          920            
I (47157) TASK_MONITOR: IDLE1                Ready      0          912           
I (47167) TASKMONITOR: mqtt_task            Blocked    5          3452           
I (47167) TASK_MONITOR: taskfreezer          Blocked    1          3592           
I (47177) TASK_MONITOR: tiT                  Blocked    18         1628           
I (47187) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (47197) TASK_MONITOR: ipc0                 Suspended  24         508            
I (47197) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (47207) TASK_MONITOR: wifi                 Blocked    23        
[21:45:34 101 Rx]  3600           
I (47217) TASK_MONITOR: AdcReaderTask        Blocked    5          1680           
I (47227) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (47227) TASK_MONITOR: WifiManagerTask      Blocked    5          5072           
I (47237) TASK_MONITOR: EspNowReceiverT      Blocked    3          1536           
I (47247) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (47247) TASK_MONITOR: RelayManagerTas      Blocked    3          5264           
I (47257) TASK_MONITOR: ipc1                 Suspended  24         500            
I (47267) TASK_MONITOR: sys_evt              Blocked    20         388            
I (47277) TASK_MONITOR: Free Heap: 102088 bytes, Min Free Heap: 92164 bytes
I (47277) TASK_MONITOR: =============================================================

[21:45:34 181 Rx] I (47407) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.20 pH=8.10 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (47427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, le: 20
I (47447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (47447) wifi:<ba-del>idx:0, tid:0

[21:45:35 320 Rx] I (47727) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:64, winSize:64

[21:45:35 688 Rx] I (48427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:36 995 Rx] I (49427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:37 990 Rx] I (50427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:38 272 Rx] I (50717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=64 GPIO39=1790 GPIO35=0
I (50817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:21
[21:45:38 100 Rx] 2:computeAndSendRms] DC1=187mV DC2=1641mV | RMS=25.0mV/22.9mV | A1=0.39A A2=0.42A [N=589]

[21:45:38 602 Rx] I (51427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:39 981 Rx] I (52407) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.02 Oxy=5.22 pH=8.13 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (52427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:40 --- Rx] I (53427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/63091810856900/telemetry, len: 20

[21:45:41 991 Rx] I (54427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:42 985 Rx] I (55427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:43 992 Rx] I (56427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:44 273 Rx] I (56717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=107 GPIO39=1809 GPIO35=0
I (56817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:21
[21:45:44 104 Rx] 2:computeAndSendRms] DC1=187mV DC2=1635mV | RMS=28.9mV/20.5mV | A1=0.47A A2=0.35A [N=548]

[21:45:44 460 Rx] I (57287) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (57287) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (57287) TASK_MONITOR: TaskMonitor          Running    1          2224           
I (57297) TASK_MONITOR: IDLE0                Ready      0          920            
I (57307) TASK_MONITOR: IDLE1                Ready      0          912            
I (57307) TASK_MONITOR: tiT                Blocked    18         1628           
I (57317) TASK_MONITOR: mqtt_task            Blocked    5          3452          
I (57327) TASK_MOITOR: taskfreezer          Blocked    1          3592           
I (57337) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (57337) TASK_MONTO: ic0                Suspended  24         508            
I (7347) TASK_MONITOR: EStopTask            locked    24         1876           
I (57357) TSK_MONITOR: ipc1                Suspended  24        500           
I (57357) TASK_MONIOR: wifi                 Blocked   23         360          
I (57367) TASK_MONITOR:AdReaderTask       Blocked    5         1680           
I (57377) TASK_MONITOR: esp_tier            Suspended  22         2152           

[21:45:44 104 Rx] I (57387) TASK_MONITOR: WifiManagerTask      Blocked    5          5072           
I (57387) TASK_MONITOR: EspNowReceiverT     Blocked    3          1536           
I (57397) TSK_MONTOR: ConfigSystemTas      Blocked    3          5820           
I (57407) TASK_MONITOR: PowerManagerTas      Blocked              1680           
I (57407) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (57417) TASK_MONITOR: RelayManagerTas      Blocked    3          5264           
I (57427) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (57427) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.01 Oxy=5.24 pH=8.15 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (57447) TASK_MONITOR: sys_evt              Blocked    20         388            
I (57467) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (57467) TASK_MONITOR: Free Heap: 98660 bytes, Min Free Heap: 92164 bytes
I (57477) TASK_MONITOR: =============================================================

[21:45:45 --- Rx] I (58437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:46 987 Rx] I (59437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:47 996 Rx] I (60437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:48 990 Rx] I (61437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:49 949 Rx] I (62397) TIMER_DBG: 100Hz timer alive | tick=6184 | heap_free=102016 min=92164
I (62407) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.28 pH=8.17 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (62437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemery, len: 20

[21:45:50 309 Rx] I (62717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=141 GPIO39=1821 GPIO35=0
I (62817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=185mV DC2=1642mV | RMS=19.7mV/23.2mV | A1=0.42A A2=0.45A [N=603]

[21:45:50 709 Rx] I (63437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:51 994 Rx] I (64437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (64447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (64447) wifi:<ba-del>idx:0, tid:0

[21:45:52 283 Rx] I (64727) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:87, winSize:64

[21:45:52 698 Rx] I (65437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:53 997 Rx] I (66437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:54 958 Rx] I (67407) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.25 pH=8.22 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (67437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (67487) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (67487) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (67487) TASK_MONITOR: TaskMonitor          Running    1          2224           
I (67497) TASK_MONITOR: IDLE0                Ready      0          920            
I (67507) TASK_MONITOR: IDLE1   
[21:45:55 104 Rx]              Ready      0          912            
I (67507) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (67517) TSK_MONITOR: tiT                 Blocked    1         1628           
I (67527 TASK_MONITOR: taskfreezer          Blocked    1          3592           
I (67537) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (67537) TASK_MONITOR: EtopTask            Blocked    24         1876           
I (67547) TASK_MONITOR: ipc                Suspended  24         500            
I (67557) TASK_MONITOR: sysevt              Blocked    20         388            
I (67567) TASK_MONITOR: wifi                 Blocked    23         3600           
I (67567) TASK_MONITOR: AdcReaderTask        Blocked    5          1680           
I (67577) TASK_MONITOR: esp_timer           Suspended  22         2152           
I (67587) TASK_MONITOR: WifiManagerTask      Blocked    5          5072           
I (67587) TASK_MONITOR: EspNowReceiverT      Blocked    3          1536           
I (67597) TASK_MONITOR:ConfigSystemTas      Bloked    3          5820           
I (6760) TSK_MONITOR: PowerManagerTas     Blo
[21:45:55 101 Rx] cked    3         1680           
I (67617) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (67617) TASK_MONITOR: RelayManagerTas      Blocked    3          5264           
I (67627) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (67637) TASK_MONITOR: ipc0                 Suspended  24         508            
I (67637) TASK_MONITOR: Free Heap: 98668 bytes, Min Free Heap: 92164 bytes
I (67647) TASK_MONITOR: =============================================================

[21:45:55 811 Rx] I (68437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (68447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (68447) wifi:<ba-del>idx:0, tid:0

[21:45:56 273 Rx] I (68717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=93 GPIO39=1831 GPIO35=0
I (68727) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:92, winSize:64
I (68817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:21
[21:45:56 102 Rx] 2:computeAndSendRms] DC1=184mV DC2=1639mV | RMS=19.0mV/28.1mV | A1=0.39A A2=0.52A [N=550]

[21:45:56 611 Rx] I (69437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:57 986 Rx] I (70437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:45:58 996 Rx] I (71437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemtry, len 20

[21:45:59 958 Rx] I (72407) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.02 Oxy=5.28 pH=8.22 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (72437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:00 --- Rx] I (73437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:01 990 Rx] I (74437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/13091810856900/telemetry, len: 20
I (74447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (74447) wifi:<ba-del>idx:0, tid:0

[21:46:02 262 Rx] I (74717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=73 GPIO39=1833 GPIO35=0
I (74767) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:99, winSize:64
I (74817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=185mV DC2=1644mV | RMS=23.1mV/24.1mV | A1=0.42A A2=0.46A [N=579]

[21:46:02 710 Rx] I (75437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:03 998 Rx] I (76437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (76447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (76447) wifi:<ba-del>idx:0, tid:0

[21:46:04 270 Rx] I (76717) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:101, winSize:64

[21:46:04 684 Rx] I (77407) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.33 pH=8.24 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (77437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/16301810856900/telemetry, len: 20

[21:46:05 234 Rx] I (77657) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (77657) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (77657) TASK_MONITOR: PowerManagerTas      Ready      3          1680           
I (77667) TASK_MONITOR: ConfigSystemTas      Ready      3          5820           
I (77677) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (77677) TASK_MONITOR: IDLE0                Ready      0          920            
I (77687) TASK_MONITOR: IDLE1                Ready      0          912            
I (77697) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (77707) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (77707) TASK_MONITOR: tskfreezer          Blocked    1         3592           
I (77717) TASK_MONITOR: tiT                 Blocked    18         1628           
I (77727) TASK_ONITOR: ipc1                 Suspnded  24         500            
I (77737) TASK_MONITOR: sys_evt              Blocked    20         388            
I (77737) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (
[21:46:05 103 Rx] 7747) TASK_MONITOR: wifi                 Blocke    2         3600          
I (77757) TSK_MONITOR:AdcReaderTask        Bloced    5          1680           
I (77757) TASK_MONITOR: esptimer            Suspended  22         2152           
I (7777) TAK_MONIOR: WifiManagerTask      Blocked    5          5072           
I (77777) TASK_MONITOR: EspNowReceiverT      Blocked    3          1536           
I (7787) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (77787) TASK_MONITOR RelayManagerTas      Blocked    3          5264           
I (77797) TASK_MONITOR: ipc0                 Suspended  24         508            
I (77807) TASK_MONITOR: EStopTask           Blocked   24        1876           
I (77807 TASK_MONITOR: Free Heap: 100344 bytes, Min Free Heap: 92164 bytes
I (77817) TASK_MONITOR: =============================================================

[21:46:05 677 Rx] I (78437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (78447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (78447) wifi:<ba-del>idx:0, tid:0

[21:46:06 326 Rx] I (78767) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:104, winSize:64

[21:46:06 657 Rx] I (79437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:07 991 Rx] I (80437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/1609181085690/telemetry, len: 20
I (80447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (80447) wifi:<ba-del>idx:0, tid:0

[21:46:08 271 Rx] I (80717) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:107, winSize:64
I (80717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=73 GPIO39=1827 GPIO35=0
I (80817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:21
[21:46:08 104 Rx] 2:computeAndSendRms] DC1=184mV DC2=1642mV | RMS=18.2mV/18.5mV | A1=0.42A A2=0.40A [N=584]

[21:46:08 612 Rx] I (81437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:09 961 Rx] I (82407) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.42 pH=8.25 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (82437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:10 --- Rx] I (83437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (83447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (83447) wifi:<ba-del>idx:0, tid:0

[21:46:11 229 Rx] I (83677) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:111, winSize:64

[21:46:11 753 Rx] I (84437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (84447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (84447) wifi:<ba-del>idx:0, tid:0

[21:46:12 264 Rx] I (84707) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:112, winSize:64

[21:46:12 720 Rx] I (85437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (85447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (85447) wifi:<ba-del>idx:0, tid:0

[21:46:13 286 Rx] I (85737) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:113, winSize:64

[21:46:13 698 Rx] I (86437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/16309180856900/telemetry, len: 20

[21:46:14 274 Rx] I (86717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=56 GPIO39=1826 GPIO35=0
I (86817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:21
[21:46:14 104 Rx] 2:computeAndSendRms] DC1=185mV DC2=1642mV | RMS=20.2mV/21.1mV | A1=0.37A A2=0.39A [N=589]

[21:46:14 586 Rx] I (87407) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.02 Oxy=5.44 pH=8.27 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (87437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:15 415 Rx] I (87827) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (87827) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (87827) TASK_MONITOR: PowerManagerTas      Ready      3          1680           
I (87837) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (87847) TASK_MONITOR: IDLE0                Ready      0          920            
I (87857) TASK_MONITOR: IDLE1                Ready      0          912            
I (87857) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (87867) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (87877) TASK_MONITOR: taskfreezer          Blocked    1          3592           
I (87877) TASK_MONITOR: tiT                  Blocked    18         1628           
I (87887) TASK_MONITOR: sys_evt              Blocked    20         388            
I (87897) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (87907) TASK_MONITOR: ipc0                 Suspended  24         508            
I (87907) TASK_MONITOR: wifi                 Blocked    23         600           
I (87917) TASK_MONITOR: AdcReaerTask        Blocked    5     
[21:46:15 102 Rx]      1680           
I (87927) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (87927)TASK_MONITR: WifiManagerTask      Blocked    5          5072           
I (87937) TASK_MONITOR: EspNowRceiverT      Blocked    3          1536          
I (87947) TASK_MONITOR: MqttManagerTask     Blocked    3          4872           
I (87957) TASK_MONITOR: RelayManagerTas      Blocked    3          524           
I (87957) TASK_MONITOR: ConfigSystemTas      Blocked   3          5820           
I (87967) TASK_MONTOR: EStopTask            Blocked    24         1876          
I (87977) TASK_MONITOR: ipc1                 Suspended  24         500            
I (87987) TASK_MONITOR: Free Heap: 12016 bytes, Min Free Heap: 92164 bytes
I (87987) TASK_MONITR: ===========================================================

[21:46:15 497 Rx] I (88437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:16 991 Rx] I (89437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:17 996 Rx] I (90437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:18 991 Rx] I (91437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (91447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (91447) wifi:<ba-del>idx:0, tid:0

[21:46:19 319 Rx] I (91767) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:120, winSize:64

[21:46:19 623 Rx] I (92397) TIMER_DBG: 100Hz timer alive | tick=9184 | heap_free=102016 min=92164
I (92427) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.02 Oxy=5.49 pH=8.28 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (92437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemery to topic: devices/16391810856900/telemetry, len: 0

[21:46:20 314 Rx] I (92717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=80 GPIO39=1847 GPIO35=0
I (92817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=184mV DC2=1644mV | RMS=20.9mV/29.8mV 
[21:46:20 102 Rx] | A1=0.36A A2=0.50A [N=601]

[21:46:20 611 Rx] I (93437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (93447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (93447) wifi:<ba-del>idx:0, tid:0

[21:46:21 268 Rx] I (93717) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:123, winSize:64

[21:46:21 710 Rx] I (94437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:22 989 Rx] I (95437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/16309181856900/telemetry, len: 20
I (95447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (95447) wifi:<ba-del>idx:0, tid:0

[21:46:23 313 Rx] I (95767) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:125, winSize:64

[21:46:23 663 Rx] I (96437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:24 976 Rx] I (97417) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.49 pH=8.31 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (97437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:25 574 Rx] I (97997) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (97997) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (97997) TASK_MONITOR: PowerManagerTas      Ready      3          1680           
I (98007) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (98017) TASK_MONITOR: IDLE0                Ready      0          920            
I (98027) TASK_MONITOR: IDLE1                Ready      0          912            
I (98027) TASK_MONITOR: tiT                  Blocked    18         1628           
I (98037) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (98047) TASK_MONITOR: taskfreezer          Blocked    1          3592           
I (98047) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (98057) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (98067) TASK_MONITOR: ipc0                 Suspended  24         508            
I (98077) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (98077) TASK_MONITOR: wifi                 Blocked    23         3600           
[21:46:25 102 Rx] 
I (98087) TASK_MONITOR: AdcReaderTask        Blocked    5          1680           
I (98097) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (98107) TASK_MONITOR: WifiManagerTask      Blocked    5          5072           
I (98107) TASK_MONITOR: EspNowReceiverT      Blocked    3          1536           
I (98117) TASK_MONITOR MqttManagerTask      Blocked    3          4872          
I (98127) TASK_MONITR: RelayManagerTas      Blocked    3          5264           
I 9827) TASK_MONITOR: ConfigSystemTas      Blocked    3          5820           
I (98137) TASK_MONITOR: ipc1                 Suspended  24         500           
I (98147) TAS_MONITOR: sys_evt             Blocked   20         388            
I (98157) TASK_MONITOR: Free Heap: 102004 bytes Min Free Heap: 92164 bytes
I (98157) TASK_MONITOR: ===========================================================

[21:46:25 336 Rx] I (98437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:26 270 Rx] I (98717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=112 GPIO39=1833 GPIO35=0
I (98817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:21
[21:46:26 101 Rx] 2:computeAndSendRms] DC1=185mV DC2=1642mV | RMS=23.7mV/30.1mV | A1=0.42A A2=0.53A [N=562]

[21:46:26 613 Rx] I (99437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:27 991 Rx] I (100437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:28 996 Rx] I (101437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: device/16309181085900/teleetry, len: 20

[21:46:29 969 Rx] I (102417) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.02 Oxy=5.53 pH=8.31 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (102437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (102447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (102447) wifi:<ba-del>idx:0, tid:0

[21:46:30 311 Rx] I (102727) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:134, winSize:64

[21:46:30 694 Rx] I (103437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (103447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (103447) wifi:<ba-del>idx:0, tid:0

[21:46:31 311 Rx] I (103757) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:136, winSize:64

[21:46:31 672 Rx] I (104437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/16301810856900/telemetry, len: 20

[21:46:32 271 Rx] I (104717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=51 GPIO39=1830 GPIO35=0
I (104817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=184mV DC2=1641mV | RMS=20.1mV/25.8mV
[21:46:32 104 Rx]  | A1=0.39A A2=0.48A [N=584]

[21:46:32 610 Rx] I (105437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:33 992 Rx] I (106437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:34 964 Rx] I (107417) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.56 pH=8.33 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (107437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemtry, len: 20

[21:46:35 734 Rx] I (108167) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (108167) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (108167) TASK_MONITOR: PowerManagerTas      Ready      3          1680           
I (108177) TASK_MONITOR: ConfigSystemTas      Ready      3          5820           
I (108187) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (108197) TASK_MONITOR: IDLE0                Ready      0          920            
I (108197) TASK_MONITOR: IDLE1                Ready      0          912            
I (108207) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (108217) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (108227) TASK_MONITOR: taskfreezer          Blocked    1          3592           
I (108227) TASK_MONITOR: tiT                  Blocked    18         1628           
I (108237) TASK_MONITOR: ipc0                 Suspended  24         508            
I (108247) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (108247) TASK_MONITOR: ipc1                 Suspended  24         500            
I (108257) TASK_MONITOR: wifi                 Blocked    23         3600           
I (108267) TASK_MONITOR
[21:46:35 104 Rx] : AdcReaderTask        Blocked    5          1680           
I (108277) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (108277) TASK_MONITOR: WifiManagerTask      Blocked    5          5072           
I (108287) TASK_MONITOR: EspNowReceiverT      Blocked    3          1536           
I (108297) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (108307) TASK_MONITOR: RelayManagerTas      Blocked    3          5264           
I (108307) TASK_MONITOR: sys_evt              Blocked    20         38           
I (18317) TASK_MONITOR: Tmr Svc              Blocked    1          154           
I (108327) TASK_MONITOR: Free Heap: 102016 bytes, Min Free Heap: 92164 byts
I (108327) TASK_MONITOR: =========================================================

[21:46:35 154 Rx] I (108437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:36 989 Rx] I (109437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:37 994 Rx] I (110437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (110467) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (110467) wifi:<ba-del>idx:0, tid:0

[21:46:38 267 Rx] I (110707) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:144, winSize:64
I (110717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=112 GPIO39=1841 GPIO35=0
I (110817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:46:38 101 Rx] 12:computeAndSendRms] DC1=185mV DC2=1644mV | RMS=18.4mV/26.1mV | A1=0.40A A2=0.43A [N=594]

[21:46:38 612 Rx] I (111437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (111447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (111447) wifi:<ba-del>idx:0, tid:0

[21:46:39 286 Rx] I (111737) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:146, winSize:64

[21:46:39 676 Rx] I (112417) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.03 Oxy=5.66 pH=8.33 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (112437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:40 --- Rx] I (113437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: device/163091810856900/elemetry, len: 20

[21:46:41 997 Rx] I (114437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:42 999 Rx] I (115437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:43 988 Rx] I (116437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:44 264 Rx] I (116717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=69 GPIO39=1830 GPIO35=0
I (116817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=187mV DC2=1642mV | RMS=25.6mV/17.2mV | A1=0.41A A2=0.38A [N=566]

[21:46:44 689 Rx] I (117417) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.02 Oxy=5.68 pH=8.33 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7
I (117437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (117447) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (117447) wifi:<ba-del>idx:0, tid:0

[21:46:45 253 Rx] I (117677) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:154, winSize:64

[21:46:45 643 Rx] I (118337) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (118337) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (118337) TASK_MONITOR: PowerManagerTas      Ready      3          1680           
I (118347) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (118357) TASK_MONITOR: IDLE0                Ready      0          920            
I (118367) TASK_MONITOR: IDLE1                Ready      0          912            
I (118367) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (118377) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (118387) TASK_MONITOR: taskfreezer          Blocked    1          3592           
I (118397) TASK_MONITOR: tiT                  Blocked    18         1628           
I (118397) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (118407) TASK_MONITOR: ipc1                 Suspended  24         500            
I (118417) TASK_MONITOR: sys_evt              Blocked    20         388            
I (118417) TASK_MONITOR: wifi                 Blocked    23         3600           
I (118427) TASK_MONITOR: AdcReaderTask        Blocked    5          1680           
I (118437) [debug]MqttM
[21:46:45 102 Rx] anagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (118447) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (118457) TASK_MONITOR: WifiManagerTask      Blocked    5          5072           
I (118467) TASK_MONITOR: EspNowReceiverT      Blocked    3          1536           
I (118477) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (118477) TASK_MONITOR: RelayManagerTas      Blocked    3          5264           
I (118487) TASK_MONITOR: ConfigSystemTas      Blocked    3          5820           
I (118497) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (118507) TASK_MONITOR: ipc0                 Suspended  24         508            
I (118507) TASK_MONITOR: Free eap: 100340 bytes, Min Free Heap: 92164 bytes
I (118517) TASK_MONITOR: ============================================================

[21:46:46 984 Rx] I (119437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:47 992 Rx] I (120437) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[21:46:49 --- Rx] I (122397) TIMER_DBG: 100Hz timer alive | tick=12184 | heap_free=102012 min=92164
I (122417) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.73 pH=8.34 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7

[21:46:50 310 Rx] I (122717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=71 GPIO39=1808 GPIO35=0
I (122817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=183mV DC2=1643mV | RMS=11.9mV/20.0mV | A1=0.34A A2=0.39A [N=613]

[21:46:54 --- Rx] I (127427) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.78 pH=8.34 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7

[21:46:55 414 Rx] I (127847) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (127847) wifi:<ba-del>idx:0, tid:0

[21:46:55 264 Rx] I (128127) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:159, winSize:64

[21:46:56 388 Rx] I (128527) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (128527) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (128527) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (128537) TASK_MONITOR: IDLE0                Ready      0          920            
I (128547) TASK_MONITOR: IDLE1                Ready      0          912            
I (128557) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (128557) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (128567) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (128577) TASK_MONITOR: tiT                  Blocked    18         1628           
I (128587) TASK_MONITOR: ipc1                 Suspended  24         500            
I (128587) TASK_MONITOR: sys_evt              Blocked    20         388            
I (128597) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (128607) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (128607) TASK_MONITOR: RelayManagerTas      Suspended  3          5264           
I (128617) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (128627) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           

[21:46:56 104 Rx] I (128637) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (128637) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (128647) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (128657) TASK_MONITOR: wifi                 Blocked    23         3600           
I (128667) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (128667) TASK_MONITOR: ipc0                 Suspended  24         508            
I (128677) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (128687) TASK_MONITOR: Free Heap: 102016 bytes, Min Free Heap: 92164 bytes
I (128697) TASK_MONITOR: =============================================================
I (128717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=88 GPIO39=1826 GPIO35=0

[21:46:56 166 Rx] I (128817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=184mV DC2=1646mV | RMS=21.3mV/20.9mV | A1=0.41A A2=0.44A [N=630]

[21:46:59 --- Rx] I (132417) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.03 Oxy=5.81 pH=8.38 | Temp=31.06Â°C | Volt=0.00V | PhaseLostMask=7

[21:47:02 --- Rx] I (134717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=82 GPIO39=1833 GPIO35=0
I (134817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:47:02 104 Rx] 12:computeAndSendRms] DC1=184mV DC2=1645mV | RMS=27.5mV/24.9mV | A1=0.42A A2=0.51A [N=630]

[21:47:06 --- Rx] I (138697) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (138697) TASK_MONITOR: Task Name            State      Prioit   Stack High ater
I (138697) TASKMONITR: AdcBurst             Ready      2         1668           
I (138707) TASK_MONITOR: TaskMonitor         Runing    1          2128           
I (138717) TASK_MONITOR: IDLE1                Ready      0          912            
I (138717) TASK_MONITOR: IDLE0                Ready      0          920            
I (138727) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (138737) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (138747) TASK_MONITOR: tiT                  Blocked    18         1628           
I (138747) TASK_MONITOR: sys_evt              Blocked    20         388            
I (138757) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (138767) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (138777) TASK_MONITOR: RelayManagerTas      Suspended  3          5264           
I (138777) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (138787) TASK_MONITOR: AdcReaderTask        Suspende
[21:47:06 102 Rx] d  5          1680           
I (138797) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (138807) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (138807) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (138817) TASK_MONITOR: ipc0                 Suspended  24         508            
I (138827) TASK_MONITOR: wifi                 Blocked    23         3600           
I (138837) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (138837) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (138847) TASK_MONITOR: ipc1                 Suspended  24         500            
I (138857) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (138857) TASK_MONITOR: =============================================================

[21:47:08 --- Rx] I (140717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=101 GPIO39=1803 GPIO35=0
I (140817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=184mV DC2=1642mV | RMS=24.2mV/22.0mV | A1=0.42A A2=0.43A [N=629]

[21:47:14 --- Rx] I (146717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=80 GPIO39=1812 GPIO35=0
I (146817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:47:14 101 Rx] 12:computeAndSendRms] DC1=183mV DC2=1644mV | RMS=16.9mV/21.7mV | A1=0.39A A2=0.43A [N=629]

[21:47:16 --- Rx] I (148867) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (148867) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (148867) TASK_MONITOR: AdcBurst             Ready      2          168          
I (148877) TASK_MONITOR: TaskMonito          Running    1          2128           
I (14887 TASK_MONITOR:IDLE1               Ready      0         912           
I (148887) TASK_MONITOR:IDLE0               Rady      0          920            
I (148897) TAK_MONITOR: taskfreezr          Bocked    1          3560           
I (148907) TASK_MONITOR: mqtt_task            Blocked    5         3452           
I (148917) TASK_MONITOR: tiT                  Blocked    18         1628           
I (148917) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (148927) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (148937) TASK_MONITOR: RelayManagerTas      Suspended  3          5264           
I (148947) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (148947) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (148957) TASK_MONITOR: ConfigSystemTas      Suspended  3     
[21:47:16 100 Rx]      5820           
I (148967) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (148977) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (148977) TASK_MONITOR: ipc0                 Suspended  24         508            
I (148987) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (148997) TASK_MONITOR: wifi                 Blocked    23         3600           
I (148997) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (149007) TASK_MONITOR: ipc1                 Suspended  24         500            
I (149017) TASK_MONITOR: sys_evt              Blocked    20         388            
I (149027) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (149027) TASK_MONITOR: =============================================================

[21:47:19 --- Rx] I (152397) TIMER_DBG: 100Hz timer alive | tick=15184 | heap_free=102036 min=92164

[21:47:20 319 Rx] I (152717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=76 GPIO39=1831 GPIO35=0
I (152817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:47:20 102 Rx] 12:computeAndSendRms] DC1=184mV DC2=1645mV | RMS=12.3mV/26.8mV | A1=0.36A A2=0.54A [N=634]

[21:47:26 --- Rx] I (158717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=87 GPIO39=1827 GPIO35=0
I (158817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=185mV DC2=1642mV | RMS=22.4mV/23.2mV
[21:47:26 101 Rx]  | A1=0.37A A2=0.46A [N=570]

[21:47:26 205 Rx] I (159037) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (159037) TASK_MONITOR: Task Name            State      Priority   Stac High Water
I (159037) TASK_MONITOR: AdcBurst             Ready      2         1668           
I (159047) TASK_ONITOR: TskMonior          Running    1          2128           
I (159057) TASK_MONITOR: IDLE1                Ready      0          912            
I (159067) TASK_MONITO: IDLE0                Read      0          920            
I (15967) TASK_MONITO: mqtt_task           Blocked    5          3452           
I (159077) TAK_MONITOR: taskfeezer         Blocked    1         3560           
I (159087) TASK_MONITOR: tiT                  Blocked    18         1628           
I (159087) TASK_MONITOR: WifiManagerTask      Suspended  5         5072           
I (159097) TASK_MONITOR: RelayManagerTa      Suspended  3         5264           
I (159107) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (159117) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (159117) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (159127) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (159137) TASK_MONITOR: EspNowReceiverT 
[21:47:26 104 Rx]      Suspended  3          1536           
I (159147) TASK_MONITOR: ipc0                 Suspended  24         508            
I (159147) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (159157) TASK_MONITOR: ipc1                 Suspended  24         500            
I (159167) TASK_MONITOR: wifi                 Blocked    23         3600           
I (159167) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (159177) TASK_MONITOR: sys_evt              Blocked    20         388            
I (159187) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (159197) TASK_MONITOR: Free Heap: 101696 bytes, Min Free Heap: 92164 bytes
I (159197) TASK_MONITOR: =============================================================

[21:47:32 --- Rx] I (164717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=71 GPIO39=1814 GPIO35=0
I (164817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=183mV DC2=1626mV | RMS=23.8mV/27.1mV
[21:47:32 104 Rx]  | A1=0.34A A2=0.46A [N=602]

[21:47:36 --- Rx] I (169207) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (169207) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (169207) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (169217) TASK_MONITOR: IDLE0               Ready      0         920            
I (169227) TASK_MNITOR: IDLE1                Ready      0         912           
I (169237) TASK_MONITOR: AdcBurst            Blocked    2          1668           
I (169237) TASK_MONTOR: taskfreezer         Blocked    1         3560          
I (16924) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (169257) TASK_MONIOR: tiT                  Blocked    1         1628          
I (16957)TASK_ONITOR: elayManagerTas      Suspended  3          5264           
I (69267) TASK_MONITR: PowerManagerTas      Suspended  3         1680           
I (16927) TAK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (169287) TASK_MONITOR: ConfigSystemTas      Suspendd  3          5820           
I (169287) TASK_MONITOR: MqttManagerTask      Suspended           4872           
I (169297) TASKMONITR: EspNowReeiverT      Suspended  3          1536   
[21:47:36 102 Rx]        
I (169307) TASK_MONITOR: ipc0               Suspended  24         508           
I (169307) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (169317) TASK_MONITOR: ipc1                 Suspended  24         500            
I (169327) TASK_MONITOR: sys_evt              Blocked    20         388            
I (169337) TASK_MONITOR: wifi                 Blocked    23         3600           
I (169337) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (169347) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (169357) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (169367) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (169367) TASK_MONITOR: =============================================================

[21:47:38 --- Rx] I (170717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=66 GPIO39=1834 GPIO35=0
I (170817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=182mV DC2=1644mV | RMS=11.8mV/27.4mV
[21:47:38 101 Rx]  | A1=0.30A A2=0.49A [N=637]

[21:47:44 --- Rx] I (176717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=113 GPIO39=1825 GPIO35=0
I (176817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=182mV DC2=1642mV | RMS=11.3mV/12.3mV | A1=0.34A A2=0.41A [N=629]

[21:47:46 --- Rx] I (179377) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (179377) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (179377) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (179387) TASK_MONITOR: IDLE0                Ready      0          920            
I (179397) TASK_MONITOR: IDLE1                Ready      0          912            
I (179407) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (179407) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (179417) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (179427) TASK_MONITOR: tiT                locked    18        1628           
I (179427) TASK_MONITOR: PowerManagerTas      Suspended 3          1680           
I (179437) TASK_MONITOR: AdceaderTask        Suspended  5         1680           
I (179447) TASK_MONITOR: ConfigSystemTas      Suspended  3          580           
I (179457) TASK_MONITOR: qttManagerTask      Suspended  3          4872          
I (17457) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536          
I (179467) TASK_MONITO: ipc0                Susended  24         508           
I (179477) TASK_MONITOR: EStopTask     
[21:47:46 100 Rx]        Blocked    24         1876           
I (179487) TASK_MONITOR: ipc1                 Suspended  24         500            
I (179487) TASK_MONITOR: ss_evt              Blocked   0         388           
I (179497) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (179507) TASK_MONITOR: wii                Blocked    23         3600           
I (179507) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (179517) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (179527) TASK_MONITOR: RelayManagerTas      Suspended  3          5264           
I (179537) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (179537) TASK_MONITOR: =============================================================

[21:47:49 --- Rx] I (182397) TIMER_DBG: 100Hz timer alive | tick=18184 | heap_free=102036 min=92164

[21:47:50 311 Rx] I (182717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=49 GPIO39=1828 GPIO35=0

[21:47:50 100 Rx] I (182817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=183mV DC2=1643mV | RMS=15.8mV/18.4mV | A1=0.35A A2=0.43A [N=630]

[21:47:56 --- Rx] I (188717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=92 GPIO39=1831 GPIO35=0
I (188817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:47:56 102 Rx] 12:computeAndSendRms] DC1=183mV DC2=1642mV | RMS=15.2mV/19.6mV | A1=0.31A A2=0.37A [N=628]

[21:47:57 725 Rx] I (189547) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (189547) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (189547) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (189557) TASK_MONITOR: IDLE0                Ready      0          920            
I (189567) TASK_MONITOR: IDLE1                Ready      0          912            
I (189577) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (189577) TASK_MONITOR: tiT                  Blocked    18         1628           
I (189587) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (189597) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (189597) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (189607) TASK_MONITOR: ConfigSystemTas      Suspened  3         5820          
I (189617) TASK_MONITOR: MqttManagerTask      Suspnded  3         4872          
I (189627) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (189627) TASK_MONITOR:ipc0                 Suspended  4         508            
I (189637) TSK_MONITOR: EStopTask            Blocked    24         1876           
I (189647) TASK_MONITOR: ipc1                 Suspended  24         500            
I (189657
[21:47:57 103 Rx] ) TASK_MONITOR: sys_evt              Blocked    20         388            
I (189657) TASK_MONITOR: Tmr Svc             Blocked    1         1544           
I (189667) TASK_MONITOR: WifiManagerTask      Suspended  5          072           
I (189677) TASK_MONITOR: ifi                 Blocked    23         3600           
I (189677) TASK_MONITOR: esp_timer           Suspended  22         2152           
I (189687) TASK_MONTOR: RelayManagerTas      Suspended  3          5264          
I (189697) TASK_MONITOR: PowerManagerTas     Suspende  3          1680          
I (189707)TASK_MONITOR: Free Heap:100476bytes, Min Free Heap: 92164 bytes
I (189707) TASK_MONITOR: =============================================================

[21:48:02 --- Rx] I (194717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=70 GPIO39=1822 GPIO35=0
I (194817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=184mV DC2=1640mV | RMS=23.3mV/26.0mV
[21:48:02 103 Rx]  | A1=0.39A A2=0.49A [N=628]

[21:48:07 --- Rx] I (199717) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (199717) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (199717) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (199727) TASK_MONITOR: IDLE0                Ready      0          920            
I (199737) TASK_MONITOR: IDLE1                Ready      0          912            
I (199747) TASK_MONITOR: tiT                  Blocked    18         1628           
I (199747) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (199757) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (199767) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (199777) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (199777) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (199787) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (199797) TASK_MONITOR: ipc0                 Suspended  24         508            
I (199797) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (199807) TASK_MONITOR: ipc1                 Suspended  24         500           
I (199817) TASK_MONITOR:
[21:48:07 103 Rx]  sys_evt              Blocked    20        388            
I (99827) TASK_MONIOR: Tmr Svc              Blocked    1         1544          
I (199827) TASK_ONITOR: WifiManagerTask      Suspended 5        5072           
I (199837) TASK_MONITOR: RelayManagerTas      Suspended  3         5264           
I (199847) TASK_MOITOR: wifi                 Blocked    23         3600           
I (199857) TASK_MONITOR: esp_timer           Suspended  22       2152           
I (199857) TASK_MONITOR: PowerManagerTas      Suspended 3         1680           
I (199867) TASK_MONITOR: AdcReaderTask        Suspended  5         1680           
I (199877) TASK_MONITOR: Free Heap: 02036 byte, Min Free Heap: 92164 bytes
I (19977) TAK_MONTOR: ============================================================

[21:48:08 881 Rx] I (200717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=88 GPIO39=1827 GPIO35=0
I (200817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:48:08 101 Rx] 12:computeAndSendRms] DC1=182mV DC2=1639mV | RMS=10.7mV/23.1mV | A1=0.32A A2=0.46A [N=631]

[21:48:14 --- Rx] I (206717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=90 GPIO39=1826 GPIO35=0
I (206817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=184mV DC2=1642mV | RMS=20.4mV/26.9mV | A1=0.41A A2=0.45A [N=629]

[21:48:17 --- Rx] I (209887) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (209887) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (209887) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (209897) TASK_MONITOR: IDLE0                Ready      0          920            
I (209907) TASK_MONITOR: IDLE1                Ready      0          912            
I (209917) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (209917) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (209927) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (209937) TASK_MONITOR: tiT                  Blocked    18         1628           
I (209947) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (209947) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (209957) TASK_MONITOR: ipc0                 Suspended  24         508            
I (209967) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (209967) TASK_MONITOR: ipc1                 Suspended  24         500            
I (209977) TASK_MONITOR: sys_evt              Blocked    20         388            
I (209987) TASK_MONITOR
[21:48:17 103 Rx] : Tmr Svc              Blocked    1          1544           
I (209997) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (209997) TASK_MONITOR: RelayManagerTas      Suspended  3          5264           
I (210007) TASK_MONITOR: PowerManagerTas      Suspended  3         1680         
I (210017) TASK_ONITOR: wifi                 Blocked    23         3600           
I (1027) TASK_MOITOR: esp_imer            Suspended  2        2152          
I (210027) TASK_MONITOR: AdcRaderTask       Suspende  5          1680           
I 210037) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (210047) TASK_MONTOR: ree Hap: 12036 bytes,Min Free Heap: 92164 bytes
I (20047) TSK_MONITOR: ============================================================

[21:48:19 --- Rx] I (212397) TIMER_DBG: 100Hz timer alive | tick=21184 | heap_free=102036 min=92164

[21:48:20 308 Rx] I (212717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=91 GPIO39=1831 GPIO35=0
I (212817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=184mV DC2=1642mV | RMS=19.7mV/23.6mV | A1=0.40A A2=0.48A [N=631]

[21:48:26 --- Rx] I (218717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=90 GPIO39=1831 GPIO35=0
I (218817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:48:26 104 Rx] 12:computeAndSendRms] DC1=183mV DC2=1644mV | RMS=21.1mV/22.6mV | A1=0.35A A2=0.48A [N=628]

[21:48:27 --- Rx] I (220057) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (220057) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (220057) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (220067) TASK_MONITOR: IDLE0                Ready      0          920            
I (220077) TASK_MONITOR: IDLE1                Ready      0          912            
I (220087) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (220087) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (220097) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (220107) TASK_MONITOR: tiT                  Blocked    18         1628           
I (220107) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (220117) TASK_MONITOR: ipc0                 Suspended  24         508            
I (220127) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (220137) TASK_MONITOR: ipc1                 Suspended  24         500            
I (220137) TASK_MONITOR: sys_evt              Blocked    20         3
[21:48:27 106 Rx] 88            
I (220147) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (220157) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (220167) TASK_MONITOR: RelayManagerTas      Suspended  3          5264           
I (220167) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (220177) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (220187) TASK_MONITOR: wifi                 Blocked    23         3600           
I (220197) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (220197) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (220207) TASK_MONITOR: MqttManagerTask      Suspended  3         4872           
I (220217) TASK_MONITO: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (220217) TASK_MONITOR: ============================================================

[21:48:32 --- Rx] I (224717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=80 GPIO39=1826 GPIO35=0
I (224817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:48:32 102 Rx] 12:computeAndSendRms] DC1=182mV DC2=1642mV | RMS=12.3mV/25.2mV | A1=0.28A A2=0.45A [N=629]

[21:48:37 --- Rx] I (230227) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (230227) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (230227) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (230237) TASK_MONITOR: IDLE0                Ready      0          920            
I (230247) TASK_MONITOR: IDLE1                Ready      0          912            
I (230257) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (230257) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (230267) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (230277) TASK_MONITOR: tiT                  Blocked    18         1628           
I (230287) TASK_MONITOR: ipc0                 Suspended  24         508            
I (230287) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (230297) TASK_MONITOR: ipc1                 Suspended  24         500            
I (230307) TASK_MONITOR: sys_evt              Blocked    20         388            
I (230307) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (230317) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (230327) TASK_MONITOR
[21:48:37 102 Rx] : RelayManagerTas      Suspended  3          5264           
I (230337) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (230337) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (230347) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (230357) TASK_MONITOR: wifi                 Blocked    23         3600           
I (230367) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (230367) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (230377) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (230387) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (230397) TASK_MONITOR: =============================================================

[21:48:38 368 Rx] I (230717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=91 GPIO39=1831 GPIO35=0
I (230817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:48:38 104 Rx] 12:computeAndSendRms] DC1=183mV DC2=1644mV | RMS=13.4mV/22.2mV | A1=0.35A A2=0.49A [N=629]

[21:48:44 --- Rx] I (236717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=116 GPIO39=1827 GPIO35=0
I (236817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=185mV DC2=1641mV | RMS=13.8mV/17.6mV
[21:48:44 102 Rx]  | A1=0.33A A2=0.43A [N=630]

[21:48:47 --- Rx] I (240397) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (240397) TASK_MONITOR: Task Name            State      Priority   Stack Hig Water
I (240397) TAS_MONITOR: mqtt_task            Ready      5          3452           
I (240407) TASK_MONITOR: AdcBurst             Ready      2          1668           
I (240417) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (240427) TASK_MONITOR: IDLE1                Ready      0          912            
I (240427) TASK_MONITOR: IDLE0                Ready      0          920            
I (240437) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (240447) TASK_MONITOR: tiT                  Blocked    18         1628           
I (240457) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (240457) TASK_MONITOR: ipc1                 Suspended  24         500            
I (240467) TASK_MONITOR: sys_evt              Blocked    20         388            
I (240477) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (240477) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (240487) TASK_MONITOR: RelayManagerTas      Suspended  3          5264           
I (240497) TASK_MONITOR: 
[21:48:48 105 Rx] PowerManagerTas      Suspended  3          1680           
I (240507) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (240507) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (240517) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (240527) TASK_MONITOR: wifi                 Blocked    23         3600           
I (240537) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (240537) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (240547) TASK_MONITOR: ipc0                 Suspended  24         508            
I (240557) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (240567) TASK_MONITOR: =============================================================

[21:48:49 --- Rx] I (242397) TIMER_DBG: 100Hz timer alive | tick=24184 | heap_free=102036 min=92164

[21:48:50 319 Rx] I (242717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=66 GPIO39=1829 GPIO35=0
I (242817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=183mV DC2=1624mV | RMS=25.2mV/27.7mV
[21:48:50 104 Rx]  | A1=0.42A A2=0.49A [N=605]

[21:48:56 --- Rx] I (248717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=49 GPIO39=1826 GPIO35=0
I (248817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:48:56 103 Rx] 12:computeAndSendRms] DC1=183mV DC2=1643mV | RMS=12.4mV/20.7mV | A1=0.33A A2=0.43A [N=629]

[21:48:58 --- Rx] I (250567) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (250567) TASK_MONITOR: Task Name            State      Priority   Stack High Watr
I (250567) TASK_MONITOR: AdcBurst            Ready      2          1668           
I (250577) TASK_MONITOR: TaskMonitor          Running    1          2128          
I (250587) TAK_MONITOR: IDLE1                Ready      0          912           
I (250597) TASK_MONITOR: IDLE0                Ready     0          920            
I (250597) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (250607) TASK_MONITOR: mqtt_task           Blocked    5          3452           
I (250617) TASK_MONITOR: tiT                  Blocked    18         1628           
I (250617) TASK_MONITOR: ipc1                 Suspended  24         500            
I (250627) TASK_MONITOR: sys_evt              Blocked    20         388            
I (250637) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (250647) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (250647) TASK_MONITOR: RelayManagerTas      Suspended  3          5264    
[21:48:58 100 Rx]        
I (250657) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (250667) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (250677) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (250677) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (250687) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (250697) TASK_MONITOR: wifi                 Blocked    23         3600           
I (250707) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (250707) TASK_MONITOR: ipc0                 Suspended  24         508            
I (250717) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (250727) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (250727) TASK_MONITOR: =============================================================

[21:49:02 --- Rx] I (254717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=53 GPIO39=1823 GPIO35=0
I (254817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=183mV DC2=1645mV | RMS=20.4mV/19.9mV
[21:49:02 101 Rx]  | A1=0.37A A2=0.41A [N=630]

[21:49:08 --- Rx] I (260717) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=67 GPIO39=1831 GPIO35=0
I (260737) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (260737) TASK_MONITOR: Task Name            Stat      Priority   Stack High Water
I (26037) TAK_MONITOR: AdcBurst             Ready      2          1668           
I (260747) TASK_MONITOR: TaskMonitor          Running   1         2128           
I (260757) TASK_MONITOR: IDLE1                Ready      0         912            
I (26077) TASK_MONITOR: IDLE0                Ready      0          920            
I (260767) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (260777) TASK_MONITOR mqtt_task           Blocked    5         3452           
I (260787) TASK_MONITOR: iT                  Blocked    18         1628           
I 26787) TASK_MONITOR sys_et              Blocked    20         388            
I (260797) TASK_MONITOR: Tmr Svc              Blocked    1         1544          
I (260807) TASK_MONITOR: WifiManagerTask      Suspended  5         5072           
I (260817) TASK_MONITOR: RelayManagerTas      Su
[21:49:08 104 Rx] spended  3          5264           
I (260817) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=186mV DC2=1640mV | RMS=11.6mV/26.0mV | A1=0.33A A2=0.44A [N=604]
I (260817) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (260837) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (260847) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (260857) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (260867) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (260867) TASK_MONITOR: ipc0                 Suspended  24         508            
I (260877) TASK_MONITOR: wifi                 Blocked    23         3600           
I (260887) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (260897) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (260897) TASK_MONITOR: ipc1                 Suspended  24         500            
I (260907) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (260917) TASK_MONITOR: ==================================
[21:49:08 101 Rx] ===========================

[21:49:14 --- Rx] I (266737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=101 GPIO39=1826 GPIO35=0
I (266837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:49:14 101 Rx] 12:computeAndSendRms] DC1=183mV DC2=1640mV | RMS=14.6mV/23.3mV | A1=0.34A A2=0.44A [N=629]

[21:49:18 --- Rx] I (270917) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (270917) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (270917) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (270927) TASK_MONITOR: IDLE0                Ready      0          920            
I (270937) TASK_MONITOR: IDL1               Ready     0         912           
I (270947) TASK_MONITOR: tiT                  Blocked    18         1628           
I (70947) TASK_MONTOR: mqtt_task            Blocked    5          3452          
I (270957) TASK_MONITOR:taskfeezer         Blocked    1          3560           
I (270967 TASK_MONITOR: AdcBust             Blocked    2          1668           
I (270967) TASK_MONITOR: Tmr Svc              Blocked    1          1544          
I (270977) TASK_MONITOR WifiManagerTask      Suspended  5          5072           
I (270987) TASK_MONITOR: RelayManagerTas      Suspende  3          5264           
I (270997) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (270997) TASK_MONITOR: AcReaderTask        Suspended 5          1680          
I (271007) TASK_MONITOR: ConfigSystemTas      Suspended  3       
[21:49:18 104 Rx]   5820          
I (271017) TAK_MONITR: MqttManagerTask      Sspended  3          4872          
I (271017) TASK_MOITOR: EspNowReceiverT      Suspended 3          1536           
I (271027) TSK_MOITOR: ipc0                 Suspended  24         508            
I (271037) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (271047) TASK_MONITOR: wifi                 Blocked    23         3600           
I (271047) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (271057) TASK_MONITOR: ipc1                 Suspended  24         500            
I (271067) TASK_MONITOR: sys_evt              Blocked    20         388            
I (271077) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (271077) TASK_MONITOR: =============================================================

[21:49:19 --- Rx] I (272397) TIMER_DBG: 100Hz timer alive | tick=27184 | heap_free=102036 min=92164

[21:49:20 338 Rx] I (272737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=70 GPIO39=1824 GPIO35=0
I (272837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:49:20 103 Rx] 12:computeAndSendRms] DC1=182mV DC2=1646mV | RMS=15.9mV/21.8mV | A1=0.35A A2=0.47A [N=632]

[21:49:26 --- Rx] I (278737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=70 GPIO39=1843 GPIO35=0
I (278837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=183mV DC2=1644mV | RMS=22.0mV/20.2mV
[21:49:26 102 Rx]  | A1=0.35A A2=0.43A [N=630]

[21:49:28 --- Rx] I (281087) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (281087) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (281087) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (281097) TASK_MONITOR: IDLE0                Ready      0          920            
I (281107) TASK_MONITOR: IDLE1                Ready      0          912            
I (281117) TASK_MONITOR: tiT                  Blocked    18         1628           
I (281117) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (281127) TASK_MONITOR: taskfreezer          Blocked    1         3560           
I (81137) TASK_MONITOR: AdcBurst             Blocked    2          1668          
I (81137) TASK_MNITOR: WiiManagerTask      Susended  5          5072           
I (281147) TASK_MONITOR: RelayManagerTas      uspende  3         5264         
I (281157) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (281167) TASK_MONTOR: AdcReaerTask        Suspended  5          1680          
I (281167)TASK_MONITOR: ConfigSystemTas      Suspended  3          5820          
I (281177) TASK_MONITOR: MqttManagerTask      Suspended  3     
[21:49:28 102 Rx]      4872           
I (281187) TASK_MONITOR: EspNowReceiverT     Suspended  3         1536          I (281187) TAK_MONITOR: pc0                 Suspended  24         508            
I (281197) TASK_MONITOR: EStopTask           Blocked    24         1876           
I (281207) TASK_MONITOR: ipc1               Suspended  24      50            
I (281217) TASK_MONITOR: wifi                Blocked    23         3600           
I (21217) TAS_MONITOR: esp_tmer            Suspended 22         2152          
I (281227) TASK_MONITOR: sys_evt             Blocked    2         388            
I (281237) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (281237) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (281247) TASK_MONITOR: =============================================================

[21:49:32 --- Rx] I (284737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=100 GPIO39=1824 GPIO35=0
I (284837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=185mV DC2=1640mV | RMS=21.5mV/25.2mV
[21:49:32 105 Rx]  | A1=0.39A A2=0.47A [N=612]

[21:49:38 --- Rx] I (290737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=59 GPIO39=1833 GPIO35=0
I (290837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=183mV DC2=1643mV | RMS=22.9mV/18.9mV
[21:49:38 103 Rx]  | A1=0.36A A2=0.42A [N=614]

[21:49:38 411 Rx] I (291257) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (291257) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (291257) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (291267) TASK_MONITOR: IDLE0                Ready      0          920            
I (291277) TASK_MONITOR: IDLE1                Ready      0          912            
I (291287) TASK_MONITOR: tiT                  Blocked    18         1628           
I (291287) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (291297) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (291307) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (291317) TASK_MONITOR: RelayManagerTas      Suspended  3          5264           
I (291317) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (291327) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (291337) TASK_MONITOR: ConfigSystemTas      Suspended  3         5820           
I (291337) TASK_MONTOR: MqtManagerTas      Suspended  3          4872           
I (291347) TASKMONITOR: EspNowReceiverT     Suspend
[21:49:38 102 Rx] ed  3          1536           
I (291357) TASK_MONITOR:ipc0                 Suspended  24         508            
I (291367) TASK_MONITOR: EStopTask            Blocked    24        876           
I (291367) TASK_MONITOR: ipc1                 Suspended  4         500            
I (291377) TASK_MONITOR: sys_evt              Blocked    20         388           
I (291387) TASK_MNITOR: wifi                 Blocked    23        3600           
I (29137) TASK_MONITOR: esp_time           Suspended  22        2152           
I (29139) TASK_MONITOR:Tmr Svc             Blocked   1          544           
I (291407) TASK_MONITOR: WifiManagerTask     uspended  5          5072           
I (291417) TASK_MONIOR: Free Heap: 102036 bytes, Min Free Heap: 92164 byes
I (291417) TSK_MONITOR: ============================================================

[21:49:44 --- Rx] I (296737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=118 GPIO39=1825 GPIO35=0
I (296837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=184mV DC2=1641mV | RMS=22.3mV/18.1mV
[21:49:44 100 Rx]  | A1=0.37A A2=0.42A [N=629]

[21:49:48 --- Rx] I (301427) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (301427) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (301427) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (301437) TASK_MONITOR: IDLE0                Ready      0          920            
I (301447) TASK_MONITOR: IDLE1                Ready      0          912            
I (301457) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (301457) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (301467) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (301477) TASK_MONITOR: tiT                  Blocked    18         1628           
I (301487) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (301487) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (301497) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (301507) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (301507) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (301517) TASK_MONITOR: ipc0                 Suspended  24         508            
I (301527) TASK_MONITOR
[21:49:49 103 Rx] : EStopTask            Blocked    24         1876           
I (301537) TASK_MONITOR: ipc1                Suspended  24         500            
I (30153) TASK_MONITOR: sys_evt              Blocked    20         388           
I (30147) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (301557) TAS_MONITOR: wifi                 Blocked    23         3600         
I (301567) TASK_MONITOR: esp_timer            Suspended  22         2152           
I 30567) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (301577) TASK_MONITOR: RelyManagerTs      Suspended  3          264           
I (30158) TASK_MONITOR: Free Hep: 102036 bytes, Min Free Heap: 92164 bytes
I (301587) TASK_MONITOR: =============================================================

[21:49:49 851 Rx] I (302397) TIMER_DBG: 100Hz timer alive | tick=30184 | heap_free=102036 min=92164

[21:49:50 326 Rx] I (302737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=83 GPIO39=1826 GPIO35=0
I (302837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=183mV DC2=1643mV | RMS=22.0mV/22.0mV | A1=0.39A A2=0.44A [N=630]

[21:49:56 --- Rx] I (308737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=76 GPIO39=1835 GPIO35=0
I (308837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:49:56 102 Rx] 12:computeAndSendRms] DC1=183mV DC2=1643mV | RMS=16.9mV/16.9mV | A1=0.39A A2=0.38A [N=630]

[21:49:59 --- Rx] I (311597) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (311597) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (311597) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (311607) TASK_MONITOR: IDLE0                Ready      0          920            
I (311617) TASK_MONITOR: IDLE1                Ready      0          912            
I (311627) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (311627) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (311637) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (311647) TASK_MONITOR: tiT                  Blocked    18         1628           
I (311647) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (311657) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (311667) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (311677) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (311677) TASK_MONITOR: ipc0                 Suspended  24         508            
I (311687) TASK_MONITOR: EStopTask            
[21:49:59 104 Rx] Blocked    24         1876           
I (311697) TASK_MONITOR: ipc1                 Suspended  24         500            
I (311707) TASK_MONITOR: sys_evt              Blocked    20         388            
I (311707) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (311717) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (311727) TASK_MONITOR: wifi                 Blocked    23         3600           
I (311737) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (311737) TASK_MONITOR: RelayManagerTas      Suspended  3          5264           
I (31747) TASK_MONITOR: PowerManagerTas      Supended  3          1680           
I (311757) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 9214 bytes
I (311757 TASK_MONITO: =============================================================

[21:50:02 --- Rx] I (314737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=84 GPIO39=1831 GPIO35=0
I (314837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=183mV DC2=1642mV | RMS=18.4mV/22.1mV | A1=0.36A A2=0.44A [N=629]

[21:50:08 --- Rx] I (320737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=97 GPIO39=1761 GPIO35=0
I (320837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:50:08 104 Rx] 12:computeAndSendRms] DC1=182mV DC2=1636mV | RMS=15.1mV/28.7mV | A1=0.39A A2=0.45A [N=599]

[21:50:09 926 Rx] I (321767) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (321767) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (321767) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (321777) TASK_MONITOR: IDLE0                Ready      0          920            
I (321787) TASK_MONITOR: IDLE1                Ready      0          912            
I (321797) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (321797) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (321807) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (321817) TASK_MONITOR: tiT                  Blocked    18         1628           
I (321827) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (321827) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (321837) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (321847) TASK_MONITOR: ipc0                 Suspended  24         508            
I (321847) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (321857) TASK_MONITOR: ipc1                 
[21:50:09 100 Rx] Suspended  24         500            
I (321867) TASK_MONITOR: sys_evt              Blocked    20         388            
I (321877) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (321877) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (321887) TASK_MONITOR: RelayManagerTas      Suspended  3          5264           
I (321897) TASK_MONITOR: wifi                 Blocked    23         3600           
I (321907) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (321907) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (321917) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (321927) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (321937) TASK_MONITOR: ==========================================================

[21:50:14 --- Rx] I (326737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=71 GPIO39=1834 GPIO35=0
I (326837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:50:14 104 Rx] 12:computeAndSendRms] DC1=184mV DC2=1641mV | RMS=18.3mV/31.0mV | A1=0.36A A2=0.48A [N=614]

[21:50:16 --- Rx] I (328847) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (328847) wifi:<ba-del>idx:0, tid:0

[21:50:16 286 Rx] I (329137) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:173, winSize:64

[21:50:19 --- Rx] I (331937) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (331937) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (331937) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (331947) TASK_MONITOR: IDLE0                Ready      0          920            
I (331957) TASK_MONITOR: IDLE1                Ready      0          912            
I (331967) TASK_MONITOR: AdcBurst             Blocked    2          1668           
I (331967) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (331977) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (331987) TASK_MONITOR: tiT                  Blocked    18         1628           
I (331997) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (331997) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (332007) TASK_MONITOR: ipc0                 Suspended  24         508            
I (332017) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (332017) TASK_MONITOR: ipc1                 Suspended  24         500            
I (332027) TASK_MONITOR: sys_evt              Blocked    20         388            
I (332037) TASK_MONITOR
[21:50:19 102 Rx] : Tmr Svc              Blocked    1          1544           
I (332047) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (332047) TASK_MONITOR: RelayManagerTas      Suspended  3          5264           
I (332057) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (332067) TASK_MONITOR: wifi                 Blocked    23         3600           
I (332077) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (332077) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (332087) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (332097) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (332107) TASK_MONITOR: =============================================================

[21:50:19 340 Rx] I (332397) TIMER_DBG: 100Hz timer alive | tick=33184 | heap_free=102036 min=92164

[21:50:20 328 Rx] I (332737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=78 GPIO39=1813 GPIO35=0
I (332837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=185mV DC2=1643mV | RMS=31.0mV/23.6mV
[21:50:20 101 Rx]  | A1=0.43A A2=0.48A [N=634]

[21:50:26 --- Rx] I (338737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=75 GPIO39=1826 GPIO35=0
I (338837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=184mV DC2=1642mV | RMS=23.9mV/20.2mV | A1=0.40A A2=0.43A [N=630]

[21:50:29 --- Rx] I (342107) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (342107) TASK_MONITOR: Task Name            State      Priority   Stack High ater
I 34210) TASK_MONITOR: AdcBurst            Ready      2          1668          
I (342117) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (342127) TASK_MONITOR: IDLE1                Ready      0         912            
I (342127) TASK_MONITOR: IDLE0                Ready      0          920            
I (342137) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (342147) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (342157) TASK_MONITOR: tiT                  Blocked    18         1628           
I (342157) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (342167) TASK_MONITOR: ipc0                 Suspended  24         508            
I (342177) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (342187) TASK_MONITOR: ipc1                 Suspended  24         500            
I (342187) TASK_MONITOR: sys_evt              Blocked    20         388            
I (342197) TASK_MONITOR: Tmr Svc              Blocked
[21:50:29 100 Rx]     1          1544           
I (342207) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (342217) TASK_MONITOR: RelayManagerTas      Suspended  3          5264           
I (342217) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (342227) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (342237) TASK_MONITOR: wifi                 Blocked    23         3600           
I (342247) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (342247) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (342257) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (342267) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (342267) TASK_MONITOR: =============================================================

[21:50:31 --- Rx] I (344347) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (344347) wifi:<ba-del>idx:0, tid:0

[21:50:32 254 Rx] I (344607) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:174, winSize:64

[21:50:32 120 Rx] I (344737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=103 GPIO39=1827 GPIO35=0
I (344837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:50:32 103 Rx] 12:computeAndSendRms] DC1=185mV DC2=1641mV | RMS=20.7mV/31.4mV | A1=0.36A A2=0.47A [N=618]

[21:50:38 --- Rx] I (350737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=92 GPIO39=1827 GPIO35=0
I (350837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=181mV DC2=1643mV | RMS=16.7mV/24.8mV | A1=0.36A A2=0.42A [N=627]

[21:50:39 --- Rx] I (352277) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (352277) TASK_MONITOR: Task Name          State      Priority   Stack High Water
I (352277) TASK_MONITO: AdcBurst             Redy      2          1668           
I (352287)TASK_MONIOR: TaskMonitor          Running    1         2128           
I (352297) TASK_MONITR: IDLE1                Ready      0          912            
I (352297) TAK_MONITOR: IDLE0                eady      0          920           
I (352307) TASK_MONITOR: mqtt_task            Blocked    5         3452           
I (352317) TASK_MONITOR: taskfreezer         Blocked              3560           
I (35227) TASK_MONITOR: tiT                Blocked    18         1628          
I (352327) TASK_MONITOR: ipc0                 Suspended  24         508            
I (352337) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (352347) TASK_MONITOR: ipc1                 Suspended  24         500            
I (352357) TASK_MONITOR: sys_evt              Blocked    20         388            
I (352357) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I 
[21:50:39 105 Rx] (352367) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (352377) TASK_MONITOR: RelayManagerTas      Suspended  3          5264           
I (352387) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (352387) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (352397) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (352407) TASK_MONITOR: wifi                 Blocked    23         3600           
I (352407) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (352417) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (352427) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (352437) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (352437) TASK_MONITOR: =============================================================

[21:50:44 --- Rx] I (356737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=82 GPIO39=1826 GPIO35=0

[21:50:44 100 Rx] I (356837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=183mV DC2=1643mV | RMS=14.6mV/26.4mV | A1=0.32A A2=0.49A [N=627]

[21:50:47 --- Rx] I (359847) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (359847) wifi:<ba-del>idx:0, tid:0

[21:50:47 203 Rx] I (360057) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:175, winSize:64

[21:50:49 --- Rx] I (362397) TIMER_DBG: 100Hz timer alive | tick=36184 | heap_free=102036 min=92164
I (362447) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (362447) TASK_MONITOR: Task Name            State      Priority  Stack High Water
I 362447) TASK_MONITOR: AdcBurst             Ready      2          1668           
I (362457) TASK_MONITOR: TskMonitor          Running    1         2128           
I (362467) TASK_MONITOR: IDLE1                Ready      0         912            
I (3647) TASK_MONITOR: IDLE0                Ready      0          920            
I (362477) TASK_MONITOR: taskfreezer          Blocked    1         3560           
I (362487) TASK_MONITOR: mqtt_t
[21:50:50 102 Rx] ask            Blocked    5          3452           
I (362497) TASK_MONITOR: tiT                  Blocked    18        1628          
I (362497) TASK_MONITOR: EStoTask            Blocked    24         1876           
I (362507 TASK_MONITOR: ipc1                 Suspended  24         500           
I (362517) TASK_MONITOR: sys_evt              Blocked    20         388            
I (362527) TASK_MONITOR: Tmr Svc              Blocked    1          1544          
I (362527) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (362537) TASK_MONITOR: RelayManagerTas      Suspended  3          5264           
I (362547) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (362557) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (362557) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (362567) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (362577) TASK_MONITOR: wifi                 Blocked    23         3600           
I (362587) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (362587) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I 
[21:50:50 105 Rx] (362597) TASK_MONITOR: ipc0                 Suspended  24         508            
I (362607) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (362607) TASK_MONITOR: =============================================================

[21:50:50 124 Rx] I (362737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=81 GPIO39=1829 GPIO35=0
I (362837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=182mV DC2=1641mV | RMS=13.2mV/22.6mV | A1=0.29A A2=0.44A [N=631]

[21:50:56 --- Rx] I (368737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=86 GPIO39=1825 GPIO35=0
I (368837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=184mV DC2=1642mV | RMS=23.7mV/33.0mV | A1=0.41A A2=0.50A [N=630]

[21:51:00 --- Rx] I (372617) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (372617) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (372617) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (372627) TASK_MONITOR: IDLE0                Ready      0          920            
I (372637) TASK_MNITOR: IDLE               Ready      0          912            
I (72647 TASK_MONITOR: tiT                  Blocked   18         1628           
I (372647) ASK_MONITOR: taskfrezer         Blocked    1          3560          
I (372657) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (372667) TASK_MONITOR: AdcBurst             Blocked    2         1540          
I (372667) TASK_MONITOR: ipc1                Suspended 24         500            
I (372677) TASK_MONITOR: sys_evt             Blocked    20         388           
I (372687) TASK_MONITOR: Tmr Svc              Blocked    1          1544          I (372697) TSK_MONITOR: WifiManagerTask      Suspendd  5          5072           
I (372697) TASK_ONITOR: RelayManagerTas     Suspendd  3          5264         
I (372707) TASK_MONITOR: PowerManagerTas      Suspended  3          1680
[21:51:00 102 Rx]            
I (372717) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           I (372717) TASK_MONITOR:ConfigSystemTas      Suspended  3          5820           
I (372727) TASK_MONITOR: MqttMnagerTask      Suspended  3          4872           
I (372737) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (372747) TASK_MONITOR: wifi                 Blocked    23         3600           
I (372747) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (372757) TASK_MONITOR: ipc0                 Suspended  24         508            
I (372767) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (372777) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (372777) TASK_MONITOR: =============================================================

[21:51:02 --- Rx] I (374737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=80 GPIO39=1827 GPIO35=0
I (374837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=185mV DC2=1642mV | RMS=21.8mV/23.4mV
[21:51:02 103 Rx]  | A1=0.40A A2=0.46A [N=629]

[21:51:08 --- Rx] I (380737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=68 GPIO39=1825 GPIO35=0
I (380837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=183mV DC2=1641mV | RMS=15.9mV/22.6mV
[21:51:08 100 Rx]  | A1=0.31A A2=0.44A [N=630]

[21:51:10 --- Rx] I (382787) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (382787) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (382787) TASK_MONITOR: wifi                 Ready      23         3600           
I (382797) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (382807) TASK_MONITOR: IDLE0                Ready      0          920            
I (382817) TASK_MONITOR: IDLE1                Ready      0          912            
I (382817) TASK_MONITOR: tiT                  Blocked    18         1628           
I (382827) TASK_MONITOR: taskfreezer          Blocked   1          3560           
I (382837) ASK_MONITOR:mqt_task           Bocked    5          3452           
I (382837) TASK_MONITR: AdcBurst             Blocked    2         1540           
I (382847) TASK_MONITOR: sys_evt              Blocked    20         388           
I (382857) TASK_MONITOR: Tmr Svc              Blocked    1          1544          
I (32867) TASK_MOITOR: WfiMaagerTak      Susended  5         5072          
I (382867) TASK_ONITO: RelayMangerTas      Suspended  3          5264           
I (382877) TASK_MONITOR: PowerManagerTas      Suspended  3          1
[21:51:10 105 Rx] 680           
I (382887) TASK_MONITOR: AcReaerTas        Suspended  5          1680          
I (382887) TASK_MONITOR: ConfigSstemTas      Suspendd  3         582           
I (382897) TAK_MONITOR: qttManagerTask      Susended  3          4872           
I (38297) TASK_MONITOR: EspNowReceverT      Suspended  3          1536           
I (382917) TASK_MONITOR: ipc0                Suspended  24         508            
I (382917) TASK_MONITOR: esp_tim            Suspended  2         2152           
I (32927) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (382937) TASK_MONITOR: ipc1                 Suspended  24         500            
I (382947) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (382947) TASK_MONITOR: =============================================================

[21:51:14 --- Rx] I (386737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=74 GPIO39=1826 GPIO35=0
I (386837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:51:14 101 Rx] 12:computeAndSendRms] DC1=182mV DC2=1641mV | RMS=13.1mV/24.6mV | A1=0.31A A2=0.46A [N=629]

[21:51:19 --- Rx] I (392397) TIMER_DBG: 100Hz timer alive | tick=39184 | heap_free=102036 min=92164

[21:51:20 330 Rx] I (392737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=83 GPIO39=1835 GPIO35=0
I (392837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=182mV DC2=1640mV | RMS=18.2mV/20.0mV
[21:51:20 101 Rx]  | A1=0.34A A2=0.46A [N=631]

[21:51:20 109 Rx] I (392957) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (392957) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (392957) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (392967) TASK_MONITOR: IDLE0                Ready      0          920            
I (392977) TASK_MONITOR: IDLE1                Ready      0          912            
I (392987) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (392987) TASK_MONITOR: AdcBurst             Blocked    2          1540           
I (392997) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (393007) TASK_MONITOR: tiT                  Blocked    18         1628           
I (393017) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (393017) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (393027) TASK_MONITOR: RelayManagerTas      Suspended  3          5264           
I (393037) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (33037) TASK_MONITOR: AdcReaderTask       Suspended  5         1680           
I (393047) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (393057) TASK_MONITOR: M
[21:51:20 102 Rx] qttManagerTask      Sspended  3         4872           
I (393067) TASK_MONITOR: EspNowReceiveT      Suspended  3          1536           I (393067)TASK_MONITOR: ipc0                 Suspended  24         508           
I (393077) ASK_MONITOR: EStopTas            Blocked    24         1876           
I (93087) TASK_MONITOR: wifi                 Blocked    23         3600           
I (393097) TASK_MONITOR: esp_timer            Suspended  22        2152           
I (393097) TASK_MNITOR:ipc1               Suspnded 24         500            
I (393107) TASK_MONITOR: sys_evt              Blocke    20         388          
I (393117) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (39317) TASK_MONITOR: ===========================================================

[21:51:26 --- Rx] I (398737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=112 GPIO39=1823 GPIO35=0
I (398837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=181mV DC2=1628mV | RMS=10.8mV/29.4mV | A1=0.32A A2=0.50A [N=614]

[21:51:30 --- Rx] I (403127) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (403127) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (403127) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (403137) TASK_MONITOR: IDLE0                Ready      0          920            
I (403147) TASK_MONITOR: IDLE1                Ready      0          912            
I (403157) TASK_MONITOR: AdcBurst             Blocked    2          1540           
I (403157) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (403167) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (403177) TASK_MONITOR: tiT                  Blocked    18         1628           
I (403177) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (403187) TASK_MONITOR: RelayManagerTas      Suspended  3          5264           
I (403197) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (403207) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (403207) TASK_MONITOR: ConfigSystemTas      Suspended  3          5
[21:51:30 103 Rx] 820           
I (403217) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (403227) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (403237) ASK_MONITOR: ipc0                Suspended  24         508            
I (403237) TASK_MONITOR EStopTask            Blocked    24         1876          
I (403247) TASK_MONITOR: ipc1                 Suspended  24         500          
I (403257) TASK_MONITOR: wifi                Blocked    23        3600           
I (403267) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (40367) TSK_MONITOR: sys_evt             Blocked    20         388           
I (403277) TAS_MONTO: Tm Svc              Blocked    1          1544           
I 403287) TAK_MONITOR: Free Heap: 02036 byes, Min Free Heap: 92164 bytes
I (403287) TAK_MONITOR: ===========================================================

[21:51:32 --- Rx] I (404737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=103 GPIO39=1826 GPIO35=0
I (404837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:51:32 105 Rx] 12:computeAndSendRms] DC1=183mV DC2=1641mV | RMS=19.4mV/16.1mV | A1=0.42A A2=0.42A [N=630]

[21:51:38 --- Rx] I (410737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=78 GPIO39=1834 GPIO35=0
I (410837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=183mV DC2=1639mV | RMS=17.9mV/25.8mV | A1=0.36A A2=0.39A [N=632]

[21:51:40 --- Rx] I (413297) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (413297) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (413297) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (413307) TASK_MONITOR: IDLE0                Ready      0          920            
I (413317) TASK_MONITOR: IDLE1                Ready      0          912            
I (413327) TASK_MONITOR: AdcBurst             Blocked    2          1540           
I (413327) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (413337) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (413347) TASK_MONITOR: tiT                  Blocked    18         1628           
I (413357) TASK_MONITOR: RelayManagerTas      Suspended  3          5264           
I (413357) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (413367) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (413377) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (413377) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (413387) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (413397) TASK_MONITOR
[21:51:40 101 Rx] : ipc0                 Suspended  24         508            
I (413407) TASK_MONITOR: EStopTask            Blocked    24         1876           
I (413407) TASK_MONITOR: ipc1                 Suspended  24         500            
I (413417) TASK_MONITOR: sys_evt              Blocked    20         388            
I (413427) TASK_MONITOR: wifi                 Blocked    23         3600           
I (13437) TASK_MONITOR: esp_timer            Suspened  2        2152          
I (413437) TASK_MONITOR: Tmr Svc            Blocked    1          1544           
I (413447) TASK_MONITOR: WfianagerTask      Suspended  5          5072           
I (413457) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 9164 byte
I 41347) TASK_MONITOR: ==========================================================

[21:51:44 --- Rx] I (416737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=55 GPIO39=1823 GPIO35=0
I (416837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[21:51:44 105 Rx] 12:computeAndSendRms] DC1=182mV DC2=1643mV | RMS=11.2mV/21.1mV | A1=0.30A A2=0.40A [N=628]

[21:51:49 --- Rx] I (422397) TIMER_DBG: 100Hz timer alive | tick=42184 | heap_free=102036 min=92164

[21:51:50 332 Rx] I (422737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=76 GPIO39=1829 GPIO35=0
I (422837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=183mV DC2=1641mV | RMS=19.7mV/20.0mV
[21:51:50 104 Rx]  | A1=0.36A A2=0.45A [N=631]

[21:51:50 619 Rx] I (423467) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (423467) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (423467) TASK_MONITOR: TaskMonitor          Running    1          2128           
I (423477) TASK_MONITOR: IDLE0                Ready      0          920            
I (423487) TASK_MONITOR: IDLE1                Ready      0          912            
I (423497) TASK_MONITOR: tiT                  Blocked    18         1628           
I (423497) TASK_MONITOR: taskfreezer          Blocked    1          3560           
I (423507) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (423517) TASK_MONITOR: AdcBurst             Blocked    2          1540           
I (423527) TASK_MONITOR: PowerManagerTas      Suspended  3          1680           
I (423527) TASK_MONITOR: AdcReaderTask        Suspended  5          1680           
I (423537) TASK_MONITOR: ConfigSystemTas      Suspended  3          5820           
I (423547) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (423547) TASK_MONITOR: EspNowReceiverT      Suspended  3          1536           
I (423557) TASK_MONITOR: ipc0                 Suspended  24         508            
I (423567) TASK_MONITOR
[21:51:51 100 Rx] : EStopTask            Blocked    24         1876           
I (423577) TASK_MONITOR: ipc1                 Suspended  24         500            
I (423577) TASK_MONITOR: sys_evt              Blocked    20         388            
I (423587) TASK_MONITOR: Tmr Svc              Blocked    1          1544           
I (423597) TASK_MONITOR: wifi                 Blocked    23         3600           
I (423607) TASK_MONITOR: esp_timer            Suspended  22         2152           
I (423607) TASK_MONITOR: WifiManagerTask      Suspended  5          5072           
I (423617) TASK_MONITOR: RelayManagerTas      Suspended  3          5264           
I (423627) TASK_MONITOR: Free Heap: 102036 bytes, Min Free Heap: 92164 bytes
I (423637) TASK_MONITO: ==========================================================

[21:51:56 --- Rx] I (428737) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:147:computeAndSendRms] [RAW] GPIO36=71 GPIO39=1830 GPIO35=0
I (428837) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:212:computeAndSendRms] DC1=183mV DC2=1641mV | RMS=24.1mV/15.2mV
[21:51:56 102 Rx]  | A1=0.39A A2=0.39A [N=630]

