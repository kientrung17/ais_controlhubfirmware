[23:13:45 --- Rx] ets Jul 29 2019 12:21:46

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
I (44) boot: Enabling RNG early entropy source...
I (49) boot: Partition Table:
I (51) boot: ## Label            Usage          Type ST Offset   Length
I (58) boot:  0 nvs              WiFi data        01 02 00009000 00006000
I (64) boot:  1 factory          factory app      00 00 00010000 003ef000
I (71) boot: End of partition table
I (74) esp_image: segment 0: paddr=00010020 vaddr=3f400020 size=229e4h (141796) map

[23:13:45 125 Rx] I (130) esp_image: segment 1: paddr=00032a0c vaddr=3ff80000 size=00020h (    32) load
I (130) esp_image: segment 2: paddr=00032a34 vaddr=3ffb0000 size=03fa8h ( 16296) load
I (140) esp_image: segment 3: paddr=000369e4 vaddr=40080000 size=09634h ( 38452) load
I (156) esp_image: segment 4: paddr=00040020 vaddr=400d0020 size=ac3c8h (705480) map

[23:13:45 257 Rx] I (398) esp_image: segment 5: paddr=000ec3f0 vaddr=40089634 size=0f2a0h ( 62112) load
I (434) boot: Loaded app from partition at offset 0x10000
I (434) boot: Disabling RNG early entropy source...
I (444) cpu_start: Multicore app
I (453) cpu_start: Pro cpu start user code
I (453) cpu_start: cpu freq: 160000000 Hz
I (453) app_init: Application information:
I (453) app_init: Project name:     MonitorTemAndPower
I (458) app_init: App version:      402f6f7-dirty
I (462) app_init: Compile time:     Jun 22 2026 20:34:07
I (467) app_init: ELF file SHA256:  bca810ac8...
I (472) app_init: ESP-IDF:          5.5.0
I (475) efuse_init: Min chip rev:     v0.0
I (479) efuse_init: Max chip rev:     v3.99 
I (483) efuse_init: Chip rev:         v3.1
I (487) heap_init: Initializing. RAM available for dynamic allocation:
I (493) heap_init: At 3FF
[23:13:46 101 Rx] AE6E0 len 00001920 (6 KiB): DRAM
I (498) heap_init: At 3FFB8D50 len 000272B0 (156 KiB): DRAM
I (504) heap_init: At 3FFE0440 len 00003AE0 (14 KiB): D/IRAM
I (509) heap_init: At 3FFE4350 len 0001BCB0 (111 KiB): D/IRAM
I (515) heap_init: At 400988D4 len 0000772C (29 KiB): IRAM
I (521) spi_flash: detected chip: generic
I (523) spi_flash: flash io: dio
I (550) [info][FlashManager]: [components/framework/src/HAL/HAL_ESP32/flashmanager.cpp:39:init] NVS namespace 'storage' opened
I (553) main_task: Started on CPU0
I (563) main_task: Calling app_main()
I (563) [info]MyMain: [src/MyMain.cpp:146:startAllTask] ************Start init system and run task****************
I (563) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:143:readConfigFromFlash] Read system config success
I (573) [info]MyMain: [src/common/common.cpp:94:initSystem] Loaded custom config from Flash NVS successfully!
I (583) [info]MyMain: [src/common/common.cpp:100:initSystem] UserSystemID: sys000001  
I (593) [info]MyMain: [src/common/common.cpp:101:initSystem] Ssid: Tiáº¿n BG Ä‘áº¹p zai  
I (603) [info]M
[23:13:46 105 Rx] yMain: [src/common/common.cpp:102:initSystem] Pass: 23456789  
I (603) [info]MyMain: [src/common/common.cpp:106:initSystem] Device ID: 163091810856900
I (613) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (623) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:88:registerSemaphoreToQueueset] [WifiManagerTask]Create semaphore 100Hz success: 51
I (643) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (653) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:88:registerSemaphoreToQueueset] [RelayManagerTask]Create semaphore 100Hz success: 52
I (663) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:102:registerQueueToQueueset] [RelayManagerTask]Create Queue: 3 success
I (683) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (693) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:88:r
[23:13:46 106 Rx] egisterSemaphoreToQueueset] [PowerManagerTask]Create semaphore 100Hz success: 53
I (713) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (723) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:88:registerSemaphoreToQueueset] [AdcReaderTask]Create semaphore 100Hz success: 54
I (733) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (753) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:88:registerSemaphoreToQueueset] [EspNowReceiverTask]Create semaphore 100Hz success: 55
I (763) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (773) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:88:registerSemaphoreToQueueset] [ConfigSystemTask]Create semaphore 100Hz success: 56
I (793) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (803) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\ta
[23:13:46 102 Rx] skabstract.cpp:88:registerSemaphoreToQueueset] [MqttManagerTask]Create semaphore 100Hz success: 57
I (823) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:102:registerQueueToQueueset] [MqttManagerTask]Create Queue: 4 success
I (833) [info]MyMain: [src/MyMain.cpp:84:StartWifiMamnagerTask] Start Task wifi
I (843) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process WifiManagerTask
I (853) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:91:onInitProcess] Init task
I (863) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:96:onInitProcess] Init mode MODE_STA
I (873) [info]MyMain: [src/MyMain.cpp:111:StartRelayManagerTask] Start Task relay
I (873) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process RelayManagerTask
I (883) wifi:wifi driver task: 3ffc537c, prio:23, stack:6656, core=0
I (893) [info]RelayManagerTask: [src/task/relaymanagertask.cpp:53:onInitProcess] Init task
I (913) [info]MyMain: [src/MyMain.cpp:120:StartPowerManagerTask] Start Task Power Manager
I (913) wifi:wifi firmware versio
[23:13:46 100 Rx] n: f3dbad7
I (913) wifi:wifi certification version: v7.0
I (913) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:40:readRelayInforFromFlash] Read config relay control infor: 0 success
I (923) wifi:config NVS flash: enabled
I (923) [info]MyMain: [src/MyMain.cpp:93:StartConfigSystemTask] Start Task Config System
I (933) wifi:config nano formatting: disabled
I (933) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:40:readRelayInforFromFlash] Read config relay control infor: 1 success
I (953) wifi:Init data frame dynamic rx buffer num: 32
I (943) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process ConfigSystemTask
I (963) wifi:Init static rx mgmt buffer num: 5
I (963) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:40:readRelayInforFromFlash] Read config relay control infor: 2 success
I (983) wifi:Init management short buffer num: 32
I (973) [info]ConfigSystemTask: [src/task/configsystemtask.cpp:25:onInitProcess] Initializing ConfigSystemTask on UDP port 8080
I (1003) wifi:Init dynamic tx buffer num: 32
I (993) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:40:readRelayInforFromFlash] Read config relay c
[23:13:46 103 Rx] ontrol infor: 3 success
I (1013) wifi:Init static rx buffer size: 1600
I (923) [info]MyMain: [src/MyMain.cpp:102:StartMqttManagerTask] Start Task MQTT Manager
I (1033) wifi:Init static rx buffer num: 10
I (1023) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:40:readRelayInforFromFlash] Read config relay control infor: 4 success
I (1043) wifi:Init dynamic rx buffer num: 32
I (1033) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process MqttManagerTask
I (1063) wifi_init: rx ba win: 6
I (1073) wifi_init: accept mbox: 6
I (1013) [info]ConfigSystemTask: [src/task/configsystemtask.cpp:50:onInitProcess] Socket created and bound successfully.
I (1073) wifi_init: tcpip mbox: 32
I (1053) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:40:readRelayInforFromFlash] Read config relay control infor: 5 success
I (1093) wifi_init: udp mbox: 6
I (1103) wifi_init: tcp mbox: 6
I (1103) [info]RelayManagerTask: [src/task/relaymanagertask.cpp:120:emergencyTask] EStopTask listening for E-Stop events...
I (1113) wifi_init: tcp tx win: 5760
I (923) [info]MyMain: [src/MyMain.cpp:129:StartAdcReaderTask] Start Task ADC Reader
I (1123) wifi_init: tc
[23:13:46 103 Rx] p rx win: 5760
I (1133) wifi_init: tcp mss: 1440
I (923) [info]MyMain: [src/MyMain.cpp:138:StartEspNowReceiverTask] Start Task ESP-NOW Receiver
I (1133) wifi_init: WiFi IRAM OP enabled
I (1143) wifi_init: WiFi RX IRAM OP enabled
I (1103) [info]RelayManagerTask: [src/task/relaymanagertask.cpp:88:onInitProcess] EStopTask spawned OK
W (1153) wifi:I (1133) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process AdcReaderTask
Password length matches WPA2 standards, authmode threshold changes from OPEN to WPA2
I (1143) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process EspNowReceiverTask
I (1183) phy_init: phy_version 4860,6b7a6e5,Feb  6 2025,14:47:07
I (913) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process PowerManagerTask
I (1213) [info]PowerManagerTask: [src/task/powermanagertask.cpp:41:onInitProcess] Init task
I (1173) [info]AdcReaderTask: [src/task/adcreadertask.cpp:27:onInitProcess] Init ADC hardware...
I (1073) [info]MqttManagerTask: [src/task/mqttmanagertask.cpp:24:onInitProcess] Initializing MqttManagerTask...
I 
[23:13:46 103 Rx] (1243) [info]AdcReaderTask: [src/task/adcreadertask.cpp:77:initAdc] ADC1 init OK: GPIO36(CH0), GPIO39(CH3), GPIO35(CH7)
I (1253) [info]AdcReaderTask: [src/task/adcreadertask.cpp:96:initCalibration] ADC Calibration OK (eFuse line fitting)
I (1263) [info]AdcReaderTask: [src/task/adcreadertask.cpp:40:onInitProcess] adcBurstTask spawned OK
I (1193) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:23:onInitProcess] Initializing ESP-NOW receiver...
I (1273) phy_init: Saving new calibration data due to checksum failure or outdated calibration data, mode(0)
I (923) [info]MyMain: [src/MyMain.cpp:223:startAllTask] Start All Task Success
I (1353) wifi:mode : sta (94:54:c5:73:af:c4) + softAP (94:54:c
[23:13:46 103 Rx] 5:73:af:c5)
I (1353) wifi:enable tsf
I (1353) wifi:Total power save buffer number: 16
I (1353) wifi:Init max length of beacon: 752/752
I (1363) wifi:Init max length of beacon: 752/752
I (1363) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:125:initWifi] Started Wi-Fi in mode 2
I (1363) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:230:eventHandlerWifi] STA started, connectingâ€¦
I (1363) ESPNOW: espnow [version: 2.0] init
I (1393) esp_netif_lwip: DHCP server started on interface WIFI_AP_DEF with IP: 192.168.4.1
I (1393) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:48:onInitProcess] ESP-NOW receiver ready. Listening for deviceId=101

[23:13:47 --- Rx] I (2393) main_task: Returned from app_main()

[23:13:48 872 Rx] I (3273) [info]AdcReaderTask: [src/task/adcreadertask.cpp:238:adcBurstTask] ADC burst sampling started

[23:13:51 --- Rx] I (6293) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (6303) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (6303) TASK_MONITOR: AdcBurst             Ready      2          1864           
I (6313) TASK_MONITOR: TaskMonito          Running    1          2776           
I (6313)TAS_MONITOR: IDLE0                Ready      0          924            
I (6323) TASK_MONITOR: IDLE1                Ready      0          1028           
I (6333) TASK_MONITOR: tiT                  Blocked   18         1620           
I (6333) TASK_MONITO: taskfreezer          Blocked    1          3584          
I (6343) TASK_MONITOR: EStpTask            Blocked    24         1880           
I (6353) TASK_MONITOR: ipc1               Suspended  24         500            
I (6363) TASK_MONITOR: sys_evt              Blocked    20         428            
I (6363) TASK_MONITOR: wifi                 Blocked    23         4312           
I (6373) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (6383) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (6383) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (6393) TASK_MONITOR: ConfigSystemTas      Blocked    3       
[23:13:52 100 Rx]    5852           
I (6403) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (6413) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (6413) TASK_MONITOR: MqttManagerTask      Blocked    3          5512           
I (6423) TASK_MONITOR: esp_timer            Suspended  22         3324           
I (6433) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (6433) TASK_MONITOR: ipc0                 Suspended  24         508            
I (6443) TASK_MONITOR: Free Heap: 151772 bytes, Min Free Heap: 147252 bytes
I (6453) TASK_MONITOR: =============================================================

[23:13:54 --- Rx] I (8973) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=90 GPIO39=1827 GPIO35=0
I (9073) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=188mV DC2=1640mV | RMS=11.9mV/29.1mV |
[23:13:54 101 Rx]  A1=0.33A A2=0.45A [N=603]

[23:13:55 382 Rx] I (9463) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (9463) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (9473) TASK_MONITOR: TaskMonitor          Running    1          2168           
I (9473) TASK_MONITOR: IDLE0                Ready      0          924            
I (9483) TASK_MONITOR: IDLE1                Ready      0          1028           
I (9493) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (9503) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (9503) TASK_MONITOR: tiT                  Blocked    18         1620           
I (9513) TASK_MONITOR: sys_evt              Blocked    20         428            
I (9523) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (9533) TASK_MONITOR: wifi                 Blocked    23         4312           
I (9533) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (9543) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (9553) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (9553) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852    
[23:13:55 104 Rx]        
I (9563) TASK_MONITOR: MqttManagerTask      Blocked    3          5512           
I (953) TASK_MONITOR: RelayManaerTas      Bloked    3          5304           
I (9583) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I 9583) TASK_MONITOR: ipc0                 Suspended  24         508            
I (9593) TAK_MONITOR: ep_timer            Suspended  22         3324           
I (9603) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (9603) TASK_MONITOR: ipc1                Sspended  24         500            
I (9613) TASK_MONITOR: Free Heap: 151540 bytes, Min FreeHeap: 147252 bytes
I (9623) TASK_MONITOR: ============================================================

[23:13:57 --- Rx] I (12293) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:37:onTimer100HzProcess] Diagnostics: Free Heap Size: 151548 bytes
I (12293) [debug]MonitorSystemTask: [src/task/wifimanagertask.cpp46:onTimer100zProcess] Reconnect to wifi: ssid:Tiáº¿n BG Ä‘º¹p zai, pass: 23456789
I (12303) info]WiFiManagerESP32: [components/frmework/src/HAL/HAL_ESP32/wifimanager.cpp:203:reconnectWifi] Reconnecting to Tiáº¿n BG Ä‘áº¹p zai
I (12333) wifi:ap channel adjust o:1,1 n:3,1
I (12333) wifi:new:<3,1>, old:<1,1>, ap:<3,1>, sta:<3,1>, prof:1, snd_ch_cfg:0x0
I (12333) wifi:state: init -> auth (0xb0)
I (12343) wifi:state: auth -> assoc (0x0)
I (12353) wifi:state: assoc -> run (0x10)

[23:13:58 188 Rx] I (12483) wifi:connected with Tiáº¿n BG Ä‘áº¹p zai, aid = 6, channel 3, 40U, bssid = 1c:3b:f3:6a:77:74
I (12483) wifi:security: WPA2-PSK, phy: bgn, rssi: -44
I (12493) wifi:pm start, type: 1

I (12493) wifi:dp: 1, bi: 102400, li: 3, scale listen interval from 307200 us to 307200 us
I (12503) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:241:eventHandlerWifi] Received event WIFI_EVENT_STA_CONNECTED
I (12513) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:3, winSize:64
I (12533) wifi:AP's beacon interval = 102400 us, DTIM period = 1
I (12573) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (12573) wifi:<ba-del>idx:0, tid:0

[23:13:58 131 Rx] I (12623) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (12623) TASK_MONITOR: Task Name            State     Priority   Stack High Water
I (12633) TASK_MONITOR: AdcBurst             Ready      2          1672           
I (2643) TASK_MONITOR: TaskMonitor          Runnng    1          218          
I (12643) TASK_MONITOR: IDLE0               Ready      0          924            
I (12653) TASK_MONITOR: IDLE1                Ready      0          1028           
I (1663) TASK_MONITOR: tiT                  Blocked    18         1620           
I (12663) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (12673) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (12683) TASK_MONITOR: ipc1                 Suspended  24         500            
I (12693) TASK_MONITOR: sys_evt              Blocked    20         220            
I (12693) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (12703) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (12713) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (12723) TASK_MONITOR: MqttManagerTask      Blocked    3          5
[23:13:58 103 Rx] 512           
I (12723) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (12733) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (12743) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (12743) TASK_MONITOR: wifi                 Blocked    23         3608           
I (12753) TASK_MONITOR: esp_timer            Suspended  22         3196           
I (12763) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (12773) TASK_MONITOR: ipc0                 Suspended  24         508            
I (12773) TASK_MONITOR: Free Heap: 150608 bytes, Min Free Heap: 147252 bytes
I (12783) TASK_MONITOR: =============================================================

[23:13:58 289 Rx] I (13023) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:4, winSize:64
I (13053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (13053) wifi:<ba-del>idx:0, tid:0

[23:13:59 504 Rx] I (13533) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:5, winSize:64
I (13553) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (13553) wifi:<ba-del>idx:0, tid:0

[23:13:59 480 Rx] I (14023) esp_netif_handlers: sta ip: 192.168.0.104, mask: 255.255.255.0, gw: 192.168.0.1
I (14023) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:267:eventHandlerWifi] Received event IP_EVENT_STA_GOT_IP: 192.168.0.104
I (14033) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:268:eventHandlerWifi] Has ip => Set bit WIFI_CONNECTED_BIT
I (14103) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:58:onTimer100HzProcess] Wifi sta connected
I (14103) wifi:Set ps type: 0, coexist: 0

I (14103) [info]WifiManagerTask: [src/task/wifimanagertask.cp:63:onTimer100HzProcess] WiFi Power Save disabld
I (14113) [info]MqttManagerTask: [src/task/mqttmanagertask.cpp:70:onTimer100HzProcess] Wifi connected, starting MQTT client...
I (14113) [info]WifiManagerTask: [src/task/w
[23:13:59 104 Rx] ifimanagertask.cp:72:onTimer100HzProcess] SNTP initialized with backup servers
I (14123) [debug]MqttClientEsp32: [components/framework/src/HAL/HAL_ESP32/mqttclientesp32.cpp:39:start] Client ID: esp32_9454C573AFC4
I (14143) [info]MqttClientEsp32: [components/framework/src/HAL/HAL_ESP32/mqttclientesp32.cpp:76:start] MQTT client started successfully: uri: mqtts://0a4a8b1e715a4ce5a3bd5e78451cdba8.s1.eu.hivemq.cloud, port: 8883, user: esp32_control, pass: Pass123456, client_id: esp32_9454C573AFC4
I (14163) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:6, winSize:64

[23:14:00 842 Rx] I (14983) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=97 GPIO39=1815 GPIO35=0
I (15083) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=196mV DC2=1633mV | RMS=25.9mV/16.8mV 
[23:14:00 102 Rx] | A1=0.42A A2=0.39A [N=561]

[23:14:01 699 Rx] I (15793) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (15793) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (15793) TASK_MONITOR: TaskMonitor          Running    1          2168           
I (15803) TASK_MONITOR: IDLE0                Ready      0          924            
I (15813) TASK_MONITOR: IDLE1                Ready      0          1028           
I (15823) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (15823) TASK_MONITOR: mqtt_task            Blocked    5          3640           
I (15833) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (15843) TASK_MONITOR: tiT                  Blocked    18         1620           
I (15843) TASK_MONITOR: ipc1                 Suspended  24         500            
I (15853) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (15863) TASK_MONITOR: sys_evt              Blocked    20         220            
I (15873) TASK_MONITOR: wifi                 Blocked    23         3608           
I (15873) TASK_MONITOR: AdcReaderTask        Blocked    3         1648           
I (15883) TASK_MONITOR: esp_timer            Suspended  22         3196           
I (15893) TASK_ONITOR: WifiManagerTask 
[23:14:01 104 Rx]      Blocked    5          5288           
I (1590) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (15903) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (15913)TASK_MONITOR: PowerManagerTas     Blocked    3          1752           
I (15923) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (15923) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (15933) TASK_MONITOR: ipc0                 Suspended  24         508            
I (15943) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (15953) TASK_MONITOR: Free Heap: 102468 bytes, Min Free Heap: 92264 bytes
I (15953) TASK_MONITOR: ============================================================
I (16003) [info]MqttClientEsp32: [components/framework/src/HAL
[23:14:01 101 Rx] /HAL_ESP32/mqttclientesp32.cpp:191:handleEvent] Connected
I (16003) [info]MqttManagerTask: [src/task/mqttmanagertask.cpp:155:onSubscribeTopic] MQTT Connected! Subscribing to topic: devices/163091810856900/commands
I (16023) [info]MqttClientEsp32: [components/framework/src/HAL/HAL_ESP32/mqttclientesp32.cpp:143:subscribe] [subscribe] Topic: devices/163091810856900/commands success

[23:14:01 141 Rx] I (16153) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (16153) wifi:<ba-del>idx:0, tid:0
I (16233) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:21, winSize:64

[23:14:02 788 Rx] I (16953) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:14:03 699 Rx] I (17653) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (17653) wifi:<ba-del>idx:0, tid:0

[23:14:03 267 Rx] I (17933) wifi:new:<3,1>, old:<3,1>, ap:<3,1>, sta:<3,1>, prof:1, snd_ch_cfg:0x0
I (17933) wifi:station: 04:e5:98:6d:f1:9f join, AID=1, bgn, 40U
I (17933) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:249:eventHandlerWifi] [AP] device connected: MAC=04:e5:98:6d:f1:9f, AID=1
I (17953) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:249:eventHandlerWifi] [AP] device connected: MAC=04:e5:98:6d:f1:9f, AID=1
I (17953) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:14:03 244 Rx] I (18183) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:23, winSize:64

[23:14:03 130 Rx] I (18313) esp_netif_lwip: DHCP server assigned IP to a client, IP is: 192.168.4.2

[23:14:04 171 Rx] I (18493) wifi:<ba-add>idx:2 (ifx:1, 04:e5:98:6d:f1:9f), tid:0, ssn:16, winSize:64

[23:14:04 458 Rx] I (18963) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (18963) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (18963) TASK_MONITOR: MqttManagerTask      Ready      3          4872           
I (18973) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (18973) TASK_MONITOR: AdcBurst             Ready      2          1672           
I (18993) TASK_MONITOR: TaskMonitor          Running    1          2168           
I (19003) TASK_MONITOR: IDLE1                Ready      0          1028           
I (19013) TASK_MONITOR: IDLE0                Ready      0          924            
I (19013) TASK_MONITOR: mqtt_task            Blocked    5          3448           
I (19023) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (19033) TASK_MONITOR: tiT                  Blocked    18         1444           
I (19043) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (19043) TASK_MONITOR: ipc0                 Suspended  24         508            
I (19053) wifi:I (19053) TASK_MONITOR: sys_evt              
[23:14:04 103 Rx] Blocked    20         220            
[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)I (19063) TASK_MONITOR: wifi                 Blocked    23         3608           

I (19073) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (19073) wifi:<ba-del>idx:0, tid:0I (19083) TASK_MONITOR: esp_timer            Suspended  22         3196           

I (19093) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (19103) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (19113) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (19113) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (19123) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (19133) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (19133) TASK_MONITOR: ipc1                 Suspended  24         500            
I (19143) TASK_MONITOR: Free Heap: 99340 bytes, Min Free Heap: 92264 bytes
I (19153) TASK_MONITOR: =============================================================

[23:14:04 108 Rx] I (19183) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:27, winSize:64

[23:14:05 463 Rx] I (19653) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (19653) wifi:<ba-del>idx:0, tid:0

[23:14:05 310 Rx] I (19963) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:14:05 200 Rx] I (20183) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:28, winSize:64

[23:14:06 461 Rx] I (20653) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (20653) wifi:<ba-del>idx:0, tid:0

[23:14:06 310 Rx] I (20963) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (20983) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=96 GPIO39=1829 GPIO35=0

[23:14:06 100 Rx] I (21083) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=191mV DC2=1634mV | RMS=31.2mV/24.5mV | A1=0.42A A2=0.42A [N=576]
I (21173) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:28, winSize:64

[23:14:07 879 Rx] I (21963) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (22053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (22053) wifi:<ba-del>idx:0, tid:0

[23:14:07 184 Rx] I (22163) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (22163) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (22163) TASK_MONITOR: TaskMonitor          Running    1          2168           
I (22173) TASK_MONITOR: IDLE0                Ready      0          924            
I (22173 wifi:I (22183) ASK_MONITOR: IDLE1                Ready      0          1028           
<ba-add>idx:0 (ifx:0, 1c:b:f3:6a:77:74), td:0, ssn:30, winSize:64I (22193) TASK_MONITOR: tiT                 Blocke    18         1444           

I (22203) TASK_MONITOR: mqtt_task            Blocked    5          3448           
I (22213) TASK_MONITOR: taskfreezer          Blocked    1         3584           
I (22213) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (22223) TASK_MONITOR: ipc                 Suspended  24         508           
I (22233) TASK_MONITOR: sys_evt              Blocked    20         220            
I (22243) TASK_MONITOR: EStopTsk            Blocked   2         1880           
I (22243) TASK_MONITOR: AdcReaderTas        Blocked    3          1648           
I (22253) TASK_MONITOR: ep_timer           Suspended  22        3196           
I (22263) TASK_MONITOR:WifiManagerTask      Blocked    
[23:14:07 105 Rx] 5          5288           
I (2226) TASK_MONIOR:EspNowReceiverT      Blocked    3          1744           
I (22273) TASK_MONITOR: MqttManagerTask      Blocked   3          4872           
I (22283) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (22293) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (22293) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (22303) TASK_MONITOR: wifi                 Blocked    23         3608           
I (22313) TASK_MONITOR: ipc1                 Suspended  24         500            
I (22313) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (22323) TASK_MONITOR: Free Heap: 100924 bytes, Min Free Heap: 92264 bytes
I (22333) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:37:onTimer100HzProcess] Diagnostics: Free Heap Size: 100924 bytes
I (22343) TASK_MONITOR: =============================================================

[23:14:08 694 Rx] I (22973) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (23053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (23053) wifi:<ba-del>idx:0, tid:0

[23:14:08 214 Rx] I (23193) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:31, winSize:64

[23:14:09 768 Rx] I (23973) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (24053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (24053) wifi:<ba-del>idx:0, tid:0

[23:14:09 210 Rx] I (24193) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:33, winSize:64

[23:14:10 771 Rx] I (24973) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (25053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (25053) wifi:<ba-del>idx:0, tid:0

[23:14:10 211 Rx] I (25183) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:34, winSize:64

[23:14:10 163 Rx] I (25353) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (25353) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (25353) TASK_MONITOR: TaskMonitor          Running    1          2168           
I (25363) TASK_MONITOR: IDLE0                Ready      0          924            
I (25373) TASK_MONITOR: IDLE1                Ready      0          1028           
I (25383) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (25383) TASK_MONITOR: mqtt_task            Blocked    5          3448           
I (25393) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (25403) TASK_MONITOR: tiT                  Blocked    18         1444           
I (25403) TASK_MONITOR: sys_evt              Blocked    20         220            
I (25413) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (25423) TASK_MONITOR: ipc1                 Suspended  24         500            
I (25433) TASK_MONITOR: wifi                 Blocked    23         3608           
I (25433) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (25443) TASK_MONITOR: esp_timer            Suspended  22  
[23:14:11 104 Rx]        3196           
I (25453) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (25463) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (25463) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (25473) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (25483) TAK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (25483) TASK_MONITOR: ConfigSystemTas      Blocked    3         5852         
I (25493) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (25503) TASK_MONTOR: ipc0                 Suspended  24         508            
I (25513) TASK_MONITOR: Free Heap: 100920 bytes, Min Free Heap: 92264 bytes
I (25513) TAK_MONITOR ===========================================================

[23:14:11 512 Rx] I (25973) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (26053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (26053) wifi:<ba-del>idx:0, tid:0

[23:14:11 212 Rx] I (26193) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:35, winSize:64

[23:14:12 775 Rx] I (26973) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (26983) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=106 GPIO39=1809 GPIO35=0
I (27053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (27053) wifi:<ba-del>idx:0, tid:0
I (27083) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=188mV DC2=1627mV | RMS=13.4mV/23.2mV 
[23:14:12 103 Rx] | A1=0.36A A2=0.41A [N=508]
I (27183) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:36, winSize:64

[23:14:13 881 Rx] I (27973) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900telemetry, len: 20
I (28053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (28053) wifi:<ba-del>idx:0, tid:0

[23:14:13 206 Rx] I (28193) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:36, winSize:64

[23:14:14 320 Rx] I (28523) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (28523) TASK_MONITOR: Task Name            Sate      Piority   Stack High Water
I (28523) TASK_MONITOR: AdcBurst             Ready     2          1672           
I (28533) TASK_MONITOR: TaskMonitor          Running    1          2168           
I (28543) TASK_MONITOR: DLE1                Ready      0          1028           
I (28553) TASK_MONITOR: IDLE0                Ready      0          924            
I (28553) TASK_MONITOR: mqt_task            Blocked    5          3448           
I (28563) TASK_MONIOR: taskfreezer         Blocked    1          3584           
I (28573) ASK_MONITOR: tiT                 Blocked    18         144           
I (28573) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (28583) TASK_MONITOR: ipc1                 Suspended  24         500            
I (28593) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (28603) TASK_MONITOR: wifi                 Blocked    23         3608           
I (28603) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (28613)
[23:14:14 100 Rx]  TASK_MONITOR: esp_timer            Suspended  22         3196           
I (28623) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (28623) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (28633) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (28643) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (28653) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (28653) wifi:I (28653) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)I (28663) TASK_MONITOR: ipc0                 Suspended  24         508            

I (28683) TASK_MONITOR: sys_evt              Blocked    20         220            
I (28683) wifi:<ba-del>idx:0, tid:0I (28683) TASK_MONITOR: Free Heap: 100912 bytes, Min Free Heap: 92264 bytes

I (28693) TASK_MONITOR: =============================================================

[23:14:14 355 Rx] I (28983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:14:14 197 Rx] I (29193) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:38, winSize:64

[23:14:15 789 Rx] I (29983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (30053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (30053) wifi:<ba-del>idx:0, tid:0

[23:14:15 201 Rx] I (30203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:39, winSize:64

[23:14:16 441 Rx] I (30653) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (30653) wifi:<ba-del>idx:0, tid:0

[23:14:16 322 Rx] I (30983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:14:16 198 Rx] I (31193) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:40, winSize:64

[23:14:17 446 Rx] I (31653) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (31653) wifi:<ba-del>idx:0, tid:0
I (31703) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (31703) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (31703) TASK_MONITOR: TaskMonitor          Running    1          2168           
I (31713) TASK_MONITOR: IDLE0                Ready      0          924            
I (31723) TASK_MONITOR: IDLE1                Ready      0          1028           
I (31733) TASK_MONITOR: tiT                  Blocked    18         1444           
I (31733) TASK_MONITOR: mqtt_task            Blocked    5          3448           
I (31743) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (317
[23:14:17 104 Rx] 53) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (31753) TASK_MONITOR: ipc1                 Suspended  24         500            
I (31763) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (31773) TASK_MONITOR: ipc0                 Suspended  24         508            
I (31783) TASK_MONITOR: wifi                 Blocked    23         3608           
I (31783) TASK_MONITOR: AdcReaderTask       Blcked   3          1648           
I (3793) TASK_MONITOR: esp_timer           Suspended  2         3196          
I 31803) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (31803) TASK_MONIOR: MqttManagerTask      Blocked    3          4872           
I (31813) TASK_MONITOR: EspNowReceiverT     Blocked    3          1744           
I (31823) TASK_MONITOR: RelayManagerTas      Blocked    3         5304          
I (31833) TASK_MONITOR ConfigSytemTas      Blocked    3          5852           
I (31833) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (3184) TASK_MONITOR: sys_evt              Blocked    20         220            
I (31853) TASK_MNITOR: E
[23:14:17 101 Rx] StopTask            Blocked    24         1880           
I (31863) TASK_MONITOR: Free Heap: 101008 bytes, Min Free Heap: 92264 bytes
I (1863) TASK_MONITOR: =========================================================

[23:14:17 118 Rx] I (31983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:14:17 213 Rx] I (32203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:42, winSize:64
I (32293) TIMER_DBG: 100Hz timer alive | tick=3174 | heap_free=100924 min=92264

[23:14:17 110 Rx] I (32333) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:37:onTimer100HzProcess] Diagnostics: Free Heap Size: 100924 bytes

[23:14:18 315 Rx] I (32653) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (32653) wifi:<ba-del>idx:0, tid:0

[23:14:18 322 Rx] I (32983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (32993) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=115 GPIO39=1831 GPIO35=0

[23:14:18 102 Rx] I (33093) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=190mV DC2=1639mV | RMS=23.2mV/18.3mV | A1=0.42A A2=0.43A [N=528]

[23:14:18 105 Rx] I (33203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:43, winSize:64

[23:14:19 454 Rx] I (33653) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (33653) wifi:<ba-del>idx:0, tid:0

[23:14:19 321 Rx] I (33983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:14:19 224 Rx] I (34213) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:44, winSize:64

[23:14:20 656 Rx] I (34873) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (34873) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (34873) TASK_MONITOR: AdcBurst             Ready      2          1672           
I (34883) TASK_MONITOR: TaskMonitor          Running    1          2168           
I (34893) TASK_MONITOR: IDLE1                Ready      0          1028           
I (34903) TASK_MONITOR: IDLE0                Ready      0          924            
I (34903) TASK_MONITOR: mqtt_task            Blocked    5          3448           
I (34913) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (34923) TASK_MONITOR: tiT                  Blocked    18         1444           
I (34923) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (34933) TASK_MONITOR: ipc0                 Suspended  24         508            
I (34943) TASK_MONITOR: sys_evt              Blocked    20         220            
I (34953) TASK_MONITOR: wifi                 Blocked    23         3608           
I (34953) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (34963) TASK_MONITOR: WifiManagerTask      Blocked    5    
[23:14:20 101 Rx]       5288           
I (34973) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (34983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (34993) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (35003) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (35003) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (35013) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (35023) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (35033) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (35033) TASK_MONITOR: ipc1                 Suspended  24         500            
I (35043) TASK_MONITOR: Free Heap: 99248 bytes, Min Free Heap: 92264 bytes
I (35053) TASK_MONITOR: =============================================================
I (35053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (35063) wifi:<ba-del>idx:0, tid:0

[23:14:20 218 Rx] I (35203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:45, winSize:64

[23:14:21 771 Rx] I (35983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (36053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (36053) wifi:<ba-del>idx:0, tid:0

[23:14:21 212 Rx] I (36203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:46, winSize:64

[23:14:22 449 Rx] I (36653) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (36653) wifi:<ba-del>idx:0, tid:0

[23:14:22 317 Rx] I (36983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:14:22 206 Rx] I (37193) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:47, winSize:64

[23:14:23 781 Rx] I (37983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (38053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (38053) wifi:<ba-del>idx:0, tid:0
I (38063) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (38063) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (38073) TASK_MONITOR: TaskMonitor          Running    1          2168           
I (38073) TASK_MONITOR: IDLE0                Ready      0  
[23:14:23 100 Rx]         924            
I (38083) TASK_MONITOR: IDLE1                Ready      0          916            
I (38093) TASK_MONITOR: tiT                  Blocked   18        1444          
I (38093) TSK_MONITOR: mqtt_task            Blocked    5          3448           
I (38103) TASK_MONITOR: takfreezer          Blocked    1          3584           
I (38113) TASK_MONITOR: AdcBurs             Blocked    2          1672           
I 38123) TASK_MONITOR: ipc0                 Suspended  24         508            
I (38123) TASK_MONITOR: sys_evt              Blocked    20         220           
I (38133) TASK_MONITOR: EStopTak            Blocked    24         1880           
I (38143) TASK_MONITOR: wif                 Blocked   23         3608         
I (814) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (38153) TASK_MONITOR: sp_timer            Suspnded  22         2156           
I (38163) TASK_MNITOR: WifiManagerTask      Blocked    5          5288           
I (38173) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (38173) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (38183) TAK_MONITOR: PowerManagerTas      Blocked    3 
[23:14:23 101 Rx]          1752           
I (38193) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (38193) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (38203) wifi:I (38203) TASK_MONITOR: ipc1                 Suspended  24         500            
<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:48, winSize:64I (38213) TASK_MONITOR: Tmr Svc              Blocked    1          1548           

I (38223) TASK_MONITOR: Free Heap: 100784 bytes, Min Free Heap: 92264 bytes
I (38233) TASK_MONITOR: =============================================================

[23:14:24 781 Rx] I (38983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (38993) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=97 GPIO39=1814 GPIO35=0
I (39053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (39053) wifi:<ba-del>idx:0, tid:0
I (39093) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:21
[23:14:24 104 Rx] 5:computeAndSendRms] DC1=190mV DC2=1638mV | RMS=14.9mV/20.5mV | A1=0.29A A2=0.43A [N=515]

[23:14:24 101 Rx] I (39203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:49, winSize:64

[23:14:25 779 Rx] I (39983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (40053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (40053) wifi:<ba-del>idx:0, tid:0

[23:14:25 211 Rx] I (40203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:50, winSize:64

[23:14:26 783 Rx] I (40983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (41053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (41053) wifi:<ba-del>idx:0, tid:0

[23:14:26 220 Rx] I (41203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:51, winSize:64
I (41243) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (41243) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (41243) TASK_MONITOR: TaskMonitor          Running    1          2168           
I (41253) TASK_MONITOR: IDLE0                Ready      0          924            
I (41263) TASK_MONITOR: IDLE1                Ready      0          916            
I (41273) TASK_MONITOR: tiT                  Blocked    18         1444           
I (41273) TASK_MONITOR: mqtt_task            Blocked    5          3448           
I (41283) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (41293) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (41293) TASK_MONITOR: sys_evt              Blocked    20         220            
I (41303) TASK_MONITOR: 
[23:14:26 100 Rx] EStopTask            Blocked    24         1880           
I (41313) TASK_MONITOR: ipc1                 Suspended  24         500            
I (41323) TASK_MONITOR: wifi                 Blocked    23         3608           
I (41323) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (41333) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (41343) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (41353) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (41353) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (41363) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (41373) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (41373) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (41383) TASK_MONITOR: Tmr Svc              Bloked    1         148           
I (41393) TASK_MONITOR: ipc0                 Suspended  4         508            
I (41403) TASK_MONITOR: Free Heap: 100924 bytes, Min Free Heap: 9224 bytes
I (41403) TAS_MONITOR: ============================================================

[23:14:27 664 Rx] I (41983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (42053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (42053) wifi:<ba-del>idx:0, tid:0

[23:14:27 202 Rx] I (42203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:52, winSize:64

[23:14:27 115 Rx] I (42333) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:37:onTimer100HzProcess] Diagnostics: Free Heap Size: 100924 bytes

[23:14:28 650 Rx] I (42983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (43053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (43053) wifi:<ba-del>idx:0, tid:0

[23:14:28 201 Rx] I (43203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:53, winSize:64

[23:14:29 773 Rx] I (43983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (44053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (44053) wifi:<ba-del>idx:0, tid:0

[23:14:29 215 Rx] I (44203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:54, winSize:64

[23:14:30 212 Rx] I (44413) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (44413) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (44413) TASK_MONITOR: AdcBurst             Ready      2          1672          
I (44423) TASK_MONITOR: TaskMonitor          Running    1          2168           
I (4433) TASK_MONITOR: IDLE1                eady      0          916            
I (44433) TASK_MONITOR: IDLE0                Ready      0          924            
I (44443) TASK_MONITOR: mqtt_task            Blocked    5          3448           
I (44453) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (44463) TASK_MONITOR: tiT                 Blocked    18         1444           
I (44463) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (44473) TASK_MONITOR: ipc1                 Suspende  24         500            
I (44483) TASK_MNITOR: Tmr Svc              Blocked    1          1548           
I (44493) TASK_MONITOR: wifi                 Blocked    23         3608           
I (44493) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (44
[23:14:30 106 Rx] 503) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (44513) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (44513) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (44523) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (44533) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (44543) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (44543) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (44553) TASK_MONITOR: ipc0                 Suspended  24         508            
I (44563) TASK_MONITOR: sys_evt              Blocked    20         220            
I (44573) TASK_MONITOR: Free Heap: 100924 bytes, Min Free Heap: 92264 bytes
I (44573) TASK_MONITOR: =============================================================

[23:14:30 120 Rx] I (44653) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (44653) wifi:<ba-del>idx:0, tid:0

[23:14:30 318 Rx] I (44983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (44993) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=69 GPIO39=1811 GPIO35=0

[23:14:30 105 Rx] I (45093) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=190mV DC2=1640mV | RMS=19.1mV/21.2mV | A1=0.38A A2=0.39A [N=548]
I (45203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:55, winSize:64

[23:14:31 545 Rx] I (45653) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (45653) wifi:<ba-del>idx:0, tid:0

[23:14:31 317 Rx] I (45983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:14:31 210 Rx] I (46203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:56, winSize:64

[23:14:32 446 Rx] I (46653) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (46653) wifi:<ba-del>idx:0, tid:0

[23:14:32 318 Rx] I (46983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:14:32 204 Rx] I (47193) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:57, winSize:64

[23:14:33 376 Rx] I (47583) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (47583) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (47583) TASK_MONITOR: TaskMonitor          Running    1          2168           
I (47593) TASK_MONITOR: IDLE0                Ready      0          924            
I (47603) TASK_MONITOR: IDLE1                Ready      0          916            
I (47613) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (47613) TASK_MONITOR: mqtt_task            Blocked    5          3448           
I (47623) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (47633) TASK_MONITOR: tiT                  Blocked    18         1444           
I (47633) TASK_MONITOR: ipc1                 Suspended  24         500            
I (47643) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (47653) TASK_MONITOR: ipc0                 Suspended  24         508            
I (47663) TASK_MONITOR: wifi                 Blocked    23         3608           
I (47663) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (47673) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (47683) TASK_MONITOR: WifiManagerTas
[23:14:33 105 Rx] k      Blocked    5          5288           
I (47693) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (4693) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (47703) TASK_MONTOR: PowerManagerTas      Blocked    3          1752           
I (47713) TASK_MONITOR: RelayManagerTas      Blocked    3         5304           
I (47713) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (47723) TASK_MONITOR: sys_evt              Blocked    20         220            
I (47733) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (47743) TASK_MONITOR: Free Heap: 100932 bytes, Min Free Heap: 92264 byes
I (47743) TASK_MONITOR: ============================================================

[23:14:33 275 Rx] I (47983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (48053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (48053) wifi:<ba-del>idx:0, tid:0

[23:14:33 211 Rx] I (48193) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:59, winSize:64

[23:14:34 785 Rx] I (48983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (49053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (49053) wifi:<ba-del>idx:0, tid:0

[23:14:34 216 Rx] I (49203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:60, winSize:64

[23:14:35 768 Rx] I (49983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (50053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (50053) wifi:<ba-del>idx:0, tid:0

[23:14:35 203 Rx] I (50193) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:61, winSize:64

[23:14:36 547 Rx] I (50753) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (50753) TASK_MONITOR: Task Name            State      Priority   Stack Hig Wate
I (50753) TASK_MONITOR: AdcBurst             Ready      2          1672           
I (50763) TASK_MONITOR: TaskMonitor          Running    1          2168           
I (50773) TASK_MONITOR: IDLE1                Ready      0          916            
I (50783) TASK_MONITOR: IDLE0                Ready      0          924            
I (50783) TASK_MONITOR: mqtt_task            Blocked    5          3448           
I (50793) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (50803) TASK_MONITOR: tiT                  Blocked    18         1444           
I (50803) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (50813) TASK_MONITOR: ipc0                 Suspended  24         508            
I (50823) TASK_MONITOR: sys_evt              Blocked    20         220            
I (50833) TASK_MONITOR: wifi                 Blocked    23         3608           
I (50833) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (50843) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (50853) TASK_MONITOR: WifiManagerTask 
[23:14:36 104 Rx]      Blocked    5          5288           
I (50863) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (50863) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (50873) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (50883) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (50883) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (50893) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (50903) TASK_MONITOR: ipc1                 Suspended  24         500            
I (50913) TASK_MONITOR: Free Heap: 100924 bytes, Min Free Heap: 92264 bytes
I (50913) TASK_MONITOR: =============================================================

[23:14:36 117 Rx] I (50983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (50993) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=91 GPIO39=1821 GPIO35=0
I (51053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (51053) wifi:<ba-del>idx:0, tid:0

[23:14:36 101 Rx] I (51093) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=190mV DC2=1633mV | RMS=24.5mV/24.1mV | A1=0.40A A2=0.47A [N=521]

[23:14:36 109 Rx] I (51203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:62, winSize:64

[23:14:37 769 Rx] I (51983) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/16309181056900/telemetry, len: 20
I (52053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (52053) wifi:<ba-del>idx:0, tid:0

[23:14:37 209 Rx] I (52193) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:63, winSize:64

[23:14:37 127 Rx] I (52333) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:37:onTimer100HzProcess] Diagnostics: Free Heap Size: 100924 bytes

[23:14:38 221 Rx] I (52563) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.11 pH=8.04 | Temp=29.93Â°C | Volt=0.00V | PhaseLostMask=7

[23:14:38 426 Rx] I (52993) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:14:39 924 Rx] I (53923) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (53923) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (53923) TASK_MONITOR: TaskMonitor          Running    1          2168           
I (53933) TASK_MONITOR: IDLE0                Ready      0          924            
I (53943) TASK_MONITOR: IDLE1                Ready      0          916            
I (53953) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (53953) TASK_MONITOR: mqtt_task            Blocked    5          3448           
I (53963) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (53973) TASK_MONITOR: tiT                  Blocked    18         1444           
I (53973) TASK_MONITOR: ipc0                 Suspended  24         508            
I (53983) TASK_MONITOR: sys_evt              Blocked    20         220            
I (53993) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 0
I (54003) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (54013)TASK_MONITOR: wifi                 Blocked    23    
[23:14:39 103 Rx]      3608          
I (54023) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (5403) TASK_MONITOR: esptimer            Suspended  22         2156           
I (5033)TASK_MONITOR: WifiManagerTask      Blocked    5          5288          
I (54043) TASK_MONITOR: EspNowReceiverT      Blocked   3          1744           
I (54053) TASK_MONITOR: MqttManagerTask     Blocked    3          4872           
I (54053) wifi:I (54053) TASK_MONITOR: PowerMangerTas      Blocked    3          752           
[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (54063) TAK_MONITOR: RelayManagerTas     Blocked    3          5304           
I (54073) wifi:I (54073) TASK_MONITOR: ConfigSystemTas      Blockd    3          5852           
<ba-del>idx:0, tid:0
I (54083) TASK_MONITOR: ipc1                 Suspended  24         500            
I (54093) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (54103) TASK_MONITOR: Free Heap: 99112 bytes, Min Free Heap: 92264 bytes
I (54113) TASK_MONITOR: =============================================================

[23:14:39 171 Rx] I (54203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:66, winSize:64

[23:14:40 780 Rx] I (54993) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (55053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (55053) wifi:<ba-del>idx:0, tid:0

[23:14:40 206 Rx] I (55213) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:67, winSize:64

[23:14:41 774 Rx] I (55993) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (56053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (56053) wifi:<ba-del>idx:0, tid:0

[23:14:41 209 Rx] I (56203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:68, winSize:64

[23:14:42 780 Rx] I (56993) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=77 GPIO39=1827 GPIO35=0
I (56993) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published teleetry to topic: devices/163091810856900/telemetry, len: 20
I (57053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (57053) wifi:<ba-del>idx:0, tid:0
I (57093) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=190mV DC2=1638mV | RMS=11.7mV/27.4mV 
[23:14:42 105 Rx] | A1=0.35A A2=0.41A [N=560]
I (57113) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (57113) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (57113) TASK_MONITOR: TaskMonitor          Running    1          2168           
I (57123) TASK_MONITOR: IDLE0                Ready      0          924            
I (57133) TASK_MONITOR: IDLE1                Ready      0          916            
I (57133) TASK_MONITOR: mqtt_task            Blocked    5          3448           
I (57143) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (57153) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (57163) TASK_MONITOR: tiT                  Blocked    18         1444           
I (57163) TASK_MONITOR: sys_evt              Blocked    20         220            
I (57173) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (57183) TASK_MONITOR: ipc1                 Suspended  24         500            
I (57193) TASK_MONITOR: wifi              
[23:14:42 102 Rx]    Blocked    23         3608           
I (57193) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (57203) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (57213) wifi:I (57213) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:69, winSize:64I (57223) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           

I (57233) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (57243) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (57243) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (57253) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (57263) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (57273) TASK_MONITOR: ipc0                 Suspended  24         508            
I (57273) TASK_MONITOR: Free Heap: 100700 bytes, Min Free Heap: 92264 bytes
I (57283) TASK_MONITOR: =============================================================

[23:14:43 361 Rx] I (57563) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.16 pH=8.06 | Temp=29.93Â°C | Volt=0.00V | PhaseLostMask=7

[23:14:43 416 Rx] I (57993) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:14:44 998 Rx] I (58993) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (59053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (59053) wifi:<ba-del>idx:0, tid:0

[23:14:44 205 Rx] I (59203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:72, winSize:64

[23:14:45 443 Rx] I (59653) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (59653) wifi:<ba-del>idx:0, tid:0

[23:14:45 337 Rx] I (59993) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:14:45 208 Rx] I (60203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:73, winSize:64
I (60293) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (60293) TASK_MONITOR: Task Name            State      Priority   Stak High Water
I (60293) TASK_MONITOR: AdcBurst             Ready      2          167       
[23:14:45 103 Rx]     
I (60303) TAS_MOITOR: TaskMonitor         Running    1          2168          
I (60313) TASK_MONITOR: IDLE0               Ready      0          924           
I (60313) TASK_MONITOR: IDLE1               Ready      0          916            
I (60323) TASK_MONITOR: mqtt_task            Bloke    5          3448          
I (6333) TASK_MONITOR: taskfreezer          Blocked    1         354           
I (60343) TASK_MONITOR: tiT                  Blocked    18        1444           
I (60343) TASK_MONITOR EStopTask            Blocked    24         1880           
I (60353) TASK_MONITOR: ipc1                 Suspended  24        500            
I (60363) TASK_MONITOR: Tm Svc              Blocked    1          1548           
I (60363) TASK_MONITOR: wifi                Blocked    23         608          
I (60373) TASK_MONITOR: AdcRaderTask       Blocked    3          1648           
I (60383) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (60393) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (60393) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (60403) TASK_MON
[23:14:46 105 Rx] ITOR: MqttManagerTask      Blocked    3          4872           
I (60413) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (60423) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (60423) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (60433) TASK_MONITOR: ipc0                 Suspended  24         508            
I (60443) TASK_MONITOR: sys_evt              Blocked    20         220            
I (60443) TASK_MONITOR: Free Heap: 100700 bytes, Min Free Heap: 92264 bytes
I (60453) TASK_MONITOR: =============================================================

[23:14:46 570 Rx] I (60993) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:14:47 988 Rx] I (61993) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (62053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (62053) wifi:<ba-del>idx:0, tid:0

[23:14:47 208 Rx] I (62203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:76, winSize:64
I (62293) TIMER_DBG: 100Hz timer alive | tick=6174 | heap_free=100700 min=92264

[23:14:47 117 Rx] I (62333) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:37:onTimer100HzProcess] Diagnostics: Free Heap Size: 100700 bytes

[23:14:48 224 Rx] I (62553) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.12 pH=8.06 | Temp=29.93Â°C | Volt=0.00V | PhaseLostMask=7

[23:14:48 427 Rx] I (62993) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=80 GPIO39=1810 GPIO35=0
I (62993) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemtry, len: 20
I (63093) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:21
[23:14:48 101 Rx] 5:computeAndSendRms] DC1=189mV DC2=1628mV | RMS=14.2mV/20.8mV | A1=0.34A A2=0.43A [N=541]
I (63153) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (63153) wifi:<ba-del>idx:0, tid:0

[23:14:48 111 Rx] I (63213) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:79, winSize:64

[23:14:49 241 Rx] I (63463) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (63463) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (63463) TASK_MONITOR: TaskMonitor          Running    1          2168           
I (63473) TASK_MONITOR: IDLE0                Ready      0          924            
I (63483) TASK_MONITOR: IDLE1                Ready      0          916            
I (63493) TASK_MONITOR: tiT                  Blocked    18         1444           
I (63493) TASK_MONITOR: mqtt_task            Blocked    5          3448           
I (63503) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (63513) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (63513) TASK_MONITOR: ipc1                 Suspended  24         500            
I (63523) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (63533) TASK_MONITOR: ipc0                 Suspended  24         508            
I (63543) TASK_MONITOR: wifi                 Blocked    23         3608           
I (63543) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (63553) TASK_MONITOR: AdcReaderTask        Blocked    3   
[23:14:49 104 Rx]        1648           
I (63563) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (63573) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (63573) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (63583) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (63593) TASK_MONITOR: MqttManagerTask      Bocked    3          4872           
I (63593) TASK_MONITOR: PowerManagerTas      Blocked    3          1752          
I (63603) TASK_MONITOR: sys_evt             Blocked    0         220            
I (63613) TASK_MONITOR: EStopTask            locked    24         1880          
I (63623) TASK_MONITOR: Free Heap: 100700 bytes, Min Free Heap: 92264 bytes
I (63623) TASK_MONITOR: ============================================================

[23:14:49 422 Rx] I (63993) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (64053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (64053) wifi:<ba-del>idx:0, tid:0

[23:14:49 205 Rx] I (64203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:80, winSize:64

[23:14:50 774 Rx] I (64993) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (65073) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (65073) wifi:<ba-del>idx:0, tid:0

[23:14:50 213 Rx] I (65203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:81, winSize:64

[23:14:51 786 Rx] I (65993) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/tlemetry, len: 20
I (66053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (66053) wifi:<ba-del>idx:0, tid:0

[23:14:51 205 Rx] I (66203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:82, winSize:64

[23:14:52 419 Rx] I (66633) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (66633) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (66633) TASK_MONITOR: AdcBurst             Ready      2         1672          
I (66643) TASK_MONITOR: TaskMonior          Running    1          2168           
I (66653) TASK_MONITOR: IDLE1                Ready      0         916            
I (66663) TASK_MONITOR: IDL0                Ready      0          924            
I (66663) TASK_MONITOR: mqtt_task            Blocked    5          3448          
I (66673) TAK_MONIOR: taskfrezer          Blocked    1         3584         
I (66683) TASK_MONITOR: tiT                  Blocked    18         1444           
I (66683) TASK_ONITOR: Tmr Svc              Blocked    1          1548           
I (66693) TASK_MONITOR: ipc0                 Suspended  24         508            
I (66703) TASK_MONITOR: sys_evt              Blocked    20         220            
I (66713) TASK_MONITOR: wifi                 Blocked    23         3608           
I (66713) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (66723) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (66733) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (66733) TASK_MONITOR: EspNo
[23:14:52 105 Rx] wReceiverT      Blocked    3          1744           
I (66743) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (66753) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (66763) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (66763) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (66773) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (66783) TASK_MONITOR: ipc1                 Suspended  24         500            
I (66793) TASK_MONITOR: Free Heap: 100700 bytes, Min Free Heap: 92264 bytes
I (66793) TASK_MONITOR: =============================================================

[23:14:52 239 Rx] I (66993) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (67053) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (67053) wifi:<ba-del>idx:0, tid:0

[23:14:52 207 Rx] I (67203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:83, winSize:64

[23:14:53 347 Rx] I (67553) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.18 pH=8.07 | Temp=29.81Â°C | Volt=0.00V | PhaseLostMask=7

[23:14:53 431 Rx] I (67993) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:14:53 148 Rx] I (68153) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (68153) wifi:<ba-del>idx:0, tid:0
I (68203) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:85, winSize:64

[23:14:53 183 Rx] I (68343) [info]ConfigSystemTask: [src/task/configsystemtask.cpp:159:processorConfigSystemMessage] Received CONFIG_SYSTEM_MESSAGE to write new config
I (68343) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:107:saveConfigToFlash] saveConfigToFlash write data system to nvs success
I (68353) [info]ConfigSystemTask: [src/task/configsystemtask.cpp:168:processorConfigSystemMessage] Config saved to flash successfully!
I (68363) [info]ConfigSystemTask: [src/task/configsystemtask.cpp:131:sendPingResponseToAppCenter] Sent Ping Response to App Center

[23:14:54 529 Rx] I (68873) [info]ConfigSystemTask: [src/task/configsystemtask.cpp:177:processorConfigSystemMessage] Restarting device to apply new configuration...
I (68873) wifi:state: run -> init (0x0)
I (68883) wifi:pm stop, total sleep time: 0 us / 56387595 us

I (68883) wifi:<ba-del>idx:0, tid:0
I (68883) wifi:new:<3,1>, old:<3,1>, ap:<3,1>, sta:<3,1>, prof:1, snd_ch_cfg:0x0
I (68893) wifi:station: 04:e5:98:6d:f1:9f leave, AID = 1, reason = 2, bss_flags is 33786995, bss:0x3ffe2900
I (68903) wifi:new:<3,0>, old:<3,1>, ap:<3,1>, sta:<3,1>, prof:1, snd_ch_cfg:0x0
I (68913) wifi:<ba-del>idx:2, tid:0
I (68913) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:235:eventHandlerWifi] STA DISCONNECTED => reset bit WIFI_CONNECTED_BIT
E (68923) esp-tls-mbedtls: read error :-0x004C
I (68923) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:257:eventHandlerWifi] [AP] device disconnected: MAC=04:e5:98:6d:f1:9f, AID=1
E (68933) transport_base: esp_tls_conn_read error, errno=Software caused connection abort
I (68943) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:257:eventHandlerWifi] [AP] device disconnected: MAC=04:e5:98:6d:f1:9f, AID=1
E (68953) mqtt_client: esp_mqtt_handle_transport_read_error: tran
[23:14:54 102 Rx] sport_read() error: errno=113
I (68933) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:76:onTimer100HzProcess] Wifi sta disconnected
E (68973) [error]MqttClientEsp32: [components/framework/src/HAL/HAL_ESP32/mqttclientesp32.cpp:219:handleEvent] MQTT_EVENT_ERROR: esp_tls_last_err=0x0, tls_stack_err=0x4c, socket_errno=0
I (68993) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=108 GPIO39=1761 GPIO35=0
E (69003) mqtt_client: mqtt_process_receive: mqtt_message_receive() returned -2
I (69003) [info]MqttManagerTask: [src/task/mqttmangertask.cpp:76:onTimer100HzProcess] Wifidiscnnected, stopping MQTT client...
I (69023) wifi:I (69023) [infoMqttClientEsp32: [components/framework/src/HAL/HAL_ESP32/mqttclientesp32.cpp:210:handleEvent] DisConnectd
flush txq
I (69043) wifi:stop sw txq
I (69043) wifi:lmac stop hw txq
ets Jul 29 2019 12:21:46

rst:0xc (SW_CPU_RESET),boot:0x17 (SPI_FAST_FLASH_BOOT)
configsip: 0, SPIWP:0xee
clk_drv:0x00,q_drv:0x00,d_drv:0x00,cs0_drv:0x00,hd_drv:0x00,wp_drv:0x00
mode:DIO, clock div:2
load:0x3fff0030,len:6380
ho 0 tail 12 room 4
load:0x40078000,len:15916
load:0x40080400,len:3860
entr
[23:14:54 101 Rx] y 0x40080630
I (29) boot: ESP-IDF 5.5.0 2nd stage bootloader
I (29) boot: compile time Jun 22 2026 20:35:16
I (29) boot: Multicore bootloader
I (30) boot: chip revision: v3.1
I (33) boot.esp32: SPI Speed      : 40MHz
I (37) boot.esp32: SPI Mode       : DIO
I (40) boot.esp32: SPI Flash Size : 4MB
I (44) boot: Enabling RNG early entropy source...
I (49) boot: Partition Table:
I (51) boot: ## Label            Usage          Type ST Offset   Length
I (57) boot:  0 nvs              WiFi data        01 02 00009000 00006000
I (64) boot:  1 factory          factory app      00 00 00010000 003ef000
I (71) boot: End of partition table
I (74) esp_image: segment 0: paddr=00010020 vaddr=3f400020 size=229e4h (141796) map
I (130) esp_image: segment 1: paddr=00032a0c vaddr=3ff80000 si
[23:14:54 101 Rx] ze=00020h (    32) load
I (130) esp_image: segment 2: paddr=00032a34 vaddr=3ffb0000 size=03fa8h ( 16296) load
I (140) esp_image: segment 3: paddr=000369e4 vaddr=40080000 size=09634h ( 38452) load
I (156) esp_image: segment 4: paddr=00040020 vaddr=400d0020 size=ac3c8h (705480) map

[23:14:55 258 Rx] I (397) esp_image: segment 5: paddr=000ec3f0 vaddr=40089634 size=0f2a0h ( 62112) load
I (434) boot: Loaded app from partition at offset 0x10000
I (434) boot: Disabling RNG early entropy source...
I (444) cpu_start: Multicore app
I (453) cpu_start: Pro cpu start user code
I (453) cpu_start: cpu freq: 160000000 Hz
I (453) app_init: Application information:
I (453) app_init: Project name:     MonitorTemAndPower
I (458) app_init: App version:      402f6f7-dirty
I (462) app_init: Compile time:     Jun 22 2026 20:34:07
I (467) app_init: ELF file SHA256:  bca810ac8...
I (471) app_init: ESP-IDF:          5.5.0
I (475) efuse_init: Min chip rev:     v0.0
I (479) efuse_init: Max chip rev:     v3.99 
I (483) efuse_init: Chip rev:         v3.1
I (487) heap_init: Initializing. RAM available for dynamic allocation:
I (493) heap_init: At 3FF
[23:14:55 103 Rx] AE6E0 len 00001920 (6 KiB): DRAM
I (498) heap_init: At 3FFB8D50 len 000272B0 (156 KiB): DRAM
I (503) heap_init: At 3FFE0440 len 00003AE0 (14 KiB): D/IRAM
I (509) heap_init: At 3FFE4350 len 0001BCB0 (111 KiB): D/IRAM
I (514) heap_init: At 400988D4 len 0000772C (29 KiB): IRAM
I (521) spi_flash: detected chip: generic
I (523) spi_flash: flash io: dio
I (550) [info][FlashManager]: [components/framework/src/HAL/HAL_ESP32/flashmanager.cpp:39:init] NVS namespace 'storage' opened
I (552) main_task: Started on CPU0
I (562) main_task: Calling app_main()
I (562) [info]MyMain: [src/MyMain.cpp:146:startAllTask] ************Start init system and run task****************
I (562) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:143:readConfigFromFlash] Read system config success
I (572) [info]MyMain: [src/common/common.cpp:94:initSystem] Loaded custom config from Flash NVS successfully!
I (582) [info]MyMain: [src/common/common.cpp:100:initSystem] UserSystemID: sys000001  
I (592) [info]MyMain: [src/common/common.cpp
[23:14:55 103 Rx] :101:initSystem] Ssid: Tiáº¿n BG Ä‘áº¹p zai  
I (602) [info]MyMain: [src/common/common.cpp:102:initSystem] Pass: 23456789  
I (602) [info]MyMain: [src/common/common.cpp:106:initSystem] Device ID: 163091810856900
I (612) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (622) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:88:registerSemaphoreToQueueset] [WifiManagerTask]Create semaphore 100Hz success: 51
I (642) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (652) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:88:registerSemaphoreToQueueset] [RelayManagerTask]Create semaphore 100Hz success: 52
I (662) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:102:registerQueueToQueueset] [RelayManagerTask]Create Queue: 3 success
I (682) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (692) [info]TaskAbstract: [comp
[23:14:55 106 Rx] onents\ais_commonlib\src\architectureabs\taskabstract.cpp:88:registerSemaphoreToQueueset] [PowerManagerTask]Create semaphore 100Hz success: 53
I (712) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (722) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:88:registerSemaphoreToQueueset] [AdcReaderTask]Create semaphore 100Hz success: 54
I (732) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (752) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:88:registerSemaphoreToQueueset] [EspNowReceiverTask]Create semaphore 100Hz success: 55
I (762) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (772) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:88:registerSemaphoreToQueueset] [ConfigSystemTask]Create semaphore 100Hz success: 56
I (792) [info]TaskManager: [components\ais_commonlib\src\architectureabs\taskmanager.cpp:36:registerProcessor] registerProcessor success
I (802) [info]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:88:registerSemaphoreToQueueset] [MqttManagerTask]Create semaphore 100Hz success: 57
I (822) [info]TaskAbstra
[23:14:55 103 Rx] ct: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:102:registerQueueToQueueset] [MqttManagerTask]Create Queue: 4 success
I (832) [info]MyMain: [src/MyMain.cpp:84:StartWifiMamnagerTask] Start Task wifi
I (842) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process WifiManagerTask
I (852) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:91:onInitProcess] Init task
I (862) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:96:onInitProcess] Init mode MODE_STA
I (872) [info]MyMain: [src/MyMain.cpp:111:StartRelayManagerTask] Start Task relay
I (872) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process RelayManagerTask
I (882) wifi:wifi driver task: 3ffc537c, prio:23, stack:6656, core=0
I (892) [info]RelayManagerTask: [src/task/relaymanagertask.cpp:53:onInitProcess] Init task
I (912) [info]MyMain: [src/MyMain.cpp:120:StartPowerManagerTask] Start Task Power Manager
I (912) wifi:wifi firmware version: f3dbad7
I (912) wifi:wifi certification version: v7.0
I (912) [info]StoreFlashManager: [src/common/storeflashmanager.cp
[23:14:55 102 Rx] p:40:readRelayInforFromFlash] Read config relay control infor: 0 success
I (922) wifi:config NVS flash: enabled
I (922) [info]MyMain: [src/MyMain.cpp:93:StartConfigSystemTask] Start Task Config System
I (932) wifi:config nano formatting: disabled
I (932) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:40:readRelayInforFromFlash] Read config relay control infor: 1 success
I (952) wifi:Init data frame dynamic rx buffer num: 32
I (942) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process ConfigSystemTask
I (962) wifi:Init static rx mgmt buffer num: 5
I (962) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:40:readRelayInforFromFlash] Read config relay control infor: 2 success
I (982) wifi:Init management short buffer num: 32
I (972) [info]ConfigSystemTask: [src/task/configsystemtask.cpp:25:onInitProcess] Initializing ConfigSystemTask on UDP port 8080
I (1002) wifi:Init dynamic tx buffer num: 32
I (992) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:40:readRelayInforFromFlash] Read config relay control infor: 3 success
I (1012) wifi:Init static rx buffer size: 1600
I (922) [info]MyMain: [src/MyMain.cpp:102:StartMqtt
[23:14:55 104 Rx] ManagerTask] Start Task MQTT Manager
I (1032) wifi:Init static rx buffer num: 10
I (1022) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:40:readRelayInforFromFlash] Read config relay control infor: 4 success
I (1042) wifi:Init dynamic rx buffer num: 32
I (1032) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process MqttManagerTask
I (1062) wifi_init: rx ba win: 6
I (1072) wifi_init: accept mbox: 6
I (1012) [info]ConfigSystemTask: [src/task/configsystemtask.cpp:50:onInitProcess] Socket created and bound successfully.
I (1072) wifi_init: tcpip mbox: 32
I (1052) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:40:readRelayInforFromFlash] Read config relay control infor: 5 success
I (1092) wifi_init: udp mbox: 6
I (1102) wifi_init: tcp mbox: 6
I (1102) [info]RelayManagerTask: [src/task/relaymanagertask.cpp:120:emergencyTask] EStopTask listening for E-Stop events...
I (1112) wifi_init: tcp tx win: 5760
I (922) [info]MyMain: [src/MyMain.cpp:129:StartAdcReaderTask] Start Task ADC Reader
I (1122) wifi_init: tcp rx win: 5760
I (1132) wifi_init: tcp mss: 1440
I (922) [in
[23:14:55 101 Rx] fo]MyMain: [src/MyMain.cpp:138:StartEspNowReceiverTask] Start Task ESP-NOW Receiver
I (1132) wifi_init: WiFi IRAM OP enabled
I (1142) wifi_init: WiFi RX IRAM OP enabled
I (1102) [info]RelayManagerTask: [src/task/relaymanagertask.cpp:88:onInitProcess] EStopTask spawned OK
W (1152) wifi:I (1132) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process AdcReaderTask
Password length matches WPA2 standards, authmode threshold changes from OPEN to WPA2
I (1142) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process EspNowReceiverTask
I (1182) phy_init: phy_version 4860,6b7a6e5,Feb  6 2025,14:47:07
I (912) [debug]TaskAbstract: [components\ais_commonlib\src\architectureabs\taskabstract.cpp:56:onStartProcess] Start process PowerManagerTask
I (1212) [info]PowerManagerTask: [src/task/powermanagertask.cpp:41:onInitProcess] Init task
I (1172) [info]AdcReaderTask: [src/task/adcreadertask.cpp:27:onInitProcess] Init ADC hardware...
I (1232) [info]AdcReaderTask: [src/task/adcreadertask.cpp:77:initAdc] ADC1 init OK: GPIO36(CH0), GPIO39(CH3), GPIO35(CH7)
I (1242) [info]AdcReaderTask: [src/task/adcreadertask.
[23:14:55 103 Rx] cpp:96:initCalibration] ADC Calibration OK (eFuse line fitting)
I (1252) [info]AdcReaderTask: [src/task/adcreadertask.cpp:40:onInitProcess] adcBurstTask spawned OK
I (1072) [info]MqttManagerTask: [src/task/mqttmanagertask.cpp:24:onInitProcess] Initializing MqttManagerTask...
I (1192) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:23:onInitProcess] Initializing ESP-NOW receiver...
I (1272) wifi:mode : sta (94:54:c5:73:af:c4) + softAP (94:54:c5:73:af:c5)
I (1282) wifi:enable tsf
I (1292) wifi:Total power save buffer number: 16
I (1292) wifi:Init max length of beacon: 752/752
I (1292) wifi:Init max length of beacon: 752/752
I (1302) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:125:initWifi] Started Wi-Fi in mode 2
I (1302) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:230:eventHandlerWifi] STA started, connectingâ€¦
I (1302) ESPNOW: espnow [version: 2.0] init
I (1322) esp_netif_lwip: DHCP server started on interface WIFI_AP_DEF with IP: 192.168.4.1
I (1322) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:48:onInitProcess] ESP-NOW receiver ready. Listening for deviceId=101
I (922) [info]MyMain: [src/MyMain.cpp:223:startA
[23:14:56 105 Rx] llTask] Start All Task Success

[23:14:57 --- Rx] I (2452) main_task: Returned from app_main()

[23:14:57 818 Rx] I (3272) [info]AdcReaderTask: [src/task/adcreadertask.cpp:238:adcBurstTask] ADC burst sampling started

[23:15:01 --- Rx] I (6352) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (6362) TASK_MONITOR: Task Name            State      Priorty   Stack High Water
I (6362) TASK_MONITOR: AdcBurst             Ready      2          1896           
I (6372) TASK_MONITOR: TaskMonitor          Running    1          2768           
I (6372) TASK_MONITOR: IDLE0                Ready      0          924            
I (6382) TASK_MONITOR: IDLE1                Ready      0          1028           
I (6392) TASK_MONITOR: tiT                  Blocked    18         1620           
I (6392) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (6402) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (6412) TASK_MONITOR: ipc1                 Suspended  24         500            
I (6422) TASK_MONITOR: sys_evt              Blocked    20         428            
I (6422) TASK_MONITOR: wifi                 Blocked    23         4312           
I (6432) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (6442) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (6442) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (6452) TASK_MONITOR: ConfigSystemTas      Blocked   
[23:15:01 105 Rx]  3          5852           
I (6462) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (6472) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (6472) TASK_MONITOR: MqttManagerTask      Blocked    3          5480           
I (6482) TASK_MONITOR: esp_timer            Suspended  22         3324           
I (6492) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (6502) TASK_MONITOR: ipc0                 Suspended  24         508            
I (6502) TASK_MONITOR: Free Heap: 151836 bytes, Min Free Heap: 147328 bytes
I (6512) TASK_MONITOR: =============================================================

[23:15:03 --- Rx] I (8972) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=113 GPIO39=1825 GPIO35=0
I (9072) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=191mV DC2=1638mV | RMS=28.1mV/25.3mV |
[23:15:03 103 Rx]  A1=0.43A A2=0.47A [N=603]

[23:15:04 442 Rx] I (9522) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (9522) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (9532) TASK_MONITOR: TaskMonitor          Running    1          2160           
I (9532) TASK_MONITOR: IDLE0                Ready      0          924            
I (9542) TASK_MONITOR: IDLE1                Ready      0          1028           
I (9552) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (9562) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (9562) TASK_MONITOR: tiT                  Blocked    18         1620           
I (9572) TASK_MONITOR: sys_evt              Blocked    2         428            
I (9582) TASK_MONITOR: Tmr Svc              Blocked   1          1548           
I (9592) TASK_MONITOR: wifi                 Blocked    23         4312           
I (9592) TASK_MONITOR: AdcReaderTask       Blocked    3          1648           
I (9602) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (9612) TASK_MONITOR: EspowReceiverT      Blocked    3          1744           
I 9612) TASK_ONITOR: MqttManagerTask      Blocked    3          5480           
[23:15:04 103 Rx] 
I (9622) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (9632) TASK_MONITOR: CnfigSystemTas      Blocked    3          5852          
I (9632) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (942) TASK_MONITOR: ipc0               Suspended  24         508            
I (9652) TASK_MONITOR: esp_timer            Suspended 22         3324          
I (9662) TASK_MONITOR: EStopTak           Blocked    24         1880           
I (9662) TASK_MONITOR: ipc1                 Suspended  24         500            
I (9672) TASK_MONITOR: Free Heap: 151616 bytes, Min Free Heap: 147328 bytes
I (9682) TASK_MONITOR: =============================================================

[23:15:07 --- Rx] I (12352) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:37:onTimer100HzProcess] Diagnostics: Free Heap Size: 151616 bytes
I (12352) [debug]MonitorSystemTask: [src/task/wifimanagetask.cpp:46:onTimer100HzProcess] Reconnect to wifi: ssid Tiáº¿n BG Ä‘áº¹p zai, pass: 23456789
I (12362) [info]WiiManagerESP32: [cmponents/framework/src/HAL/HAL_ESP32/wifimanager.cpp:203:reconnectWifi] Reconnecting to Tiáº¿n BG Ä‘áº¹p zai
I (12382) wifi:ap channel adjust o:1,1 n:3,1
I (12392) wifi:new:<3,1>, old:<1,1>, ap:<3,1>, sta:<3,1>, prof:1, snd_ch_cfg:0x0
I (12392) wifi:state: init -> auth (0xb0)
I (12402) wifi:state: auth -> assoc (0x0)
I (12412) wifi:state: assoc -> run (0x10)

[23:15:07 171 Rx] I (12522) wifi:connected with Tiáº¿n BG Ä‘áº¹p zai, aid = 6, channel 3, 40U, bssid = 1c:3b:f3:6a:77:74
I (12522) wifi:security: WPA2-PSK, phy: bgn, rssi: -46
I (12532) wifi:pm start, type: 1

I (12532) wifi:dp: 1, bi: 102400, li: 3, scale listen interval from 307200 us to 307200 us
I (12542) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:241:eventHandlerWifi] Received event WIFI_EVENT_STA_CONNECTED
I (12562) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:2, winSize:64
I (12592) wifi:AP's beacon interval = 102400 us, DTIM period = 1

[23:15:07 151 Rx] I (12682) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (12682) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (12692) TASK_MONITOR: TaskMonitor          Running    1          2160           
I (12702) TASK_MONITOR: IDLE0                Ready      0          924            
I (12702) TASK_MONITOR: IDLE1                Ready      0          1028           
I (12712) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (12722) TASK_MONITOR: tiT                  Blocked    18         1620           
I (12722) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (12732) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (12742) TASK_MONITOR: ipc1                 Suspended  24         500            
I (12752) TASK_MONITOR: wifi                 Blocked    23         3608           
I (12752) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (12762) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (12772) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
[23:15:07 102 Rx] 
I (12782) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (12782) TASK_MONITOR: MqttManagerTask      Blocked    3          5480           
I (12792) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (12802) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (12802) TASK_MONITOR: sys_evt              Blocked    20         396            
I (12812) TASK_MONITOR: esp_timer            Suspended  22         3324           
I (12822) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (12832) TASK_MONITOR: ipc0                 Suspended  24         508            
I (12832) TASK_MONITOR: Free Heap: 150484 bytes, Min Free Heap: 147328 bytes
I (12842) TASK_MONITOR: =============================================================

[23:15:08 712 Rx] I (13502) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.22 pH=8.13 | Temp=29.81Â°C | Volt=0.00V | PhaseLostMask=7

[23:15:08 562 Rx] I (14072) esp_netif_handlers: sta ip: 192.168.0.104, mask: 255.255.255.0, gw: 192.168.0.1
I (14072) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:267:eventHandlerWifi] Received event IP_EVENT_STA_GOT_IP: 192.168.0.104
I (14082) [info]WiFiManagerESP32: [components/framework/src/HAL/HAL_ESP32/wifimanager.cpp:268:eventHandlerWifi] Has ip => Set bit WIFI_CONNECTED_BIT
I (14162) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:58:onTimer100HzProcess] Wifi sta connected
I (14162) wifi:Set ps type: 0, coexist: 0

I (14162) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:63:onTimer100HzProcess] WiFi Powe
[23:15:08 100 Rx] r Save disabled
I (14172) [info]MqttManagerTask: [src/task/mqttmanagertask.cpp:70:onTimer100HzProcess] Wifi connected, starting MQTT client...
I (14172) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:72:onTimer100HzProcess] SNTP initialized with backup servers
I (14182) [debug]MqttClientEsp32: [components/framework/src/HAL/HAL_ESP32/mqttclientesp32.cpp:39:start] Client ID: esp32_9454C573AFC4
I (14202) [info]MqttClientEsp32: [components/framework/src/HAL/HAL_ESP32/mqttclientesp32.cpp:76:start] MQTT client started successfully: uri: mqtts://0a4a8b1e715a4ce5a3bd5e78451cdba8.s1.eu.hivemq.cloud, port: 8883, user: esp32_control, pass: Pass123456, client_id: esp32_9454C573AFC4

[23:15:09 784 Rx] I (14972) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=97 GPIO39=1825 GPIO35=0
I (15072) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:21
[23:15:09 101 Rx] 5:computeAndSendRms] DC1=197mV DC2=1636mV | RMS=21.7mV/25.0mV | A1=0.38A A2=0.49A [N=556]

[23:15:09 232 Rx] I (15312) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:30:onTimer100HzProcess] SNTP synchronized successfully

[23:15:10 529 Rx] I (15852) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (15852) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (15852) TASK_MONITOR: TaskMonitor          Running    1          2160           
I (15862) TASK_MONITOR: IDLE0                Ready      0          924            
I (1872) TASK_MONITOR: IDLE1                Ready      0          916           
I (15872) TASK_MONITOR: tiT                 Blocked   18         1620           
I (15882) TASK_MONITOR: mqtt_task            Blocked    5          3644           
I (15892) TASK_MONITOR: taskfreezer          Bloked    1          3584           
I (15902) TASK_MONITOR: AdcBurst             Blocked   2          167         
I (15902) TASK_MONITOR: ipc1                 Suspeded  24         500            
I (15912) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (15922) TASK_ONITOR: sys_evt              Bocked    20         36            
I (1532) TASK_MONITOR: wifi                Blocked    23         3608           
I (15932 TASK_MNITOR: AdcReaderTask        Blocked    3          1648           
I (142) TASK_MONITOR: esp_timer            Suspede  22         3324           
I (15952) [info]MqttClientEsp3: [cmponents/framework/src/HAL/HAL_ESP32/mqttclientep32.cpp:191:andleEvent] Connected
I (1
[23:15:10 103 Rx] 5962) [info]MqttManagerTask: [src/task/mqttmanagertask.cpp:155:onSubscribeTopic] MQTT Conncted! Subscribing to topic: devices/163091810856900/commands
I (15972) [info]MqttClientEsp32: [components/framework/src/HAL/HAL_ESP32/mqttclientesp32.cpp:143:subscribe] [subscribe] Topic: devices/163091810856900/commands success
I (15992) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (15992) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (16002) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (16012) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (16012) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (16012) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (16042) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (16042) TASK_MONITOR: ipc0                 Suspended  24         508            
I (16052) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (16062) TASK_MO
[23:15:10 101 Rx] NITOR: Free Heap: 98596 bytes, Min Free Heap: 92352 bytes
I (16062) TASK_MONITOR: =============================================================

[23:15:11 915 Rx] I (16992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (16992) wifi:<ba-del>idx:0, tid:0
I (17012) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:11 225 Rx] I (17222) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:27, winSize:64

[23:15:12 760 Rx] I (17992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (17992) wifi:<ba-del>idx:0, tid:0
I (18012) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:12 229 Rx] I (18232) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:28, winSize:64

[23:15:13 287 Rx] I (18522) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.24 pH=8.15 | Temp=29.81Â°C | Volt=0.00V | PhaseLostMask=7

[23:15:13 485 Rx] I (19012) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (19072) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (19072) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (19072) TASK_MONITOR: TaskMonitor          Running    1          2160           
I (19082) TASK_MONITOR: IDLE0                Ready      0          924            
I (19092) TASK_MONITOR: IDLE1                Ready      0          916            
I (19102) TASK_MONITOR: tiT                  Blocked    18         1620           
I (19102) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (19112) TASK_MONITOR: task
[23:15:13 102 Rx] freezer          Blocked    1          3584           
I (19122) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (19122) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (19132) TASK_MONITOR: sys_evt              Blocked    20         396            
I (19142) TASK_MONITOR: ipc0                 Suspended  24         508            
I (19152) TASK_MONITOR: wifi                 Blocked    23         3608           
I (19152) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (19162) TASK_MONITOR: esp_timer            Suspended 22         3276           
I (19172) TASK_MONITOR: WifiManagerTask     Blocked    5          5288          
I (19182) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744          
I (19182) ASK_MONITOR: MqttManagerTask      Blocked    3          872          
I (19192) TASK_MONITOR: ConfigSystemTas      Bloked    3          5852           
I 19202) TASK_MONITOR: RelayManagerTas      Blocked    3          304           
I (19202) TASK_MONITOR: PowerManagerTas     Blocked    3          1752           
I (19212) TASK_MONIOR: EStopTask            Blocked    24         1880           
I (19222) TASK_MONITO
[23:15:13 103 Rx] R: ipc1                 Suspended  24         500            
I (19232) TASK_MONITOR: Free Heap: 101832 bytes, Min Free Heap: 92352 bytes
I (19232) TASK_MONITOR: ============================================================

[23:15:14 757 Rx] I (19992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (19992) wifi:<ba-del>idx:0, tid:0
I (20012) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:14 227 Rx] I (20232) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:31, winSize:64

[23:15:15 734 Rx] I (20972) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=94 GPIO39=1821 GPIO35=0
I (20992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (20992) wifi:<ba-del>idx:0, tid:0
I (21012) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (21072) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=187mV DC2=1626mV | RMS=14.8mV/16.0mV 
[23:15:15 103 Rx] | A1=0.36A A2=0.42A [N=502]

[23:15:15 147 Rx] I (21232) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:32, winSize:64

[23:15:16 758 Rx] I (21992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (21992) wifi:<ba-del>idx:0, tid:0
I (22012) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:16 227 Rx] I (22232) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:33, winSize:64
I (22242) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (22242) TASK_MONITOR: Task Name            State      Priority   tack High Water
I (22242) TASK_MONITOR: AdcBurst             Ready      2          1672           
I (22252) TSK_MONIOR: TaskMonitor          Runing    1          2160           
I (22262) TASK_MONITOR: IDLE1                Ready      0         916            
I (22262) TASK_MONITOR: IDLE0                Ready      0          924            
I (22272) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (22282) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (22292) TASK_MONITOR: tiT                  Blocked    18         1620           
I (22292) TASK_MONITOR: sys_evt              Blocked    20         396            
I (22302) TASK_MONITOR: ipc0                 Suspended  24         508            
I (22312) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (22322) TASK_MONITOR: wifi                 Blo
[23:15:17 100 Rx] cked    23         3608           
I (22322) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (22332) TASK_MONITOR: esp_timer            Suspended  22         3276           
I (22342) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (22352) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (22352) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (22362) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (22372) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (22372) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (22382) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:37:onTimer100HzProcess] Diagnostics: Free Heap Size: 101256 bytes
I (22392) TASK_MONITOR: ipc1                 Suspended  24         500            
I (22402) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (22412) TASK_MONITOR: Free Heap: 102028 bytes, Min Free Heap: 92352 bytes
I (22412) TASK_MONITOR: =============================================================

[23:15:17 651 Rx] I (22992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (22992) wifi:<ba-del>idx:0, tid:0
I (23022) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:17 240 Rx] I (23242) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:34, winSize:64

[23:15:18 740 Rx] I (23992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (23992) wifi:<ba-del>idx:0, tid:0
I (24022) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:18 230 Rx] I (24232) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:35, winSize:64

[23:15:19 744 Rx] I (24992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (24992) wifi:<ba-del>idx:0, tid:0
I (25022) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:19 233 Rx] I (25242) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:36, winSize:64

[23:15:20 171 Rx] I (25422) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (25422) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (25422) TASK_MONITOR: TaskMonitor          Running    1          2160           
I (25432) TASK_MONITOR: IDLE0                Ready      0          924            
I (25442) TASK_MONITOR: IDLE1                Ready      0          916            
I (25452) TASK_MONITOR: tiT                  Blocked    18         1620           
I (25452) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (25462) TASK_MONITOR: taskfreezer          Blocked    1          3584          
I (25472) TASK_MONITOR: AdcBurst            Blocked    2          1672          
I (25472) TASK_MONITOR: ipc0                 Suspended  24         508            
I (25482 TASK_MONITOR: EStopTask            Blocked    24         1880           
I (25492) TASK_MONITOR: ipc1                 Suspended  24         00            
I (2550) TASK_MONITOR: wifi                 Blocked    23        3608           
I (25502) TSK_MONITOR: AdcReaderTask        Blocked    3         1648           
I (25512) TASK_MONITOR: esp_timer           Suspended  22         3276           
I (25522) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (25522) TASK_MONITOR: EspN
[23:15:20 104 Rx] oweceiverT      Blocked    3          1744           
I (25532) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (25542) TAS_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (25552) TASK_MONITOR: RelayManagerTas      Blocked    3         5304           
I (25552 TASK_MONITOR: PowerManagerTa      Blocked    3         1752           
I (2562) TASK_MOITOR: Tmr vc              Blocked    1          1548           
I (25572) TASK_MONITOR: sys_evt              Blocked    20         396            
I (25572) TASK_MONITOR: Free Heap: 102028 bytes, Min Free Heap: 92352 bytes
I (25582) TASK_MONITOR: =============================================================

[23:15:20 451 Rx] I (25992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (25992) wifi:<ba-del>idx:0, tid:0
I (26022) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:20 238 Rx] I (26242) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:37, winSize:64

[23:15:21 723 Rx] I (26972) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=95 GPIO39=1828 GPIO35=0
I (26992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (26992) wifi:<ba-del>idx:0, tid:0
I (27022) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (27072) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:21
[23:15:21 105 Rx] 5:computeAndSendRms] DC1=188mV DC2=1642mV | RMS=17.1mV/19.0mV | A1=0.30A A2=0.43A [N=523]

[23:15:21 161 Rx] I (27232) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:38, winSize:64

[23:15:22 783 Rx] I (28022) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:23 468 Rx] I (28492) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.25 pH=8.22 | Temp=29.81Â°C | Volt=0.00V | PhaseLostMask=7
I (28592) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (28592) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (28592) TASK_MONITOR: TaskMonitor          Running    1          2160     
[23:15:23 102 Rx]       
I (28602) TASK_MONITOR: IDLE0                Ready      0          924            
I (28612) TASK_MONITOR: IDLE1                Ready      0          916            
I (28622) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (28622) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (28632) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (28642) TASK_MONITOR: tiT                  Blocked    18         1620           
I (28642) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (28652) TASK_MONITOR: ipc1                 Suspended  24         500            
I (28662) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (28672) TASK_MONITOR: wifi                 Blocked    23         3608           
I (28672) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (28682) TASK_MONITOR: esp_timer            Suspended  22         3276           
I (28692) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (28702) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (28702) TASK_MONITOR: MqttManagerTask      Blocked    
[23:15:23 104 Rx] 3          4872           
I (28712) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (28722) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (28722) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (28732) TASK_MONITOR: sys_evt              Blocked    20         396            
I (28742) TASK_MONITOR: ipc0                 Suspended  24         508            
I (28752) TASK_MONITOR: Free Heap: 102028 bytes, Min Free Heap: 92352 bytes
I (28752) TASK_MONITOR: =============================================================

[23:15:23 302 Rx] I (29022) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:24 965 Rx] I (29992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (29992) wifi:<ba-del>idx:0, tid:0
I (30022) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:24 238 Rx] I (30232) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:43, winSize:64

[23:15:25 751 Rx] I (30992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (30992) wifi:<ba-del>idx:0, tid:0
I (31022) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:25 240 Rx] I (31232) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:44, winSize:64

[23:15:26 518 Rx] I (31762) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (31762) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (31762) TASK_MONITOR: TasMonitor         Running    1          2160           
I (3172) TASK_MONITOR: IDLE0                Ready      0          924            
I (31782) TASK_MONITOR: IDLE1               Ready      0          916            
I (31782) TASK_MONITO: tiT                  Blocked    18         1620          
I (31792) TASK_MONITOR: mqtt_task           Bloced    5          3452           
I (31802) TASK_MONITO: taskfreezer          Blocked    1          3584           
I (31812) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (31812) ASK_MONITOR: ipc1                 Suspended  24         500            
I (31822) TASK_MONITR: mr Svc              Blocked    1          1548           
I (31832) TASK_MONITOR: sys_evt              Blocked    20         396            
I (31842) TASK_MONITOR: wifi                 Blocked    23         3608           
I (31842) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (31852) TASK_MONITOR: esp_timer            Suspened  22        3276   
[23:15:26 105 Rx]         
I (31862) TASK_MONITOR: WifiManagerTask     Blocked    5          5288           
I (31862) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (31872) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (31882) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (31892) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (31892) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (31902) TASK_MONITOR: ipc0                 Suspended  24         508            
I (31912) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (31922) TASK_MONITOR: Free Heap: 102028 bytes, Min Free Heap: 92352 bytes
I (31922) TASK_MONITOR: =============================================================

[23:15:26 121 Rx] I (31992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (31992) wifi:<ba-del>idx:0, tid:0
I (32022) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:26 243 Rx] I (32232) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:46, winSize:64

[23:15:27 106 Rx] I (32352) TIMER_DBG: 100Hz timer alive | tick=3180 | heap_free=102028 min=92352
I (32382) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:37:onTimer100HzProcess] Diagnostics: Free Heap Size: 102028 bytes

[23:15:27 608 Rx] I (32972) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=87 GPIO39=1814 GPIO35=0
I (32992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (32992) wifi:<ba-del>idx:0, tid:0
I (33022) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (33072) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=187mV DC2=1622mV | RMS=13.2mV/26.5mV 
[23:15:27 100 Rx] | A1=0.35A A2=0.46A [N=491]

[23:15:27 171 Rx] I (33252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:47, winSize:64

[23:15:28 229 Rx] I (33492) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.01 Oxy=5.28 pH=8.22 | Temp=29.81Â°C | Volt=0.00V | PhaseLostMask=7

[23:15:28 512 Rx] I (34022) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:29 895 Rx] I (34932) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (34932) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (34932) TASK_MONITOR: TaskMonitor          Running    1          2160           
I (34942) TASK_MONITOR: IDLE0                Ready      0          924            
I (34952) TASK_MONITOR: IDLE1                Ready      0          916            
I (34962) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (34962) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (34972) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (34982) TASK_MONITOR: tiT                  Blocked    18         1620           
I (34982) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (34992) TASK_MONITOR: sys_evt              Blocked    20         396            
I (35002) TASK_MONITOR: ipc0                 Suspended  24         508            
I (35012) wifi:I (35012) TASK_MONITOR: wifi                 Blocked    23         3608           
[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)I 
[23:15:29 101 Rx] (35012) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           

I (35032) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (35032) wifi:<ba-del>idx:0, tid:0I (35042) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           

I (35032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (35052) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744          
I (35072) TAK_MONITOR: MqttManagerTask      Blocked    3          4872          
I (35072) TASK_MONITO: CnfigSystemTas      Blocked    3          5852           
I (35082) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (35092) TASK_MONITOR: PowrManageras      Blocked    3         1752           
I (35102) TASK_MONITOR: EStopTask            Blocked    24         1880          
I (35102) TASK_MONITOR: ipc1                 Suspended  24         500            
I (35112) TASK_MONITOR:Free Heap: 100016 byts, Min Free Heap: 92352 bytes
I (35122 TASK_MONITOR: =============================================================

[23:15:29 239 Rx] I (35272) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:50, winSize:64

[23:15:30 707 Rx] I (35992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (35992) wifi:<ba-del>idx:0, tid:0
I (36032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:30 242 Rx] I (36242) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:51, winSize:64

[23:15:31 742 Rx] I (36992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (36992) wifi:<ba-del>idx:0, tid:0
I (37032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:31 250 Rx] I (37242) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:52, winSize:64

[23:15:32 737 Rx] I (37992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (37992) wifi:<ba-del>idx:0, tid:0
I (38032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:32 121 Rx] I (38122) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (38122) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (38122) ASK_MONITOR:AdcBurt             Ready      2         167          
I (38132)TASK_MONITOR: TaskMonitor         Running    1          2160          
I (38142) TASK_MONITOR: IDLE1               Ready      0         916            
I (38142) TASK_MONTOR:IDLE0               Redy      0          924            
I (3852) TAS_MONITOR: mqtt_task            Blocked    5          3452           
I (38162) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (38172) TASK_MONITOR: tiT                  Blocked    18         1620           
I (38172) TASK_MONITOR: sys_evt              Blocked    20         396            
I (38182) TASK_MONITOR: ipc0                 Suspended  24         508            
I (38192) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (38192) TASK_MONITOR: wifi                 Blocked    23         3608           
I (38202) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (38212) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (38222) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (38222) TASK_MONITOR: EspNowRec
[23:15:32 105 Rx] eiverT      Blocked    3          1744           
I (38232) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (38242) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (38252) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (38252) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (38262) TASK_MONITOR: ipc1                 Suspended  24         500            
I (38272) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:52, winSize:64
I (38272) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (38282) TASK_MONITOR: Free Heap: 101952 bytes, Min Free Heap: 92352 bytes
I (38292) TASK_MONITOR: =============================================================

[23:15:33 256 Rx] I (38502) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.01 Oxy=5.33 pH=8.24 | Temp=29.81Â°C | Volt=0.00V | PhaseLostMask=7

[23:15:33 464 Rx] I (38972) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=79 GPIO39=1827 GPIO35=0
I (39032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (39072) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=189mV DC2=1642mV | RMS=11.9mV/20.1mV | A1=0.32A A2=0.46A [N=512]

[23:15:34 --- Rx] I (39992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (39992) wifi:<ba-del>idx:0, tid:0
I (40032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:34 253 Rx] I (40242) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:56, winSize:64

[23:15:35 739 Rx] I (40992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (40992) wifi:<ba-del>idx:0, tid:0
I (41032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:35 248 Rx] I (41252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:57, winSize:64
I (41302) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (41302) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (41302) TASK_MONITOR: TaskMonitor          Running    1          2160           
I (41312) TASK_MONITOR: IDLE0                Ready      0          924            
I (41322) TASK_MONITOR: IDLE1                Ready      0          916            
I (41332) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (41332) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (41342) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (41352) TASK_MONITOR: tiT                  Blocked    18         1
[23:15:36 103 Rx] 620           
I (41352) TASK_MONITOR: ipc0                 Suspended  24         508            
I (41362) TASK_MONITOR: EStopTask            Blocked    24         1880          
I (41372) TAK_MONITOR: ipc1                 Suspended  24        500            
I (4382) TASK_MONITOR: wifi               Blocked    23         3608          
I (41382 TASK_MONITOR: AdcReaderTask       Blocked    3          1648           
I (41392) TASK_MONITOR: esp_timer            Suspended  22         2156          
I (41402) TASK_MONITOR: WifiManagerTask      Blocked    5          5288         
I (1402) TASK_MONTOR: EspNowReceiverT      Bloked    3          1744          
I (4412) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (41422) TASK_MONITOR: ConfiSystemTas      Blocked    3          5852           
I (41432) TASK_MONITOR: RelayManagerTas      Bloked    3          5304           
I (41432) TASK_ONITOR: PowerManagerTas      Blocked    3          1752           
I (41442) TASK_MONITOR: Tmr Svc              Bocked    1          1548           
I (41452) TASK_MONIOR: sys_evt              Blocked    20         396            
I (41452) TASK_MONITOR: Free Heap: 101956 bytes, Min Free Heap: 92352 b
[23:15:36 103 Rx] ytes
I (41462) TASK_MONITOR: =============================================================

[23:15:36 516 Rx] I (41992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (41992) wifi:<ba-del>idx:0, tid:0
I (42032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:36 257 Rx] I (42252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:58, winSize:64

[23:15:37 118 Rx] I (42382) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:37:onTimer100HzProcess] Diagnostics: Free Heap Size: 101956 bytes

[23:15:37 609 Rx] I (42992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (42992) wifi:<ba-del>idx:0, tid:0
I (43032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:37 258 Rx] I (43252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:59, winSize:64

[23:15:38 244 Rx] I (43502) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.06 Oxy=5.42 pH=8.25 | Temp=29.81Â°C | Volt=0.00V | PhaseLostMask=7

[23:15:38 514 Rx] I (44032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:39 424 Rx] I (44472) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (44472) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (44472) TASK_MONITOR: AdcBurst             Ready      2          1672           
I (44482) TASK_MONITOR: TaskMonitor          Running    1          2160           
I (44492) TASK_MONITOR: IDLE1                Ready      0          916            
I (44502) TASK_MONITOR: IDLE0                Ready      0          924            
I (44502) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (44512) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (44522) TASK_MONITOR: tiT                  Blocked    18         1620           
I (44522) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (44532) TASK_MONITOR: ipc1                 Suspended  24         500            
I (44542) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (44552) TASK_MONITOR: wifi                 Blocked    23         3608           
I (44552) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (44562) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (44572) TASK_MONITOR: WifiManagerTas
[23:15:39 105 Rx] k      Blocked    5          5288           
I (44582) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (44582) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (44592) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (44602) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (44602) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (44612) TASK_MONITOR: sys_evt              Blocked    20         396            
I (44622) TASK_MONITOR: ipc0                 Suspended  24         508            
I (44632) TASK_MONITOR: Free Heap: 101956 bytes, Min Free Heap: 92352 bytes
I (44632) TASK_MONITOR: =============================================================

[23:15:39 383 Rx] I (44972) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=87 GPIO39=1810 GPIO35=0
I (44992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (44992) wifi:<ba-del>idx:0, tid:0
I (45032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (45072) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:21
[23:15:39 103 Rx] 5:computeAndSendRms] DC1=189mV DC2=1635mV | RMS=13.2mV/19.9mV | A1=0.33A A2=0.44A [N=509]

[23:15:39 174 Rx] I (45252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:62, winSize:64

[23:15:40 731 Rx] I (45992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (45992) wifi:<ba-del>idx:0, tid:0
I (46032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:40 256 Rx] I (46252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:63, winSize:64

[23:15:41 730 Rx] I (46992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (46992) wifi:<ba-del>idx:0, tid:0
I (47032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:41 258 Rx] I (47262) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:64, winSize:64

[23:15:42 378 Rx] I (47642) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (47642) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (47642) TASK_MONITOR: TaskMonitor          Running    1          2160           
I (47652) TASK_MONITOR: IDLE0                Ready      0          924            
I (47662) TASK_MONITOR: IDLE1                Ready      0          916            
I (47672) TASK_MONITOR: tiT                  Blcked    18        1620           
I (47672) TASK_MONITOR: mqtt_task            Blocked    5          3452          
I (47682) TASK_MONITOR: taskfreezer          Blocked    1         3584           
I (47692) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (4769) TASK_MONITOR: ipc1                 Suspended  2        500            
I (47702) TASK_MNITOR: Tmr Svc              Blocked    1          1548           
I (47712) TASK_MONITOR: sys_evt             Blocked    20         396            
I (47722) TAK_MONITOR: wfi                Blocked    23         3608          
I (47722) TASK_MONTOR: AdcReaderTask        Blocked    3          1648          
I (4732) TASK_MONITOR: esp_timer            Suspended  22         2156     
[23:15:42 103 Rx]       
I (47742) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (47742) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (47752) TAS_MONITOR: MqttanaerTask      Blocked   3          4872          
I (47762) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852          
I (47772) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (47772) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (47782) TASK_MONITOR: ipc0                 Suspended  24         508            
I (47792) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (47792) TASK_MONITOR: Free Heap: 101956 bytes, Min Free Heap: 92352 bytes
I (47802) TASK_MONITOR: =============================================================

[23:15:42 242 Rx] I (47992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (47992) wifi:<ba-del>idx:0, tid:0
I (48032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:42 254 Rx] I (48252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:66, winSize:64

[23:15:43 251 Rx] I (48502) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.05 Oxy=5.44 pH=8.27 | Temp=29.81Â°C | Volt=0.00V | PhaseLostMask=7

[23:15:43 516 Rx] I (49032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:44 950 Rx] I (49992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (49992) wifi:<ba-del>idx:0, tid:0
I (50032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:44 260 Rx] I (50262) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:69, winSize:64

[23:15:45 550 Rx] I (50812) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (50812) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (50812) TASK_MONITOR: TaskMonitor          Running    1          2144           
I (50822) TASK_MONITOR: IDLE0                Ready      0          924            
I (50832) TASK_MONITOR: IDLE1                Ready      0          916            
I (50842) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (50842) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (50852) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (50862) TASK_MONITOR: tiT                  Blocked    18         1620           
I (50862) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (50872) TASK_MONITOR: sys_evt              Blocked    20         396            
I (50882) TASK_MONITOR: ipc0                 Suspended  24         508            
I (50892) TASK_MONITOR: wifi                 Blocked    23         3608           
I (50892) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
[23:15:45 101 Rx] 
I (50902) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (50912) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (50922) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (50922) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (50932) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (50942) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (50942) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (50952) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (50962) TASK_MONITOR: ipc1                 Suspended  24         500            
I (50972) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=100 GPIO39=1813 GPIO35=0
I (50972) TASK_MONITOR: Free Heap: 101956 bytes, Min Free eap: 92352 bytes
I (50982) TASK_MONITOR: =============================================================
I (50992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (51002) wifi:<ba-del>idx:0, tid:0

[23:15:45 117 Rx] I (51032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (51072) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=192mV DC2=1636mV | RMS=16.1mV/33.0mV | A1=0.31A A2=0.50A [N=388]

[23:15:45 236 Rx] I (51272) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:70, winSize:64

[23:15:46 708 Rx] I (51992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (51992) wifi:<ba-del>idx:0, tid:0
I (52032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:46 248 Rx] I (52252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:71, winSize:64

[23:15:47 116 Rx] I (52382) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:37:onTimer100HzProcess] Diagnostics: Free Heap Size: 101956 bytes

[23:15:47 608 Rx] I (52992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (52992) wifi:<ba-del>idx:0, tid:0
I (53032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:47 254 Rx] I (53252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:72, winSize:64

[23:15:48 249 Rx] I (53512) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.49 pH=8.28 | Temp=29.81Â°C | Volt=0.00V | PhaseLostMask=7

[23:15:48 465 Rx] I (53992) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (53992) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (53992) TASK_MONTOR: wifi                 Ready      23         3608           
I (54002) TASK_MONITOR: AdcBurst             Ready      2          1672          
I (54012) TASK_MONITOR: TaskMonitor          Running    1          144           
I (54022) TASK_MONITOR: IDLE1                Ready      0          916            
I (54022) TASK_MONITOR: IDLE0                Ready      0          924            
I (54032) TASK_MONITOR: mqtt_task            Blocked    5         3452           
I (54042) TASK_MONITOR:taskfreezer          Blocked    1          3584           
I (54032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (54042) TASK_MONITOR: tiT                  Blocked    18         1620           
I (54072) TASK_MONITOR: sys_evt              Blocked    20         396            
I (54072) TASK_MONITOR: ipc0                 Suspended  24         508            
I (5
[23:15:48 101 Rx] 4082) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (54092) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (54102) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (54102) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (54112) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (54122) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (54122) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (54132) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (54142) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (54152) TASK_MONITOR: ipc1                 Suspended  24         500            
I (54152) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (54162) TASK_MONITOR: Free Heap: 100288 bytes, Min Free Heap: 92352 bytes
I (54172) TASK_MONITOR: =============================================================

[23:15:49 894 Rx] I (54992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (54992) wifi:<ba-del>idx:0, tid:0
I (55032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:49 257 Rx] I (55252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:75, winSize:64

[23:15:50 731 Rx] I (55992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (55992) wifi:<ba-del>idx:0, tid:0
I (56032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:50 250 Rx] I (56252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:76, winSize:64

[23:15:51 708 Rx] I (56972) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=79 GPIO39=1829 GPIO35=0
I (57032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (57072) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:21
[23:15:51 101 Rx] 5:computeAndSendRms] DC1=189mV DC2=1641mV | RMS=21.8mV/18.0mV | A1=0.37A A2=0.45A [N=523]

[23:15:51 100 Rx] I (57182) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (57182) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (57182) TASK_MONITOR: TaskMonitor          Running    1          2144           
I (57192) TASK_MONITOR: IDLE0                Ready      0          924            
I (57202) TASK_MONITOR: IDLE1                Ready      0          916            
I (57212) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (57212) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (57222) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (57232) TASK_MONITOR: tiT                  Blocked    18         1620           
I (57232) TASK_MONITOR: ipc0                 Suspended  24         508            
I (57242) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (57252) TASK_MONITOR: ipc1                 Suspended  24         500            
I (57262) TASK_MONITOR: wifi                 Blocked    23         3608           
I (57262) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (57272 TASK_MONITOR: esp_timer            Suspended  22   
[23:15:51 102 Rx]       2156           
I (57282) TASK_MONITOR: WifiManagerTask      Blocked    5         5288           
I (57292) TASK_MONITOR: EspNowReceiverT     Blocked    3          1744          
I (57292) TASK_MONTOR: MqttManagerTask      Blocked    3          4872           
I (57302) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (57312) TASK_MONITOR: RelayManageTas      Blocked    3          5304           
I (57312) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (57322) TASK_MONITOR: Tmr Svc              Blocked              1548           
I (57332) TASK_MONITOR: sys_evt              Blockd    20         396            
I (57342) TASK_MONITOR: Free Heap: 10195 bytes, Min Free Heap: 92352 ytes
I (57342) TASK_MONITOR: ============================================================

[23:15:52 701 Rx] I (57992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (57992) wifi:<ba-del>idx:0, tid:0
I (58032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:52 251 Rx] I (58252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:79, winSize:64

[23:15:53 245 Rx] I (58502) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.01 Oxy=5.49 pH=8.31 | Temp=29.81Â°C | Volt=0.00V | PhaseLostMask=7

[23:15:53 515 Rx] I (59032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:54 948 Rx] I (59992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (59992) wifi:<ba-del>idx:0, tid:0
I (60032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:54 249 Rx] I (60252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:82, winSize:64
I (60352) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (60352) TASK_MONITOR: Task Name    
[23:15:55 103 Rx]         State     Priority   Stack High Water
I (60352) TASK_MONITOR: AdcBurst             Ready      2          1672           
I (60362) TASK_MONITOR TaskMonitor          Running    1          2144           
I (60372) TASK_MONITOR: IDLE1                Ready      0          916            
I (60382) TASK_MONITOR: IDLE0                Ready      0          924            
I (60382) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (60392) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (60402) TASK_MONITOR: tiT                  Blocked    18         1620           
I (60402) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (60412) TASK_MONITOR: ipc1                 Suspended  24         500            
I (60422) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (60432) TASK_MONITOR: wifi                 Blocked    23         3608           
I (60432) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (60442) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (60452) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (60462) TASK_MON
[23:15:55 104 Rx] ITOR: EspNowReceiverT      Blocked    3          1744           
I (60462) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (60472) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (60482) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (60482) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (60492) TASK_MONITOR: sys_evt              Blocked    20         396            
I (60502) TASK_MONITOR: ipc0                 Suspended  24         508            
I (60512) TASK_MONITOR: Free Heap: 101956 bytes, Min Free Heap: 92352 bytes
I (60512) TASK_MONITOR: =============================================================

[23:15:55 522 Rx] I (60992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (60992) wifi:<ba-del>idx:0, tid:0
I (61032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:55 256 Rx] I (61252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:83, winSize:64

[23:15:56 736 Rx] I (61992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (61992) wifi:<ba-del>idx:0, tid:0
I (62032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:56 261 Rx] I (62252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:84, winSize:64
I (62352) TIMER_DBG: 100Hz timer alive | tick=6180 | heap_free=101956 min=92352

[23:15:57 123 Rx] I (62382) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:37:onTimer100HzProcess] Diagnostics: Free Heap Size: 101956 bytes

[23:15:57 577 Rx] I (62972) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=69 GPIO39=1818 GPIO35=0
I (62992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (62992) wifi:<ba-del>idx:0, tid:0
I (63032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (63072) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:21
[23:15:57 105 Rx] 5:computeAndSendRms] DC1=190mV DC2=1633mV | RMS=24.2mV/18.9mV | A1=0.37A A2=0.41A [N=515]

[23:15:57 169 Rx] I (63252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:85, winSize:64

[23:15:58 242 Rx] I (63502) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.01 Oxy=5.53 pH=8.31 | Temp=29.81Â°C | Volt=0.00V | PhaseLostMask=7
I (63522) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (63522) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (63522) TASK_MONITOR: TaskMonitor          Running    1          2144           
I (63532) TASK_MONITOR: IDLE0                Ready      0          924            
I (63542) TASK_MONITOR: IDLE1                Ready      0          916            
I (63552) TASK_MONITOR: tiT                  Blocked    18         1620           
I (63552) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (63562) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (63572) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (6382) TASK_MONITOR: ipc1                 Suspended  24         500            
I (63582) TASK_MONITOR: Tmr Svc             Blocked    1          1548           
I (63592) TASK_MONITOR: ss_evt              Blocked    20         396    
[23:15:58 101 Rx]         
I (63602) TAK_MNITOR: wifi                 Blocked    23         608           
I (63602)TASK_MONITOR: AdReaderTask        locked    3          1648           
I (63612) TASK_MONITOR: esp_tier            Suspended  22        256           
I (6362) TASK_MONITOR: WifiManagerTask     Blocked    5          5288           
I (63622) TASK_MONITOR:EspNowReceiverT      Blocked    3          1744           
I (63632) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (63642) TAS_MONITOR: RelayManagerTas      Blocked    3          5304           
I (63652) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (63652) TASK_MONITOR: MqttManagerTask      Blocked   3          4872           
I (6662) TASK_MONITOR:ipc0                 Suspended  24         508            
I (63672) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (63682) TASK_MONITOR: Free Heap: 100284 bytes, Min Free Heap: 92352 bytes
I (63682) TASK_MONITOR: =============================================================

[23:15:58 423 Rx] I (64032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:59 950 Rx] I (64992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (64992) wifi:<ba-del>idx:0, tid:0
I (65032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:15:59 253 Rx] I (65252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:88, winSize:64

[23:16:00 730 Rx] I (65992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (65992) wifi:<ba-del>idx:0, tid:0
I (66032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:00 266 Rx] I (66272) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:90, winSize:64

[23:16:01 410 Rx] I (66692) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (66692) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (66692) TASK_MONITOR: TaskMonitor          Running    1          2144           
I (66702) TASK_MONITOR: IDLE0                Ready      0          924            
I (66712) TASK_MONITOR: IDLE1                Ready      0          916            
I (66722) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (66722) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (66732) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (66742) TASK_MONITOR: tiT                  Blocked    18         1620           
I (66742) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (66752) TASK_MONITOR: sys_evt              Blocked    20         396            
I (66762) TASK_MONITOR: ipc0                 Suspended  24         508            
I (66772) TASK_MONITOR: wifi                 Blocked    23         3608           
I (66772) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (66782) TASK_MONITOR: esp_timer            Suspended  22  
[23:16:01 100 Rx]        2156           
I (66792) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (66802) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (66802) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (66812) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (66822) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (66822) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (66832) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (66842) TASK_MONITOR: ipc1                 Suspended  24         500            
I (66852) TASK_MONITOR: Free Heap: 101956 bytes, Min Free Heap: 92352 bytes
I (66852) TASK_MONITOR: =============================================================

[23:16:01 188 Rx] I (66992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (66992) wifi:<ba-del>idx:0, tid:0
I (67032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:01 282 Rx] I (67282) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:92, winSize:64

[23:16:02 695 Rx] I (67992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (67992) wifi:<ba-del>idx:0, tid:0
I (68032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:02 252 Rx] I (68242) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:94, winSize:64

[23:16:03 252 Rx] I (68502) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.56 pH=8.33 | Temp=29.81Â°C | Volt=0.00V | PhaseLostMask=7

[23:16:03 456 Rx] I (68972) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=112 GPIO39=1821 GPIO35=0
I (69032) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (69072) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=190mV DC2=1640mV | RMS=15.9mV/19.9mV 
[23:16:03 105 Rx] | A1=0.36A A2=0.40A [N=516]

[23:16:04 779 Rx] I (69862) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (69862) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (69862) TASK_MONITOR: TaskMonitor          Running   1          2144           
I (69872) TASK_MOITOR: IDLE0                Ready      0        924            
I (69882) TASK_MONITOR: IDLE1                Ready     0          96           
I (69882) TAS_MONITOR: tiT                  Blocked    18         1620           
I (69892)TASK_MONITOR: mqtt_task           Blocked    5          3452          
I (69902) TASK_MONIOR: taskfreezer          Bloced    1          3584           
I (69912) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (69912) TASK_MONITOR: sys_evt             Blocked   20         396            
I (69922) TASK_ONITOR: ipc0                Suspended 24         508            
I (69932) TASK_MONITOR: EStpTask            Blocked    24         1880           I (6993) TASK_MONITOR: wifi                 Blocked    23         3608           
I (69942) TASK_MONITOR:AdcReaderTask       Bloced    3          1648           
I (69952) TASK_MONITOR: esptimer            Suspended  22         2156           
I (
[23:16:04 104 Rx] 69962) TASK_MONITO: WifiManagerTak      locked    5          5288           
I (69962) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (69972) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (69982) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (69982) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (69992) wifi:I (69992) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)I (70002) TASK_MONITOR: ipc1                 Suspended  24         500            

I (70012) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (70012) wifi:<ba-del>idx:0, tid:0I (70022) TASK_MONITOR: Free Heap: 101948 bytes, Min Free Heap: 92352 bytes

I (70032) TASK_MONITOR: =============================================================
I (70042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:04 292 Rx] I (70262) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:97, winSize:64

[23:16:05 711 Rx] I (70992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (70992) wifi:<ba-del>idx:0, tid:0
I (71042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:05 254 Rx] I (71252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:98, winSize:64

[23:16:06 729 Rx] I (71992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (71992) wifi:<ba-del>idx:0, tid:0
I (72042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:06 253 Rx] I (72252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:99, winSize:64

[23:16:07 115 Rx] I (72382) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:37:onTimer100HzProcess] Diagnostics: Free Heap Size: 101976 bytes

[23:16:07 609 Rx] I (72992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (72992) wifi:<ba-del>idx:0, tid:0
I (73042) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (73042) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (73042) TASK_MONITOR: MqttManagerTask      Ready      3          4872           
I (73052) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (73052) TASK_MONITOR: TaskMonitor          Running    1          2144           
I (73072) TASK_MONITOR: IDLE0                Ready      0          924            
I (73082) TASK_MONITOR: IDLE1                Ready      0          916            
I (730
[23:16:07 101 Rx] 92) TASK_MONITOR: tiT                  Blocked    18         1620           
I (73092) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (73102) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (73112) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (73122) TASK_MONITOR: ipc0                 Suspended  24         508            
I (73122) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (73132) TASK_MONITOR: ipc1                 Suspended  24         500            
I (73142) TASK_MONITOR: wifi                 Blocked    23         3608           
I (73152) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (73152) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (73162) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (73172) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744          
I (73172) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852          
I (3182) TASK_MONITOR: RelayManaerTas      Blocked    3          5304          
I (73192) TASK_MONITR: PowerManagerTas     Blocked    3          1752      
[23:16:07 103 Rx]     
I (73202) TASK_MONITOR: Tmr Svc             Blocked    1          1548           
I (73202) TASK_MONITOR: sys_evt              Blocked    20        396            
I (73212) TASK_MONITOR: Free Heap: 100376 bytes, Min Free Heap: 92352 byte
I (73222) TASK_MONITOR: ============================================================
I (73262) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:100, winSize:64

[23:16:08 291 Rx] I (73502) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.66 pH=8.33 | Temp=29.68Â°C | Volt=0.00V | PhaseLostMask=7

[23:16:08 540 Rx] I (74042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:09 921 Rx] I (74972) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=112 GPIO39=1820 GPIO35=0
I (74992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (74992) wifi:<ba-del>idx:0, tid:0
I (75042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (75072) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=191mV DC2=1638mV | RMS=21.1mV/21.9mV | A1=0.39A A2=0.44A [N=510]

[23:16:09 290 Rx] I (75272) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:103, winSize:64

[23:16:10 723 Rx] I (75992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (75992) wifi:<ba-del>idx:0, tid:0
I (76042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:10 226 Rx] I (76222) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (76222) TASK_MONITOR: Task Name            State      Priority   Stack High Wate
I (76222) TASK_MONITOR: AdcBurst             Ready      2          1672           
I (76232) TASK_MONITOR: TaskMonitor          Running    1          2144           
I (76242) TASK_MNITR: IDLE1                Ready     0         916          
I (76242) TSK_MONITOR: IDLE0                Ready      0          924            
I (76252) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (76252) wifi:I (76262) TASK_MONITOR: taskfreezer          Blocked    1          3584           
<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:104, winSize:64I (76272) TASK_MONITOR: tiT                  Blocked    18         1620           

I (76282) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (76292) TASK_MONITOR: ipc1                 Suspended  24         500            
I (76302) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (76302) TASK_MONITOR: wifi                 Blocked    23         3608           
I (76312) TASK_MONITOR: AdcReaderTask        Blocked    3          
[23:16:10 102 Rx] 1648           
I (76322) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (76332) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (76332) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (76342) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (76352) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (76352) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (76362) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (76372) TASK_MONITOR: sys_evt              Blocked    20         396            
I (76382) TASK_MONITOR: ipc0                 Suspended  24         508            
I (76382) TASK_MONITOR: Free Heap: 101964 bytes, Min Free Heap: 92352 bytes
I (76392) TASK_MONITOR: =============================================================

[23:16:11 661 Rx] I (76992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (76992) wifi:<ba-del>idx:0, tid:0
I (77042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:11 262 Rx] I (77262) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:105, winSize:64

[23:16:12 713 Rx] I (77992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (77992) wifi:<ba-del>idx:0, tid:0
I (78042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:12 260 Rx] I (78262) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:106, winSize:64

[23:16:13 238 Rx] I (78502) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.01 Oxy=5.68 pH=8.33 | Temp=29.81Â°C | Volt=0.00V | PhaseLostMask=7

[23:16:13 531 Rx] I (79042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:14 347 Rx] I (79402) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (79402) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (79402) TASK_MONITOR: TaskMonitor          Running    1          2144           
I (79412) TASK_MONITOR: IDLE0                Ready      0          924            
I (79422) TASK_MONITOR: IDLE1                Ready      0          916            
I (79432) TASK_MONITOR: tiT                  Blocked    18         1620           
I (79432) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (79442) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (79452) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (79452) TASK_MONITOR: ipc1                 Suspended  24         500            
I (79462) TASK_MONITOR: Tmr Svc              Blcked    1         1548           
I (79472) TASK_ONITOR: sys_evt              Blocked   20         396            
I (79482) TASK_MONITOR: wfi                 Blocked    23         3608           
I (7982) TASK_MONITOR: dcRedeTask        Blocked   3          1648           
I (79492) TASK_MOITOR: esp_timer           Suspended  22         2156           
I (79502) TAK_MONITOR: WifiManagerTask      Blocke
[23:16:14 104 Rx] d   5          5288           
I (79502) TASK_MONITR: EspNowReceiverT      Blocked    3          1744           
I (951) TASK_MONITOR: MqttManagrTas      Blocked    3          4872           
I (79522) TASK_MONITOR: ConigSystemTas     Blocked    3          5852           
I (79532) ASK_MONITOR: RelayManagerTas      Bocked    3         530          
I (79532) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (79542) TASK_MONITOR: ipc0                 Suspended  24         508            
I (79552) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (79552 TASK_MONITOR: Free Heap: 101976 bytes, Mn Free Heap: 92352 bytes
I (79562) TASK_MONITOR: =============================================================

[23:16:14 476 Rx] I (79992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (79992) wifi:<ba-del>idx:0, tid:0
I (80042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:14 271 Rx] I (80262) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:110, winSize:64

[23:16:15 698 Rx] I (80972) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=101 GPIO39=1840 GPIO35=0
I (80992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (80992) wifi:<ba-del>idx:0, tid:0
I (81042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (81072) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=190mV DC2=1640mV | RMS=15.0mV/21.6mV | A1=0.33A A2=0.44A [N=507]

[23:16:15 273 Rx] I (81252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:111, winSize:64

[23:16:16 726 Rx] I (81992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (81992) wifi:<ba-del>idx:0, tid:0
I (82042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:16 261 Rx] I (82262) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:112, winSize:64

[23:16:17 106 Rx] I (82382) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:37:onTimer100HzProcess] Diagnostics: Free Heap Size: 101976 bytes

[23:16:17 173 Rx] I (82572) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (82572) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (82572) TASK_MONITOR: AdcBurst             Ready      2          1672           
I (82582) TASK_MONITOR: TaskMonitor          Running    1          2144           
I (82592) TASK_MONITOR: IDLE1                Ready      0          916            
I (82602) TASK_MONITOR: IDLE0                Ready      0          924            
I (82602) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (82612) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (82622) TASK_MONITOR: tiT                  Blocked    18         1620           
I (82622) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (82632) TASK_MONITOR: sys_evt              Blocked    20         396            
I (82642) TASK_MONITOR: ipc0                 Suspended  24         508            
I (82652) TASK_MONITOR: wifi                 Blocked    23         3608           
I (82652) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (82662) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (82672) TASK_MONITOR: WifiManagerTas
[23:16:17 100 Rx] k      Blocked    5          5288           
I (82682) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (82682) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (82692) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (82702) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (82702) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (82712) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (82722) TASK_MONITOR: ipc1                 Suspended  24         500            
I (82732) TASK_MONITOR: Free Heap: 101976 bytes, Min Free Heap: 92352 bytes
I (82732) TASK_MONITOR: =============================================================

[23:16:17 303 Rx] I (82992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (82992) wifi:<ba-del>idx:0, tid:0
I (83042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:17 258 Rx] I (83252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:113, winSize:64

[23:16:18 245 Rx] I (83502) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.00 Oxy=5.73 pH=8.34 | Temp=29.68Â°C | Volt=0.00V | PhaseLostMask=7

[23:16:18 527 Rx] I (84042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:19 932 Rx] I (84992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (84992) wifi:<ba-del>idx:0, tid:0
I (85042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:19 262 Rx] I (85262) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:116, winSize:64

[23:16:20 460 Rx] I (85742) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (85742) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (85742) TASK_MONITOR: TaskMonitor          Running    1          2144           
I (85752) TASK_MONITOR: IDLE0                Ready      0          924            
I (85762) TASK_MONITOR: IDLE1                Ready      0          916            
I (85772)TASK_MONITOR: tiT                  locked    18         1620           
I (85772) TASK_MONITOR: mqt_task            Blocked    5         3452           
I (85782) TASK_MONITOR: taskfreezer          Blocked    1         3584           
I (85792) TASK_ONITR: AdcBurst             locked    2          1672           
I (85792) TASK_MONITOR: sys_evt              Blocked    20        396           
I (85802) TASK_MONITOR: ipc0                 Supened  24         508            
I (85812) TASK_MONITO: EStopTask            Blocked    24         1880           
I (85812)TAS_MONITOR: wifi                 Blocked    23         3608           
I (85822) TASK_MONITR: AdcReaderTask        Blocked    3         1648           
I (85832) TASK_MO
[23:16:20 102 Rx] NITOR: esp_timer            Suspended  22         2156           
I (85842) TASK_MONITO: WifiManagerTask     Blocked    5          5288           
I (85842) TASK_MONITOR: EspNowReceiveT      Blocked    3         1744           
I (85852) TASK_MONITOR: MqttManagerTask      Blocked    3          4872          
I (85862) TASK_MONITOR: ConfigSystemTas      Blocked    3         5852           
I (85872) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (85872) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (85882) TASK_MONITOR: ipc1                 Suspended  24         500            
I (85892) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (85892) TASK_MONITOR: Free Heap: 101976 bytes, Min Free Heap: 92352 bytes
I (85902) TASK_MONITOR: =============================================================

[23:16:20 144 Rx] I (85992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (85992) wifi:<ba-del>idx:0, tid:0
I (86042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:20 270 Rx] I (86272) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:117, winSize:64

[23:16:21 693 Rx] I (86972) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=89 GPIO39=1833 GPIO35=0
I (86992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (86992) wifi:<ba-del>idx:0, tid:0
I (87042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (87072) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:21
[23:16:21 105 Rx] 5:computeAndSendRms] DC1=190mV DC2=1642mV | RMS=20.7mV/25.4mV | A1=0.40A A2=0.48A [N=518]

[23:16:21 182 Rx] I (87252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:118, winSize:64

[23:16:22 735 Rx] I (87992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (87992) wifi:<ba-del>idx:0, tid:0
I (88042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:22 261 Rx] I (88262) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:119, winSize:64

[23:16:23 248 Rx] I (88512) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.01 Oxy=5.78 pH=8.34 | Temp=29.68Â°C | Volt=0.00V | PhaseLostMask=7

[23:16:23 385 Rx] I (88912) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (88912) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (88912) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (88922) TASK_MONITOR: IDLE0                Ready      0          924            
I (88932) TASK_MONITOR: IDLE1                Ready      0          916            
I (88942) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (88942) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (88952) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (88962) TASK_MONITOR: tiT                  Blocked    18         1620           
I (88962) TASK_MONITOR: ipc0                 Suspended  24         508            
I (88972) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (88982) TASK_MONITOR: ipc1                 Suspended  24         500            
I (88992) TASK_MONITOR: wifi                 Blocked    23         3608           
I (88992) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (89002) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (89012) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (89022) TASK_M
[23:16:23 104 Rx] ONITOR: EspNowReceiverT      Blocked    3          1744           
I (89022) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (89032) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (89042) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (89042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (89042) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (89072) TASK_ONITOR: Tmr Svc              Blocked    1          1548           
I (89072) TASK_MONITOR: sys_evt              Blocked    20         396            
I (89082) TASK_MONITOR: Free Heap: 100308 byte, Min Free Heap: 92352 btes
I (89092) ASK_MONITOR: ==========================================================

[23:16:24 961 Rx] I (89992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (89992) wifi:<ba-del>idx:0, tid:0
I (90042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:24 262 Rx] I (90272) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:122, winSize:64

[23:16:25 708 Rx] I (90992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (90992) wifi:<ba-del>idx:0, tid:0
I (91042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:25 268 Rx] I (91262) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:123, winSize:64

[23:16:26 721 Rx] I (91992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (91992) wifi:<ba-del>idx:0, tid:0
I (92042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (92092) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (92092) TASK_MONITOR: Task Name    
[23:16:26 105 Rx]         State     Priority   tack High Water
I (2092) TASK_MONITOR: AdcBurst             Ready      2          1672           
I (92102) TASK_MONITOR: TaskMonitor          Running              1984           
I (92112) TASK_ONITOR: IDLE1                Ready      0          916            
I (92112) TASK_MONITOR: IDLE0                Ready     0         924            
I (92122) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (92132) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (92142) TASK_MONITOR: tiT                  Blocked    18         1620           
I (9242) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (9252) TASK_MONITOR: ipc1                 Suspended  4         500            
I (92162) TASK_MONITOR: Tm Svc             Bloced              1548           
I (92172) TASK_MONITOR: wifi                 Blocked    23         3608           
I (92172) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (92182) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (92192) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (92192) TASK_MONITOR: EspNowR
[23:16:26 101 Rx] eceiverT      Blocked    3          1744           
I (92202) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (92212) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (92222) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (92222) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (92232) TASK_MONITOR: sys_evt              Blocked    20         396            
I (92242) TASK_MONITOR: ipc0                 Suspended  24         508            
I (92252) TASK_MONITOR: Free Heap: 100376 bytes, Min Free Heap: 92352 bytes
I (92252) TASK_MONITOR: =============================================================
I (92262) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:124, winSize:64

[23:16:27 132 Rx] I (92352) TIMER_DBG: 100Hz timer alive | tick=9180 | heap_free=101960 min=92352
I (92382) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:37:onTimer100HzProcess] Diagnostics: Free Heap Size: 101960 bytes

[23:16:27 615 Rx] I (92972) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=99 GPIO39=1712 GPIO35=0
I (92992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (92992) wifi:<ba-del>idx:0, tid:0
I (93042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (93072) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:21
[23:16:27 103 Rx] 5:computeAndSendRms] DC1=189mV DC2=1640mV | RMS=13.4mV/20.8mV | A1=0.35A A2=0.44A [N=516]

[23:16:27 175 Rx] I (93252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:125, winSize:64

[23:16:28 242 Rx] I (93502) [info]EspNowReceiverTask: [src/task/espnowreceivertask.cpp:106:onDataReceive] OK | deviceId=1 | I1=0.01 Oxy=5.81 pH=8.38 | Temp=29.68Â°C | Volt=0.00V | PhaseLostMask=7

[23:16:28 538 Rx] I (94042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:29 941 Rx] I (94992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (94992) wifi:<ba-del>idx:0, tid:0
I (95042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:29 267 Rx] I (95262) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (95262) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (95262) wifi:I (95272) TASK_MONITOR: TaskMonitor          Running    1          1984           
<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:129, winSize:64I (95282) TASK_MONITOR: IDLE0                Ready      0          924            

I (95292) TASK_MONITOR: IDLE1                Ready      0          916            
I (95302) TASK_MONITOR: AdcBurst             Blocked    2          1672           
I (95302) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (95312) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (95322) TASK_MONITOR: tiT                  Blocked    18         1620           
I (95332) TASK_MONITOR: ipc1                 Suspended  24         500            
I (95332) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (95342) TASK_MONITOR: sys_evt              Blocked    20         396            
I (95352) TASK_MONITOR: wifi                 Blocked    23         3608           
I (95352) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (95362) TASK_MONITOR: AdcReaderTask
[23:16:30 104 Rx]         Blocked    3         1648           
I (95372) TAK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (95382) TASK_MONITOR: EsNowReceiverT      Blocked    3          1744           
I (95382) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (95392) TASK_MONITOR: RlayManagerTas      Blocked    3          5304           
I (95402) ASK_MONITOR: esp_timer            Suspended  22         2156         
I (95412) TASK_MONITOR: PowerManagerTas      Blocked    3         1752          
I (95412)TASK_MONITOR: ipc0                 Suspended  24         508            
I (95422) ASK_MONITOR: EStopTask            Blocke   24         1880          
I (95432) TASK_MONITOR: Free Heap: 101976 bytes, Min Fre Heap: 92352 bytesI (95432) TASK_MONITOR: =============================================================

[23:16:30 610 Rx] I (95992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (95992) wifi:<ba-del>idx:0, tid:0
I (96042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:30 267 Rx] I (96272) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:130, winSize:64

[23:16:31 710 Rx] I (96992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (96992) wifi:<ba-del>idx:0, tid:0
I (97042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:31 280 Rx] I (97272) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:131, winSize:64

[23:16:32 710 Rx] I (97992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (97992) wifi:<ba-del>idx:0, tid:0
I (98042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:32 272 Rx] I (98262) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:132, winSize:64

[23:16:33 171 Rx] I (98442) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (98442) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (98442) TASK_MONITOR: AdcBurst             Ready      2          1672           
I (98452) TASK_MONITOR: TaskMonitor         Runing    1          984           
I (98462) TASK_MONITOR: IDLE1              Ready      0          916            
I (98462) TASK_MONITOR: IDLE0                Ready      0          924            
I (98472) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (98482) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (98492) TASK_MONITOR: tiT                  Blocked    18         1620           
I (98492) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (98502) TASK_MONITOR: sys_evt              Blocked    20         396            
I (98512) TASK_MONITOR: ipc0                 Suspended  24         508            
I (98522) TASK_MONITOR: wifi                 Blocked    23         3608           
I (98522) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (98532) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (98542) TASK_MONITOR: WifiManagerTask    
[23:16:33 101 Rx]   Blocked    5          5288           
I (98552) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (98552) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (98562) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (98572) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (98572) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (98582) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (98592) TASK_MONITOR: ipc1                 Suspended  24         500            
I (98602) TASK_MONITOR: Free Heap: 101976 bytes, Min Free Heap: 92352 bytes
I (98602) TASK_MONITOR: =============================================================

[23:16:33 409 Rx] I (98972) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=80 GPIO39=1822 GPIO35=0
I (98992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (98992) wifi:<ba-del>idx:0, tid:0
I (99042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (99072) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:21
[23:16:33 102 Rx] 5:computeAndSendRms] DC1=189mV DC2=1641mV | RMS=11.7mV/11.6mV | A1=0.39A A2=0.39A [N=515]

[23:16:33 187 Rx] I (99262) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:133, winSize:64

[23:16:34 715 Rx] I (99992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (99992) wifi:<ba-del>idx:0, tid:0
I (100042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:34 278 Rx] I (100272) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:134, winSize:64

[23:16:35 705 Rx] I (100992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (100992) wifi:<ba-del>idx:0, tid:0
I (101042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:35 299 Rx] I (101292) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:136, winSize:64

[23:16:36 309 Rx] I (101612) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (101612) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (101612) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (101622) TASK_MONITOR: IDLE0                Ready      0          924            
I (101632) TASK_MONITOR: IDLE1                Ready      0          916            
I (101642) TASK_MONITOR: tiT                  Blocked    18         1620           
I (101642) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (101652) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (101662) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (101672) TASK_MONITO: sys_evt             Blocked    20         396            
I (101672) TASK_MONIOR: ipc                 Suspended  24         58            
I (101682) TASK_MONITOR: EStopTask           Blocked    24         1880          
I (01692) TASK_MONITOR: ifi                 Bloced    23         3608           
I (10192) TASK_ONITOR: AdcReaderTask        Blocked    3          1648           
I (101702) TASK_MNITOR: esp_timer            Suspended  22         2156           
I (101712) TASK_MONITOR: WifiManager
[23:16:36 102 Rx] Task      Bloked   5          5288           
I (101722) TASK_MONITR: EspNowReceiverT      Blocked    3        1744           
I (101722) TASK_MONITOR: MqttManagerTask      Blocked    3        4872          
I (10732) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (101742) TASK_MONITOR: RelayManagerTas      Bloked    3          304           
I (101742) TASK_MOITOR: PowerManagerTas     Blocked    3          1752           
I (101752) TASK_MONITOR: ipc1                 Suspnded  24        500            
I (101762) TASK_MONITOR: Tmr Sv             Blocked    1          1548           
I (101772) TASK_MONITOR: Free Heap: 101960 bytes, Min Free Heap: 92352 bytes
I (101772) TASK_MONITOR: =============================================================

[23:16:36 263 Rx] I (101992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (101992) wifi:<ba-del>idx:0, tid:0
I (102042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:36 256 Rx] I (102262) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:137, winSize:64

[23:16:37 111 Rx] I (102382) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:37:onTimer100HzProcess] Diagnostics: Free Heap Size: 101976 bytes

[23:16:37 602 Rx] I (102992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (102992) wifi:<ba-del>idx:0, tid:0
I (103042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:37 265 Rx] I (103262) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:139, winSize:64

[23:16:38 718 Rx] I (103992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (103992) wifi:<ba-del>idx:0, tid:0
I (104042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:38 265 Rx] I (104252) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:140, winSize:64

[23:16:39 514 Rx] I (104782) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (104782) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (104782) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (104792) TASK_MONITOR: IDLE0                Ready      0          924            
I (104802) TASK_MONITOR: IDLE1                Ready      0          916            
I (104812) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (104812) TASK_MONITOR: mqtt_task            Blocked    5          3452           
I (104822) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (104832) TASK_MONITOR: tiT                  Blocked    18         1620           
I (104832) TASK_MONITOR: ipc0                 Suspended  24         508            
I (104842) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (104852) TASK_MONITOR: ipc1                 Suspended  24         500            
I (104862) TASK_MONITOR: wifi                 Blocked    23         3608           
I (104862) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (104872) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (104882) TASK_MONITOR
[23:16:39 102 Rx] : WifiManagerTask      Blocked    5          5288           
I (104892) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (104892) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (104902) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (104912) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (104922) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (104922) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (104932) TASK_MONITOR: sys_evt              Blocked    20         396            
I (104942) TASK_MONITOR: Free Heap: 101976 bytes, Min Free Heap: 92352 bytes
I (104942) TASK_MONITOR: =============================================================
I (104972) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=110 GPIO39=1824 GPIO35=0
I (104992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, init
[23:16:39 101 Rx] iator:1(originator)
I (104992) wifi:<ba-del>idx:0, tid:0
I (105042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (105072) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=187mV DC2=1639mV | RMS=12.0mV/14.2mV | A1=0.31A A2=0.42A [N=512]

[23:16:39 258 Rx] I (105262) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:141, winSize:64

[23:16:40 725 Rx] I (105992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (105992) wifi:<ba-del>idx:0, tid:0
I (106042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:40 281 Rx] I (106272) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:141, winSize:64

[23:16:41 706 Rx] I (106992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (106992) wifi:<ba-del>idx:0, tid:0
I (107042) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:41 262 Rx] I (107262) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:143, winSize:64

[23:16:42 677 Rx] I (107952) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (107952) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (107952) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (107962) TASK_MONITOR: IDLE0                Ready      0          924            
I (107972) TASK_MONITOR: IDLE1                Ready      0          916            
I (107982) TASK_MONITR: tiT                 Blocked    18         1620           
I (107982) TASK_MONITOR: mqtttask           Blcke    5          3452           
I (107992) wifi:I (107992) TASK_MOITOR: taskfreezer          Blocked    1          3584           
I (108002) TASK_ONITOR: AdcBurst             Blocked    2          1496           
I (108012) TASK_MONITOR: EStopTask           Blocked    24         1880           
[ADDBA]RX DELBA, reason:39, dletetid:0, initiator:1(originator)I (18012) TASK_MONITOR: ipc1                 Suspended  24         500            

I (108032) TASK_MONITOR: Tmr Svc              Bocked    1          1548           
I (108032) wifi:I (108032) TASK_MONITOR: wifi                 Blocked   23         3608           
<ba-de>idx:0, tid:0I (108042) TASK_MONITOR: Ad
[23:16:42 100 Rx] cReaderTask        Blocked   3          1648          
I (108052) TASK_MOITOR: esp_timer            Suspended  22        2156           

I (108062) TASK_MONITOR: WifiManageTask      Bocked    5          5288           
I (108072) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (108072) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (108072) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (108092) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (108102) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (108112) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (108122) TASK_MONITOR: sys_evt              Blocked    20         396            
I (108122) TASK_MONITOR: ipc0                 Suspended  24         508            
I (108132) TASK_MONITOR: Free Heap: 100376 bytes, Min Free Heap: 92352 bytes
I (108142) TASK_MONITOR: =============================================================

[23:16:42 227 Rx] I (108292) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:144, winSize:64

[23:16:43 698 Rx] I (108992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (108992) wifi:<ba-del>idx:0, tid:0
I (109072) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:43 303 Rx] I (109312) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:145, winSize:64

[23:16:44 676 Rx] I (109992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (109992) wifi:<ba-del>idx:0, tid:0
I (110072) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:44 294 Rx] I (110292) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:146, winSize:64

[23:16:45 682 Rx] I (110992) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=106 GPIO39=1822 GPIO35=0
I (111072) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20
I (111092) [debug
[23:16:45 103 Rx] ]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=188mV DC2=1640mV | RMS=17.9mV/18.0mV | A1=0.37A A2=0.39A [N=526]
I (111152) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (111152) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (111152) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (111162) TASK_MONITOR: IDLE0                Ready      0          924            
I (111172) TASK_MONITOR: IDLE1                Ready      0          916            
I (111182) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (111182) TASK_MONITOR: mqtt_task          
[23:16:45 104 Rx]   Blocked    5          3452           
I (111192) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (111202) TASK_MONITOR: tiT                  Blocked    18         1620           
I (111212) TASK_MONITOR: ipc1                 Suspended  24         500            
I (111212) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (111222) TASK_MONITOR: sys_evt              Blocked    20         396            
I (111232) TASK_MONITOR: wifi                 Blocked    23         3608           
I (111232) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (111242) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (111252) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (111262) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (111262) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (111272) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (111282) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (111292) TASK_MONITOR: PowrManagerTas      Blocked    3          1752           
I (111292)
[23:16:45 104 Rx]  TASK_MONITOR: ipc0                 Suspended  24        508            
I (111302) TASK_MONITOR: EStopTak            Blocked    24         1880           
I (111312) TASK_MONTOR: Free Heap: 101976 bytes, Mi Free Heap: 9252 bytes
I (111312) TASK_MONITOR: ========================================================

[23:16:46 680 Rx] I (111992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (111992) wifi:<ba-del>idx:0, tid:0
I (112072) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:46 295 Rx] I (112292) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:149, winSize:64
I (112382) [info]WifiManagerTask: [src/task/wifimanagertask.cpp:37:onTimer100HzProcess] Diagnostics: Free Heap Size: 101976 bytes

[23:16:47 709 Rx] I (113002) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (113002) wifi:<ba-del>idx:0, tid:0
I (113072) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:47 290 Rx] I (113292) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:150, winSize:64

[23:16:48 691 Rx] I (113992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (113992) wifi:<ba-del>idx:0, tid:0
I (114072) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:48 287 Rx] I (114282) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:150, winSize:64
I (114322) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (114322) TASK_MONITOR: Task Name           State      Priority   Stack High Water
I (114322) TASK_MNITOR: AcBurst             Ready      2          1496           
I (11332) TASK_MONITOR: TaskMonitor         Running    1         1984           
I (114342) TASK_MONITOR: IDLE1                Ready      0          916            
I (114352) TASK_MONITOR: IDLE0                Ready      0         924            
I (114352) TASK_MONTOR: mqtt_task          Blocked    5          3452          
I (114362) TASK_MONITOR: tskfreezer          Blocked    1          3584           
I (114372) TASK_MONITOR: tiT                  Blcked    18         1620           
I (114372) TASMONTOR: Tmr Svc              Blocked
[23:16:49 105 Rx]     1          1548           
I (114382) TASK_MONITOR: sys_evt              Blocked    20         396            
I (114392) TASK_MONITOR: ipc0                 Suspended  24         508            
I (114402) TASK_MONITOR: wifi                 Blocked    23         3608           
I (114402) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (114422) [info]MqttManagerTask: [src/task/mqttmanagertask.cpp:163:onMessageReceived] Received MQTT message on topic: devices/163091810856900/commands, length: 4
I (114432) [info]MqttManagerTask: [src/task/mqttmanagertask.cpp:179:onMessageReceived] Command successfully sent to RelayManagerTask
I (114432) [info]RelayManagerTask: [src/task/relaymanagertask.cpp:45:onQueueSetMessageProcess] Received command from MQTT, processing...
I (114452) [info]RelayManagerTask: [src/task/relaymanagertask.cpp:94:processControlRelayMessage] Process control relay message: channel=0, status=1
I (114422) TASK_MONITOR: WifiManagerTask      Blocked    5          5288           
I (114472) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:76:saveRelayInforToFlash] saveRelayInforToFlash write data system from nvs success
I (114482) TASK_MONITOR: AdcReaderTask      
[23:16:49 100 Rx]   Blocked    3          1648           
I (114482) [info]RelayManagerTask: [src/task/relaymanagertask.cpp:105:processControlRelayMessage] Save to flash control relay message: channel=0, status=1
I (114492) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (114512) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (114522) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (114532) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (114532) TASK_MONITOR: RelayManagerTas      Blocked    3          5304           
I (114542) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (114552) TASK_MONITOR: ipc1                 Suspended  24         500            
I (114552) TASK_MONITOR: Free Heap: 100404 bytes, Min Free Heap: 92352 bytes
I (114562) TASK_MONITOR: =============================================================

[23:16:49 579 Rx] I (115082) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:49 171 Rx] I (115262) [info]MqttManagerTask: [src/task/mqttmanagertask.cpp:163:onMessageReceived] Received MQTT message on topic: devices/163091810856900/commands, length: 4
I (115272) [info]MqttManagerTask: [src/task/mqttmanagertask.cpp:179:onMessageReceived] Comand sucessfuly sent to RelayManagerTask
I (115272) [info]RelayManagerTask: [src/task/relaymanagertask.cpp:45:onQueueSetMessageProcess] Received command from MQTT, processing...
I (115292) [info]RelayManagerTask: [src/task/relaymanagertask.cpp:94:processControlRelayMessage] Process control relay message: channel=0, status=0
I (115332) [info]StoreFlashManager: [src/common/storeflashmanager.cpp:76:saveRelayInforToFlash] saveRelayInforToFlash write data system from nvs success
I (115332) [info]RelayManagerTask: [src/task/relaymanagertask.cpp:105:processControlRelayMessage] Save to flash control relay message: channel=0, status=0

[23:16:50 817 Rx] I (116092) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:51 894 Rx] I (116992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (116992) wifi:<ba-del>idx:0, tid:0
I (117002) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=89 GPIO39=1823 GPIO35=0
I (117092) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic:
[23:16:51 100 Rx]  devices/163091810856900/telemetry, len: 20
I (117102) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=189mV DC2=1638mV | RMS=18.1mV/29.8mV | A1=0.36A A2=0.44A [N=504]

[23:16:52 239 Rx] I (117352) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:161, winSize:64

[23:16:52 214 Rx] I (117572) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (117572) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (117572) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (117582) TASK_MONITOR: IDLE0                Ready      0          924            
I (117592) TASK_MONITOR: IDLE1                Ready      0          916            
I (117602) TASK_MONITOR: tiT                  Blocked    18         1620           
I (117602) TASK_MONITOR: mqtt_task            Blocked    5         3004           
I (11612) TASK_MONITOR: taskfreezer          Blocked    1         3584           
I (117622) TASK_MONITOR: AdcBurst             Blocked    2         1496           
I (117622) TASK_MONITO: sys_evt              Blocke    20        396            
I (117632) TASK_MONITOR: EStopTak           Blocked   24         1880           
I (11642) TASK_MONITOR: ipc0                Suspended  24         58            
I (117652) TASK_MONITOR: ifi                 Blocked    23         3608          
I (117652) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           

[23:16:52 100 Rx] 
I (117662) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (117672) TASK_MONIOR: WifiManagerTask     Blcked    5          5288           
I (117682) TASK_MONITOR: EspNowReceiverT     Blocked    3          1744           
I (117682) TASK_MONITOR: MqttanagerTask      Blocked    3          4872          
I (117692) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (117702) ASK_MONITOR: RelayManagerTas      Blocked    3         5208           
I (117702) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (117712) TASK_MONITOR: ipc1                 Suspended  24         500            
I (117722) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (117732) TASK_MONITOR: Free Heap: 101964 bytes, Min Free Heap: 92352 bytes
I (117732) TASK_MONITOR: =============================================================

[23:16:52 312 Rx] I (117992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (117992) wifi:<ba-del>idx:0, tid:0

[23:16:52 102 Rx] I (118092) [debug]MqttManagerTask: [src/task/mqttmanagertask.cpp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:52 219 Rx] I (118312) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:162, winSize:64

[23:16:53 662 Rx] I (118992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (118992) wifi:<ba-del>idx:0, tid:0
I (119092) [debug]MqttManagerTask: [src/task/mqttmanagertask.c
[23:16:53 103 Rx] pp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:53 202 Rx] I (119302) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:165, winSize:64

[23:16:54 675 Rx] I (119992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (119992) wifi:<ba-del>idx:0, tid:0
I (120092) [debug]MqttManagerTask: [src/task/mqttmanagertask.c
[23:16:54 102 Rx] pp:144:onQueueSetMessageProcess] Published telemetry to topic: devices/163091810856900/telemetry, len: 20

[23:16:54 200 Rx] I (120302) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:166, winSize:64

[23:16:55 421 Rx] I (120742) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (120742) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (120742) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (120752) TASK_MONITOR: IDLE0                Ready      0          924            
I (120762) TASK_MONITOR: IDLE1                Ready      0          916            
I (120772) TASK_MONITOR: taskfreezer          Blocked    1          3584           
I (120772) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (120782) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (120792) TASK_MONITOR: tiT                  Blocked    18         1620           
I (120802) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (120802) TASK_MONITOR: ipc0                 Suspended  24         508            
I (120812) TASK_MONITOR: ipc1                 Suspended  24         500            
I (120822) TASK_MONITOR: wifi                 Blocked    23         3608           
I (120822) TASK_MONITOR: AdcReaderTask        Blocked    3          1648           
I (120832) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (120842) TASK_MONITOR
[23:16:55 100 Rx] : WifiManagerTask      Blocked    5          5288           
I (120852) TASK_MONITOR: EspNowReceiverT      Blocked    3          1744           
I (120852) TASK_MONITOR: MqttManagerTask      Blocked    3          4872           
I (120862) TASK_MONITOR: ConfigSystemTas      Blocked    3          5852           
I (120872) TASK_MONITOR: RelayManagerTas      Blocked    3          5208           
I (120882) TASK_MONITOR: PowerManagerTas      Blocked    3          1752           
I (120882) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (120892) TASK_MONITOR: sys_evt              Blocked    20         396            
I (120902) TASK_MONITOR: Free Heap: 101976 bytes, Min Free Heap: 92352 bytes
I (120912) TASK_MONITR: ============================================================

[23:16:55 133 Rx] I (120992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (120992) wifi:<ba-del>idx:0, tid:0

[23:16:57 --- Rx] I (122352) TIMER_DBG: 100Hz timer alive | tick=12180 | heap_free=102048 min=92352

[23:16:57 647 Rx] I (123012) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=84 GPIO39=1825 GPIO35=0
I (123112) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[23:16:57 103 Rx] 15:computeAndSendRms] DC1=189mV DC2=1621mV | RMS=20.3mV/32.2mV | A1=0.39A A2=0.54A [N=593]

[23:16:58 794 Rx] I (123912) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (123912) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (123912) TASK_MONITOR: AdcBurst             Ready      2          1496           
I (123922) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (123932) TASK_MONITOR: IDL0                Ready      0         924            
I (12342) TASK_MONITOR: IDLE                Ready      0          916            
I (123942) TAK_MONITOR: mqtt_tas            Blocked    5          3004           
I (123952)TASKMONITOR: taskfreezer          Blocked   1          3552           
I (123962) TASK_MONITO: tiT                  Blocked    18         1620          
I (13962) TASK_MONTOR: ipc0                 Suspended  24         508            
I (123972)TASK_MONIOR: ipc1               Supended  24        500            
I (123982) TASK_MNITOR: Tmr Svc              Blocked    1         1548           
I (123992) TASK_MONITOR: WifiManagerTask      Suspende  5          5288           
I (123992) TASK_MONITOR: RelayManagerTas      Suspended  3          5208           
I (124002) TAS_MONITOR: PowerManagerTas      Suspended  3          1752           
I (124012) TASK_MONITOR: AdcReaderTask        S
[23:16:58 100 Rx] uspended  3          1648           
I (124012) TASK_MONITOR: ConfigSystemTas      Suspended  3          5852           
I (124022) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (124032) TASK_MONITOR: EspNowReceiverT      Suspended  3          1744           
I (124042) TASK_MONITOR: wifi                 Blocked    23         3608           
I (124042) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (124052) TASK_MONITOR: sys_evt              Blocked    20         396            
I (124062) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (124072) TASK_MONITOR: Free Heap: 102048 bytes, Min Free Heap: 92352 bytes
I (124072) TASK_MONITOR: =============================================================

[23:17:01 --- Rx] I (126572) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:167, winSize:64

[23:17:01 491 Rx] I (127082) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (127082) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (127082) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (127092) TASK_MONITOR: IDLE0                Ready      0          924            
I (127102) TASK_MONITOR: IDLE1                Ready      0          916            
I (127112) TASK_MONITOR: tiT                  Blocked    18         1620           
I (127112) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (127122) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (127132) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (127142) TASK_MONITOR: ipc1                 Suspended  24         500            
I (127142) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (127152) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
I (127162) TASK_MONITOR: RelayManagerTas      Suspended  3          5208           
I (127162) TASK_MONITOR: PowerManagerTas      Suspended  3          1
[23:17:01 106 Rx] 752           
I (127172) TASK_MONITOR: AdcReaderTask        Suspended  3          1648           
I (127182) TASK_MONITOR: ConfigSystemTas      Suspended  3          5852           
I (127192) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (127192) TASK_MONITOR: EspNowReceiverT      Suspended  3          1744           
I (127202) TASK_MONITOR: sys_evt              Blocked    20         396            
I (12722) ASKMONITOR: wif                 Blocked    23        3608           
I (127222) TASK_MONITOR: esp_timer           Suspended  22         2156           
I 12722) TASK_MONITOR: EStoTask            Blocked    24         1880          
I (127232) TASK_MONITOR: ipc0                 Suspnded  24         508            
I (1724) TASK_MONITOR: Free Heap: 101976 bytes, Min Free Heap: 9352 bytes
I (127242) TASK_MONITOR: =============================================================

[23:17:02 287 Rx] I (127492) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (127492) wifi:<ba-del>idx:0, tid:0

[23:17:03 --- Rx] I (129012) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=82 GPIO39=1823 GPIO35=0
I (129112) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[23:17:03 101 Rx] 15:computeAndSendRms] DC1=189mV DC2=1642mV | RMS=23.1mV/17.2mV | A1=0.36A A2=0.40A [N=608]

[23:17:04 --- Rx] I (130252) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (130252) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (13022) TASK_MONITOR: AdcBurst             Ready      2          1496           I (130262) TASK_MONITOR: TaskMonitor         Running    1          198           
I (130272) TASK_MONITOR: IDLE1                Ready      0          916            
I (130282) TASK_MONITO: IDLE0                Ready      0          924            
I (130282) TASK_MONITOR: mqtt_task            Blocked    5         3004           
I (130292) TASK_MONITOR:taskfreezer          Blocked    1          3552           
I (130302) TAS_MONITOR: tiT                  Blocked    18         120          
I (130302) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (130312) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
I (130322) TASK_MONITOR: RelayManagerTas      Suspended  3          5208           
I (130332) TASK_MONITOR: PowerManagerTas      Suspended  3          1752           
I (130332) TASK_MONITOR: AdcReaderTask        Suspended  3          1648           
I (130342) TASK_MONITOR: ConfigSystemTas      Suspended  3          5852           
I (130352) TASK_MONITOR: MqttManage
[23:17:05 101 Rx] rTask      Suspended  3          4872           
I (130362) TASK_MONITOR: EspNowReceiverT      Suspended  3          1744           
I (130362) TASK_MONITOR: sys_evt              Blocked    20         396            
I (130372) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (130382) TASK_MONITOR: wifi                 Blocked    23         3608           
I (130392) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (130392) TASK_MONITOR: ipc0                 Suspended  24         508            
I (130402) TASK_MONITOR: ipc1                 Suspended  24         500            
I (130412) TASK_MONITOR: Free Heap: 102048 bytes, Min Free Heap: 92352 bytes
I (130412) TASK_MONITOR: =============================================================

[23:17:08 --- Rx] I (133422) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (133422) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (133422) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (133432) TASK_MONITOR: IDLE0                Ready      0          924            
I (133442) TASK_MONITOR: IDLE1                Ready      0          916            
I (133452) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (133452) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (133462) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (133472) TASK_MONITOR: tiT                  Blocked    18         1620           
I (133472) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
I (133482) TASK_MONITOR: RelayManagerTas      Suspended  3          5208           
I (133492) TASK_MONITOR: PowerManagerTas      Suspended  3          1752           
I (133502) TASK_MONITOR: AdcReaderTask        Suspended  3          1648           
I (133502) TASK_MONITOR: ConfigSystemTas     Suspended  3         5852           
I (133512) TASK_MONITOR: MqttManagerTak      Suspended  3          487           
I (133522) TASK_MONITOR: Es
[23:17:08 100 Rx] pNowReceiverT      Suspended  3         1744           
I (133532 TASK_MONITOR: sys_evt             Blocked    20        396            
I (133532) TASK_MONITOR: EStopTask            Blocked    24         180           
I (133542) TASKMONITOR: ip0                 Suspended  24        508            
I (133552) TASK_MONITOR: wifi                Bloced    23         3608           
I (133552) TASK_MONITO: esp_timer            Suspended  22         215           
I (133562) TASK_MONITOR: ipc1                Sspnded  24         500            
I (133572) TASK_MONITOR Tmr Svc              Blocked    1          1548           
I (133582) TASK_MONITOR: Fre Hap: 102068 bytes, Min Free eap: 92352 bytes
I (13358) TASK_MONITOR:==========================================================

[23:17:09 --- Rx] I (135012) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=88 GPIO39=1831 GPIO35=0
I (135112) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[23:17:09 100 Rx] 15:computeAndSendRms] DC1=189mV DC2=1641mV | RMS=16.8mV/26.4mV | A1=0.34A A2=0.45A [N=605]

[23:17:11 --- Rx] I (136592) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (136592) TASK_MONITOR: Task Name            State      Priority   Stack HighWater
I (136592) TASK_MONITOR: AdcBurst             Ready      2          1496          
I (136602) TASK_MONITO: TaskMonitor          Running    1          1984           
I (136612) TASK_MONITOR: IDLE1                Ready      0          916            
I (136622) TASK_MONITOR: IDLE0                Ready      0          924            
I (136622) TASK_MONITOR: tiT                  Blocked    18         1620           
I (136632) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (136642) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (136642) TASK_MONITOR: RelayManagerTas      Suspended  3          5208           
I (136652) TASK_MONITOR: PowerManagerTas      Suspended  3          1752           
I (136662) TASK_MONITOR: AdcReaderTask        Suspended  3          1648           
I (136672) TASK_MONITOR: ConfigSystemTas      Suspended  3          5852           
I (136672) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (136682) TASK_MONITOR: EspNowReceiverT      Suspended  3          1744           
I (136692) TASK_MONITOR: s
[23:17:11 101 Rx] ys_evt              Blocked    20         396            
I (136702) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (136702) TASK_MONITOR: ipc0                 Suspended  24         508            
I (136712) TASK_MONITOR: ipc1                 Suspended  24         500            
I (136722) TASK_MONITOR: wifi                 Blocked    23         3608           
I (136732) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (136732) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (136742) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
I (136752) TASK_MONITOR: Free Heap: 102068 bytes, Min Free Heap: 92352 bytes
I (136752) TASK_MONITOR: =============================================================

[23:17:14 --- Rx] I (139762) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (139762) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (139762) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (139772) TASK_MONITOR: IDLE0                Ready      0          924            
I (139782) TASK_MONITOR: IDLE1                Ready      0          916            
I (139792) TASK_MONITOR: tiT                  Blocked    18         1620           
I (139792) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (139802) TASK_MONITOR: mqtt_task            Blocked    5          304           
I (139812) TASKMONITOR: AdcBurst             Blockd   2         496           
I (139812) TASK_MONITOR: PowerManagerTas      Suspended  3          152           
I (13822) TASK_MONITOR: AdReaderTask        Suspended  3          1648           
I (139832) TASK_MONITOR: ConfigSystemTas      Suspended  3          585           
I (139842) TASK_MONITOR: MqttManaerTask      Suspended  3          4872          
I (139842) TAS_MOITO: EspNowReceiverT      Suspnded  3          1744           
I
[23:17:14 103 Rx]  (139852) TASK_MONITOR: sys_evt              Blocked    20         39           
I (139862) TASK_MONITOR: EStopTask            Blocked    2        1880           
I (139862) TASK_MONITO: ipc0                 Suspended  24         508            
I (139872) TASK_MONITOR: ipc1                 uspended  24        500            
I (139882) TASK_MONITOR: Tmr Svc             Blocked    1          1548           
I (139892) TASK_MONITOR: wifi                Bloked    23         3608          
I (139892) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (139902) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
I (139912) TASK_MONITOR: RelayManagerTas      Suspended  3          5208           
I (139922) TASK_MONITOR: Free Heap: 102068 bytes, Min Free Heap: 92352 bytes
I (139922) TASK_MONITOR: =============================================================

[23:17:15 --- Rx] I (141012) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=82 GPIO39=1827 GPIO35=0

[23:17:15 100 Rx] I (141112) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=187mV DC2=1644mV | RMS=16.9mV/29.6mV | A1=0.35A A2=0.48A [N=606]

[23:17:16 847 Rx] I (141962) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:168, winSize:64

[23:17:17 523 Rx] I (142492) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (142492) wifi:<ba-del>idx:0, tid:0

[23:17:17 425 Rx] I (142932) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (142932) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (142932) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (142942) TASK_MONITOR: IDLE0                Ready      0          924            
I (142952) TASK_MONITOR: IDLE1                Ready      0          916            
I (142962) TASK_MONITOR: tiT                  Blocked    18         1620           
I (142962) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (142972) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (142982) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (142992) TASK_MONITOR: AdcReaderTask        Suspended  3          1648           
I (142992) TASK_MONITOR: ConfigSystemTas      Suspended  3          5852           
I (143002) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (143012) TASK_MONITOR: EspNowReceiverT      Suspended  3          1744           
I (143012) TASK_MONITOR: sys_evt              Blocked    20         396            
I (143022) TASK_MONITOR: EStopTask            
[23:17:17 103 Rx] Blocked    24         1880           
I (143032) TASK_MONITOR: ipc0                 Suspended  24         508            
I (143042) TASK_MONITOR: ipc1                 Suspended  24         500            
I (143042) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (143052) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
I (143062) TASK_MONITOR: wifi                 Blocked    23         3608           
I (143072) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (143072) TASK_MONITOR: RelayManagerTas      Suspended  3          5208           
I (143082) TASK_MONITOR: PowerManagerTas      Suspended  3          1752           
I (143092) TASK_MONITOR: Free Heap: 102068 bytes, Min Free Heap: 92352 bytes
I (143102) TASK_MONITOR: =============================================================

[23:17:20 --- Rx] I (146102) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (146102) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (146102) TASK_MONITOR:TaskMonitor          Running    1          1984          
I (146112) TASK_MONITOR: IDLE0                Ready      0          924            
I (146122) TASK_MONITOR: IDLE1                Ready      0          916           
I (14612) TASK_MONITOR: tiT                  Bocked    18         1620          
I (46132) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (146142) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (146152) TASK_MONITOR: AdcBust             Blocked    2          149           
I (146152) TASK_MONITOR: ConfigSystemTas      Suspended  3         5852           
I (146162) TASK_MONITOR: MttManagerTask      Suspendd  3          4872           
I (146172 TASK_MONITOR: EspNowReceiverT      Suspended  3          1744           
I (14612) TASK_MONITOR: sys_evt              Blocked    20         396           
I (146182) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (146192) TASK_MONITOR: ipc0                Suspended  24    
[23:17:20 103 Rx]      508           
I (146202) TASK_MONITO: ipc1                 Suspendd  24         500           
I (146202) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (146212) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
I (146222) TASK_MONITOR: RelayManagerTas      Suspended  3          5208           
I (146232) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (146232) TASK_MONITOR: wifi                 Blocked    23         3608           
I (146242) TASK_MONITOR: PowerManagerTas      Suspended  3          1752           
I (146252) TASK_MONITOR: AdcReaderTask        Suspended  3          1648           
I (146262) TASK_MONITOR: Free Heap: 102068 bytes, Min Free Heap: 92352 bytes
I (146262) TASK_MONITOR: =============================================================

[23:17:21 798 Rx] I (147012) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=80 GPIO39=1827 GPIO35=0
I (147112) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=187mV DC2=1638mV | RMS=12.3mV/28.2mV
[23:17:21 105 Rx]  | A1=0.33A A2=0.52A [N=603]

[23:17:23 --- Rx] I (149272) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (149272) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (149272) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (149282) TASK_MONITOR: IDLE0                Ready      0          924            
I (149292) TASK_MONITOR: IDLE1                Ready      0          916            
I (149302) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (149302) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (149312) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (149322) TASK_MONITOR: tiT                  Blocked    18         1620           
I (149322) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (149332) TASK_MONITOR: EspNowReceiverT      Suspended  3          1744           
I (149342) TASK_MONITOR: sys_evt              Blocked    20         396            
I (149352) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (149352) TASK_MONITOR: ipc0                 Suspended  24         508            
I (149362) TASK_MONITOR: ipc1                 
[23:17:24 104 Rx] Suspended  24         500            
I (149372) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (149382) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
I (149382) TASK_MONITOR: RelayManagerTas      Suspended  3          5208           
I (149392) TASK_MONITOR: PowerManagerTas      Suspended  3          1752           
I (149402) TASK_MONITOR: wifi                 Blocked    23         3608           
I (49412) TASK_MONITOR esp_timer            Suspende  22         2156           
I (149412) TASK_ONITOR: AdcReaderTas       Suspended  3          1648           
I (149422) TASK_MOITOR: ConfigSystemTas      Suspended  3          5852           
I (19432) TASK_ONITOR:Fre Heap: 102068 bytes, Min Free Heap: 92352 bytes
I (14943) TASK_MONITOR: ===========================================================

[23:17:27 --- Rx] I (152352) TIMER_DBG: 100Hz timer alive | tick=15180 | heap_free=102068 min=92352
I (152442) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (152442) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (152442) T
[23:17:27 101 Rx] ASK_MONITOR: AdcBurst             Ready      2          1496           
I (152452) TASK_ONITOR: TaskMonitor         Running    1          1984           
I (152462) TASK_MONITOR: IDLE1                Ready     0         916            I (152462) TASK_MONITOR: IDLE0               Ready      0          924           
I (152472) TSK_ONITOR: taskfreezer          Blocked    1          3552           
I (152482) TSK_MOITOR: mqtt_task            Blocked    5          3004           
I (152492) TASK_MONITOR: tiT                  Blocked    18        1620           
I (152492) TASK_MONITOR: EspNoweceiverT      Suspended  3          1744           
I (152502) TASK_MONITOR: sys_evt             Blocked    20         396            
I (152512) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (152522) TASK_MONITOR: ipc0                 Suspended  24         508            
I (152522) TASK_MONITOR: ipc1                 Suspended  24         500            
I (152532) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (152542) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
I (152552) TASK_MONITOR: RelayManagerTas      Suspended  3          5208     
[23:17:27 102 Rx]       
I (152552) TASK_MONITOR: PowerManagerTas      Suspended  3          1752           
I (152562) TASK_MONITOR: AdcReaderTask        Suspended  3          1648           
I (152572) TASK_MONITOR: wifi                 Blocked    23         3608           
I (152572) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (152582) TASK_MONITOR: ConfigSystemTas      Suspended  3          5852           
I (152592) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (152602) TASK_MONITOR: Free Heap: 102068 bytes, Min Free Heap: 92352 bytes
I (152602) TASK_MONITOR: =============================================================

[23:17:27 438 Rx] I (153012) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=106 GPIO39=1834 GPIO35=0
I (153112) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=188mV DC2=1638mV | RMS=11.8mV/23.1mV
[23:17:27 100 Rx]  | A1=0.34A A2=0.41A [N=591]

[23:17:30 --- Rx] I (155612) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (155612) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (155612) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (155622) TASK_MONITOR: IDLE0                Ready      0          924            
I (155632) TASK_MONITOR: IDLE1                Ready      0          916            
I (155642) TASK_MONITOR: tiT                  Blocked    18         1620           
I (155642) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (155652) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (155662) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (155662) TASK_MONITOR: sys_evt              Blocked    20         396            
I (155672) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (155682) TASK_MONITOR: ipc0                 Suspended  24         508            
I (155692) TASK_MONITOR: ipc1                 Suspended  24         500            
I (155692) TASK_MONITOR: Tmr Svc              Blocked    1          1
[23:17:30 100 Rx] 548           
I (155702) TASK_MONITOR: WifiManagerTask      Suspended  5         5288           
I (155712) TASK_MONITOR: RelayManagerTas      Suspended  3          5208         I (155722) TSK_MONITOR: PowerManagerTas      Suspended  3          1752           
I (155722) TASK_MONITOR: AdcReaderTask       Suspended  3         1648           
I (155732) TASKMONITOR: ConfigSystemTas      Suspended  3         5852           
I (155742) TASK_MONTOR: wifi                 Blocked    23         3608           
I (15575) TASK_MONITOR: esp_timer            Suspended  22        2156           
I (155752) TASK_MONITOR: MqttManagerTask      Suspended  3          4872          
I (155762) TASK_MONITOR: EspNowRceiverT      Suspended  3          744           
I (155772) TASK_ONITOR: Free Heap: 10268 ytes, Mi Free Hap: 92352 bytes
I (155772) TASK_MONITOR: ==========================================================

[23:17:31 --- Rx] I (157312) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:169, winSize:64

[23:17:32 672 Rx] I (157992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (157992) wifi:<ba-del>idx:0, tid:0

[23:17:33 776 Rx] I (158782) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (158782) TASK_MONITOR: Task Name            State      Priority   tack High WaterI (158782) TASK_MONITOR: AdcBurst             Ready      2          1496           
I (158792) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (158802) TASK_MONITOR: IDLE1                Ready      0          916            
I (158812) TASK_MONITOR: IDLE0                Ready      0          924            
I (158812) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (158822) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (158832) TASK_MONITOR: tiT                  Blocked    18         1620           
I (158832) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (158842) TASK_MONITOR: ipc0                 Suspended  24         508            
I (158852) TASK_MONITOR: ipc1                 Suspended  24         500            
I (158862) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (158862) TASK_MONITOR: WifiManagerTask      Suspended  5          5288
[23:17:33 101 Rx]            
I (158872) TASK_MONITOR: RelayManagerTas      Suspended  3          5208           
I (158882) TASK_MONITOR: PowerManagerTas      Suspended  3          1752           
I (158892) TASK_MONITOR: AdcReaderTask        Suspended  3          1648           
I (158892) TASK_MONITOR: ConfigSystemTas      Suspended  3          5852           
I (158902) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (158912) TASK_MONITOR: wifi                 Blocked    23         3608           
I (158922) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (158922) TASK_MONITOR: EspNowReceiverT      Suspended  3          1744           
I (158932) TASK_MONITOR: sys_evt              Blocked    20         396            
I (158942) TASK_MONITOR: Free Heap: 102068 bytes, Min Free Heap: 92352 bytes
I (158942) TASK_MONITOR: =============================================================

[23:17:33 120 Rx] I (159012) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=92 GPIO39=1823 GPIO35=0
I (159112) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[23:17:33 104 Rx] 15:computeAndSendRms] DC1=188mV DC2=1641mV | RMS=15.6mV/15.1mV | A1=0.38A A2=0.41A [N=605]

[23:17:36 --- Rx] I (161952) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (161952) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (161952) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (161962) TASK_MONITOR: IDLE0                Ready      0          924            
I (161972) TASK_MONITOR: IDLE1                Ready      0          916            
I (161982) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (161982) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (161992) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (162002) TASK_MONITOR: tiT                  Blocked    18         1620           
I (162002) TASK_MONITOR: ipc0               Suspende  24         08            
I (162012) TASK_MONITOR: ipc1                Suspended 24         500            
I (16202) TASK_MONITOR: Tmr vc              Blocked    1          1548           
I (162032) TASK_MONITOR: WifiManagerTask     Suspended  5          5288           
I (162032) TASKMONITOR: RelayManagerTas      Suspended  3          5208          
I (162042) TASK_MONITOR: PowerManagerTas      Suspended  3          1752         
I (162052) TASK_MONITOR: AdcReaderTas
[23:17:36 101 Rx] k        Suspended  3          1648           
I (162062) TASK_MONITOR: ConfigSystemTas     uspended  3          5852           
I (162062) TASK_MONITOR: MqttManagerTask      Suspended  3         4872           
I (162072) TASK_MONITOR: EspNowReceiverT      Suspended  3          1744           
I (162082) TASK_MONITOR: wifi                 Blocked    23        3608          
I (162082 TASK_MONITOR: esp_timer            Suspnded  22         2156           
I (162092) TASK_MONITOR: sys_evt              Blocked    20         396           
I (162102) TASK_MONITOR: EStopTask            Blocked    24        1880           
I (162112) TASK_MONITOR: Free Heap: 101388 bytes, Min Free Heap: 92352 bytes
I (162112) TASK_MONITOR: =============================================================

[23:17:39 --- Rx] I (165012) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=93 GPIO39=1833 GPIO35=0
I (165112) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[23:17:39 104 Rx] 15:computeAndSendRms] DC1=188mV DC2=1641mV | RMS=13.4mV/18.4mV | A1=0.31A A2=0.37A [N=605]
I (165122) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (165122) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (165122) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (165132) TASK_MONITOR: IDLE0                Ready      0          924            
I (165142) TASK_MONITOR: IDLE1                Ready      0          916            
I (165152) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (165152) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (165162) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (165172) TASK_MONITOR: tiT                  Blocked    18         1620           
I (165182) TASK_MONITOR: ipc1                 Suspended  24         500            
I (165182) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (165192) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
I (165202) TASK_MONITOR: RelayManagerTas      Suspended  3          5208           
I (165212) TASK_MONITOR: PowerManagerTas      Suspended  3          1752           
I (165212) TASK_MONITOR: AdcReaderTask        Suspended  3          1648      
[23:17:39 104 Rx]      
I (165222) TASK_MONITOR: ConfigSystemTas      Suspended  3          5852           
I (165232) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (165232) TASK_MONITOR: EspNowReceiverT      Suspended  3          1744           
I (165242) TASK_MONITOR: sys_evt              Blocked    20         396            
I (165252) TASK_MONITOR: wifi                 Blocked    23         3608           
I (165262) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (165262) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (165272) TASK_MONITOR: ipc0                 Suspended  24         508            
I (165282) TASK_MONITOR: Free Heap: 102068 bytes, Min Free Heap: 92352 bytes
I (165292) TASK_MONITOR: =============================================================

[23:17:42 --- Rx] I (168292) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (168292) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (168292) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (168302) TASK_MONITOR: IDLE0                Ready      0          924            
I (168312) TASK_MONITOR: IDLE1                Ready      0          916            
I (168322) TAK_MONITOR: tiT                  Blocked    18         1620           
I (168322) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (168332) TASK_MNITOR: taskfreezer          Blocked    1          3552           
I (168342) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (16834) TASK_MONITOR: Tmr Svc              Blocked    1         1548           
I (168352) TASK_MONITOR: WifiManagerTask     Suspendd  5         5288           
I (168362) TASK_MONITOR: RelayManagerTa      Suspended  3          5208          
I 168372) TASK_MONITOR: PowerManagerTas      Suspended  3         1752           
I (168372) TASK_MONITOR: AdcReaderTask        Suspended  3          1648           
I (168382) TASK_MONITOR: ConfigSystemTas      Suspended  3         582           
I (168392) TASK_MONITOR: MqttManagerT
[23:17:43 101 Rx] ask      Suspended  3          4872         
I (168402) TASK_ONITOR: EspNowReceverT      Suspended  3          1744           
I (168402) TASK_ONITOR: sys_evt              Blocked    20         396            
I (168412) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (168422) TASK_MONITOR: wifi                 Blocked    23         3608           
I (168422) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (168432) TASK_MONITOR: ipc0                 Suspended  24         508            
I (168442) TASK_MONITOR: ipc1                 Suspended  24         500            
I (168452) TASK_MONITOR: Free Heap: 102068 bytes, Min Free Heap: 92352 bytes
I (168452) TASK_MONITOR: =============================================================

[23:17:45 --- Rx] I (171012) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=80 GPIO39=1841 GPIO35=0
I (171112) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=189mV DC2=1641mV | RMS=16.2mV/15.5mV
[23:17:45 102 Rx]  | A1=0.35A A2=0.38A [N=608]

[23:17:46 337 Rx] I (171462) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (171462) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (171462) TASK_MONITOR: mqtt_task            Ready      5          3004           
I (171472) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (171482) TASK_MONITOR: IDLE0                Ready      0          924            
I (171492) TASK_MONITOR: IDLE1                Ready      0          916            
I (171492) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (171502) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (171512) TASK_MONITOR: tiT                  Blocked    18         1620           
I (171522) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
I (171522) TASK_MONITOR: RelayManagerTas      Suspended  3          5208           
I (171532) TASK_MONITOR: PowerManagerTas      Suspended  3          1752           
I (171542) TASK_MONITOR: AdcReaderTask        Suspended  3          1648           
I (171542) TASK_MONITOR: ConfigSystemTas      Suspended  3          5
[23:17:46 106 Rx] 852           
I (171552) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (171562) TASK_MONITOR: EspNowReceiverT      Suspended  3          1744           
I (171572) TASK_MONITOR: sys_evt              Blocked    20         396            
I (171572) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (171582) TASK_MONITOR: ipc0                 Suspended  24         508            
I (171592) TASK_MONITOR: wifi                 Blocked    23         3608           
I (171602) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (171602) TASK_MONITOR: ipc1                 Susended  24         500            
I (171612) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (171622) TASK_MONITOR: Free Heap: 102068 bytes, Min Free Heap: 92352 bytes
I (171622 TASK_MONITOR: ============================================================

[23:17:47 --- Rx] I (172682) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:170, winSize:64

[23:17:48 806 Rx] I (173492) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (173492) wifi:<ba-del>idx:0, tid:0

[23:17:49 --- Rx] I (174632) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (174632) TASK_MONITOR: Task Name           State      Pririty   Stack High Water
I (174632) TASK_MONITOR: AdcBurst            Ready      2          1496           
I (174642) TASK_MONITOR: TaskMonitor         Running    1          1984          
I (174652) TASK_MONTOR: DLE1               Ready     0          916            
I (174652) TASK_MONITOR: IDLE0                Ready      0          924           
I (174662) TASK_MONITOR: tiT                  Blocked    18         1620           
I (174672) TASK_MONITOR: taskfreezer          Blocked    1          3552          
I (174682) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (174682) TASK_MONIOR: RelayManagerTas      Suspended  3          5208           
I (174692) TASK_MONITR: PowerManagerTas      Suspended  3          1752           
I (174702) TASK_ONITOR: AdcReaderTask        Suspended  3          1648           
I (174712) TASK_MONITOR: ConfigSystemTas      Suspended  3          5852           
I (174712) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (174722) TASK_MONITOR: EspNowReceiverT      Suspended  3          1744           
I (174732) TASK_MONITOR: sys_evt      
[23:17:49 105 Rx]         Blocked    20         396            
I (174742) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (174742) TASK_MONITOR: ipc0                 Suspended  24         508            
I (174752) TASK_MONITOR: ipc1                 Suspended  24         500            
I (174762) TASK_MONITOR: wifi                 Blocked    23         3608           
I (174772) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (174772) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (174782) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
I (174792) TASK_MONITOR: Free Heap: 102068 bytes, Min Free Heap: 92352 bytes
I (174792) TASK_MONITOR: =============================================================

[23:17:51 --- Rx] I (177012) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=100 GPIO39=1827 GPIO35=0
I (177112) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=188mV DC2=1641mV | RMS=19.1mV/24.4mV | A1=0.38A A2=0.44A [N=605]

[23:17:52 777 Rx] I (177802) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (177802) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (177802) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (177812) TASK_MONITOR: IDLE0                Ready      0          924            
I (177822) TASK_MONITOR: IDLE1                Ready      0          916            
I (177832) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (177832) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (177842) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (177852) TASK_MONITOR: tiT                  Blocked    18         1620           
I (177852) TASK_MONITOR: PowerManagerTas      Suspended  3          1752           
I (177862) TASK_MONITOR: AdcReaderTask        Suspended  3          1648           
I (177872) TASK_MONITOR: ConfigSystemTas      Suspended  3          5852           
I (177882) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (177882) TASK_MONITOR: EspNowReceiverT      Suspended  3          1744           
I (177892) TASK_MONITOR: sys_evt              Blocked    20         396            
I (177902) TASK_MONITOR
[23:17:52 100 Rx] : EStopTask            Blocked    24         1880           
I (177912) TASK_MONITOR: ipc0                 Suspended  24         508            
I (77912) TASK_MOITOR: ipc1                 Suspended  24         500            
I (177922) TASK_MONITOR: Tmr Svc             Blocked    1          1548           
I (177932) TASK_MONITOR: wifi                 Blocked   23         3608          
I (177942) TASK_MONITOR: esp_timer            Suspended  22         2156          
I (177942) TASK_MONITOR: WifiManagerask     Suspended  5          5288          
I (177952) TASK_MONITR: elayManagerTas      Suspended  3          5208           
I (177962) TASK_MONITOR: Free Heap: 102068 bytes, Min Free eap: 92352 bytes
I (177962) TASK_MONITO: ============================================================

[23:17:55 --- Rx] I (180972) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (180972) TASK_MONITOR: Task Name            State      Priority   Stack Hih Water
I (180972) TASK_ONITOR: AdcBurst             Reay                1496          
I (180982) TASK_MONITOR: TaskMonitor         Running    1          1984           
I (180992) TASK_MONITOR: IDLE1               Ready      0          916            
I (18092) TASK_ONTOR: IDLE0                Ready      0          924            
I (181002) TASK_MONIOR:mqtt_task            Blocked    5          3004           
I (181012) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (181022) TASK_MONITOR: tiT                  Blocked    18         1620           
I (181022) TASK_MONITOR: AdcReaderTask        Suspended  3          1648           
I (181032) TASK_MONITOR: ConfigSystemTas      Suspended  3          5852           
I (181042) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (181052) TASK_MONITOR: EspNowReceiverT      Suspended  3          1744           
I (181052) TASK_MONITOR: sys_evt              Blocked    20         396            
I (181062) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (181072) TASK_MONITOR: ipc0                 Suspended  24         508            
I (181082) TA
[23:17:55 103 Rx] SK_MONITOR: ipc1                 Suspended  24         500            
I (181082) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (181092) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
I (181102) TASK_MONITOR: wifi                 Blocked    23         3608           
I (181112) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (181112) TASK_MONITOR: RelayManagerTas      Suspended  3          5208           
I (181122) TASK_MONITOR: PowerManagerTas      Suspended  3          1752           
I (181132) TASK_MONITOR: Free Heap: 102068 bytes, Min Free Heap: 92352 bytes
I (181132) TASK_MONITOR: =============================================================

[23:17:57 --- Rx] I (182352) TIMER_DBG: 100Hz timer alive | tick=18180 | heap_free=102068 min=92352

[23:17:57 656 Rx] I (183012) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=72 GPIO39=1825 GPIO35=0
I (183112) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=188mV DC2=1634mV | RMS=11.7mV/23.2mV | A1=0.36A A2=0.44A [N=591]

[23:17:58 --- Rx] I (184142) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (184142) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (184142) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (184152) TASK_MONITOR: IDLE0                Ready      0          924            
I (184162) TASK_MONITOR: IDLE1                Ready      0          916            
I (184172) TASK_MONITOR: tiT                  Blocked    18         1620           
I (184172) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (184182) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (184192) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (184192) TASK_MONITOR: ConfigSystemTas      Suspended  3          5852           
I (184202) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (184212) TASK_MONITOR: EspNowReceiverT      Suspeded  3          1744           
I (184222) TASK_MONITOR: sys_evt              Blocked    20         396           
I (184222) TASK_MONITOR: EStopTask            Blocked    2         1880          
I (184232) TASK_MONITOR: ipc0                 Suspnded  24         508            
I (184242) TASK_MONITOR: ipc
[23:17:58 100 Rx] 1                 Suspended  24        500            
I (184252) TASK_MONITOR: Tmr Svc             Blocked    1         1548           
I (184252) TASK_MOITOR: WifiManagerTask    Suspended  5          5288           
I (184262) TAK_MNITOR: RelayManagerTas      Suspended  3          5208           
I (184272) TASK_MONITOR: wifi                Blocked    23         3608           
I (184272) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (184282) TASK_MONITOR: PowerManagerTas     Suspended  3          1752           
I (184292) TASK_MONITOR: AdcReaderTask        Suspended  3          1648          
I (184302) TASK_MONITOR: Free Heap: 102068bytes, Min Free Heap: 92352 btes
I (184302) TASK_MONITOR: =============================================================

[23:18:01 --- Rx] I (187312) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (187312) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (187312) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (187322) TASK_MONITOR: IDLE0                Ready      0          924            
I (187332) TASK_MONITOR: IDLE1                Ready      0          916            
I (187342) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (187342) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (187352) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (187362) TASK_MONITOR: tiT                  Blocked    18         1620           
I (187362) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (187372) TASK_MONITOR: EspNowReceiverT      Suspended  3          1744           
I (187382) TASK_MONITOR: sys_evt              Blocked    20         396            
I (187392) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (187392) TASK_MONITOR: ipc0                 Suspended  24         508            
I (187402) TASK_MONITOR: ipc1                 
[23:18:02 104 Rx] Suspended  24         500            
I (187412) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (187422) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
I (187422) TASK_MONITOR: RelayManagerTas      Suspended  3          5208           
I (187432) TASK_MONITOR: PowerManagerTas      Suspended  3          1752           
I (187442) TASK_MONITOR: wifi                 Blocked    23         3608           
I (187452) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (187452) TASK_MONITOR: AdcReaderTask        Suspended  3          1648           
I (187462) TASK_MONITOR: ConfigSystemTas      Suspended  3          5852           
I (187472) TASK_MONITOR: Free Heap: 102068 bytes, Min Free Heap: 92352 bytes
I (187482) TASK_MONITOR: =============================================================

[23:18:02 625 Rx] I (188042) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:171, winSize:64

[23:18:03 938 Rx] I (188992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (188992) wifi:<ba-del>idx:0, tid:0
I (189012) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=97 GPIO39=1795 GPIO35=0

[23:18:03 113 Rx] I (189112) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:215:computeAndSendRms] DC1=188mV DC2=1631mV | RMS=14.8mV/27.7mV | A1=0.33A A2=0.44A [N=586]

[23:18:05 --- Rx] I (190482) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (190482) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (190482) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (190492) TASK_MONITOR: IDLE0                Ready      0          924            
I (190502) TASK_MONITOR: IDLE1                Ready      0          916            
I (190512) TASK_MONITOR: tiT                Blocked    18         1620           
I (190512) TAS_MONITOR: taskfreeze          Blocked    1         3552           
I (190522) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (190532) TASK_MONITOR: AdcBurst             Blocked    2          1496          
I (190532) TASK_MOITOR: EspNowReceiver      Suspended  3         1744           
I (190542) TASK_MONITOR: sys_evt              Blocked    20         396            
I (190552) TSK_MONITOR: EStopTak            Blocked    24         1880           
I (190562) TASK_MONITOR: ipc0                 Suspended  24        508            
I (190562) TAK_MONITOR: ipc1                 Suspended  24         500            
I (190572) TASK_MONTOR Tmr Svc              Blocked    1          1548          
I (19582) TASK_MONITOR: WifiManagerTask
[23:18:05 100 Rx]      Suspended  5          5288          
I (190592) TASK_ONITOR: RlayManagerTas      Suspended  3          5208           
I (90592) TASK_MONITOR: PowerManaerTas      Suspended  3          1752           I (190602) TASK_MONITOR: AdcReaderTask       Suspended  3          1648           
I (190612) TASK_MONITOR: wifi                 Blocked    23         3608           
I (190612) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (190622) TASK_MONITOR: ConfigSystemTas      Suspended  3          5852           
I (190632) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (190642) TASK_MONITOR: Free Heap: 102052 bytes, Min Free Heap: 92352 bytes
I (190642) TASK_MONITOR: =============================================================

[23:18:08 --- Rx] I (193652) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (193652) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (193652) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (193662) TASK_MONITOR: IDLE0                Ready      0          924            
I (193672) TASK_MONITOR: IDLE1                Ready      0          916            
I (193682) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (193682) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (193692) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (193702) TASK_MONITOR: tiT                  Blocked    18         1620           
I (193702) TASK_MONITOR: sys_evt              Blocked    20         396            
I (193712) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (193722) TASK_MONITOR: ipc0                 Suspended  24         508            
I (193732) TASK_MONITOR: ipc1                 Suspended  24         500            
I (193732) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (193742) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
I (193752) TASK_MONITOR
[23:18:08 103 Rx] : RelayManagerTas      Suspended  3          5208           
I (193762) TASK_MONITOR: PowerManagerTas      Suspended  3          1752           
I (193762) TASK_MONITOR: AdcReaderTask        Suspended  3          1648           
I (193772) TASK_MONITOR: ConfigSystemTas      Suspended  3          5852           
I (193782) TASK_MONITOR: wifi                 Blocked    23         3608           
I (193792) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (193792) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (193802) TASK_MONITOR: EspNowReceiverT      Suspended  3          1744          
I (193812) TASK_MONITOR: Free Heap: 10268 bytes, Min FreeHeap: 92352 bytes
I (193812) ASK_MONITOR: =============================================================

[23:18:09 --- Rx] I (195012) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=82 GPIO39=1825 GPIO35=0
I (195112) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[23:18:09 102 Rx] 15:computeAndSendRms] DC1=188mV DC2=1637mV | RMS=18.5mV/18.2mV | A1=0.29A A2=0.41A [N=604]

[23:18:11 --- Rx] I (196822) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (196822) TASK_MONITOR: Task Name            State      Priorty   Stack High Water
I (196822) TASK_MONITOR: AdcBurst             Ready      2          1496           
I (196832) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (196842) TASK_MONITOR: IDL1                Ready      0          916            
I (196852) TASK_MONITOR: IDLE0                Ready      0          924            
I (196852) TASK_MONITR: taskfreezer          Blocked    1          3552         
I (196862) TASK_MONITO: mqtt_task           Blocked    5          3004           
I (196872) TASK_MONITOR: tiT                  Blocked    18         1620           
I (196872) TASK_MONITOR: EStopTask            Blocked    24        1880           
I (196882) TASK_MONITOR: ip0                 Suspended  24         508            
I 196892) TASK_MONITOR: ipc1                Suspended  24         500           
I (196902) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (196902) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
[23:18:11 104 Rx] 
I (196912) TASK_MONITOR: RelayManagerTas      Suspended  3          5208           
I (196922) TASK_MONITOR: PowerManagerTas      Suspended  3          1752           
I (196932) TASK_MONITOR: AdcReaderTask        Suspended  3          1648           
I (196932) TASK_MONITOR: ConfigSystemTas      Suspended  3          5852           
I (196942) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (196952) TASK_MONITOR: wifi                 Blocked    23         3608           
I (196952) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (196962) TASK_MONITOR: EspNowReceiverT      Suspended  3          1744           
I (196972) TASK_MONITOR: sys_evt              Blocked    20         396            
I (196982) TASK_MONITOR: Free Heap: 102068 bytes, Min Free Heap: 92352 bytes
I (196982) TASK_MONITOR: =============================================================

[23:18:14 --- Rx] I (199992) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (199992) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (199992) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (200002) TASK_MONITOR: IDLE0                Ready      0          924            
I (200012) TASK_MONITOR: IDLE1                Ready      0          916            
I (200022) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (200022) TASK_MONITOR: tiT                  Blocked    18         1620           
I (200032) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (200042) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (200042) TASK_MONITOR: ipc0                 Suspended  24         508            
I (200052) TASK_MONITOR: ipc1                 Suspended  24         500            
I (200062) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (200072) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
I (200072) TASK_MONITOR: RelayManagerTas      Suspended  3          5208           
I (200082) TASK_MONITOR: PowerManagerTas      Suspended  3          1752           
I (200092) TASK_MONITOR: AdcReaderTask        Suspended  3          1648           

[23:18:14 102 Rx] I (200102) TASK_MONITOR: ConfigSystemTas      Suspended  3          5852           
I (200102) TASK_MONITOR: MqttManagerTask      Suspended  3          4872          
I (200112) TASK_MONITOR: EspNowReceiverT      Suspended  3         1744           
I (200122) TASK_MONITOR: wifi                Blocked    23         3608           
I (200132) TASK_MONITOR: ep_timer            Suspended 22         2156           
I (200132) TASK_MONITOR: sys_evt             Blocked    20         396           
I (200142) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (200152) TASK_MONITOR: Free Hap: 10268 bytes, Min Free Heap: 92352 bytes
I 200152) TASK_MONITOR: ============================================================

[23:18:15 895 Rx] I (201012) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=113 GPIO39=1827 GPIO35=0
I (201112) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[23:18:15 102 Rx] 15:computeAndSendRms] DC1=188mV DC2=1641mV | RMS=12.9mV/20.9mV | A1=0.28A A2=0.44A [N=612]

[23:18:17 --- Rx] I (203162) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (203162) TASK_MONITOR: Task Name            State      riority   Stack High Water
I (203162) TASK_MONITOR: Adcurst             Ready      2         1496          
I (203172)TASK_MONITOR: TaskMonitor          Running    1         1984           
I (203182) TASK_MONITOR: IDLE1                Ready      0          916            
I (203192) TASK_MONITOR: IDLE0                Ready      0          924            
I (203192) TASK_MONITOR: tiT                  Blocked    18        1620           
I (203202 TSK_ONITOR: taskfreezer          Blocked    1          3552           
I (203212) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (203212) TASK_MONITOR: ipc1                 Suspended  24         500            
I (203222) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (203232) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
I (203242) TASK_MONITOR: RelayManagerTas      Suspended  3          5208           
I (203242) TASK_MONITOR: PowerManagerTas      Suspended  3          1752           
I (203252) TASK_MONITOR: AdcReaderTask        Suspended 
[23:18:17 103 Rx]  3          1648           
I (203262) TASK_MONITOR: ConfigSystemTas      Suspended  3          5852           
I (203272) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (203272) TASK_MONITOR: EspNowReceiverT      Suspended  3          1744           
I (203282) TASK_MONITOR: sys_evt              Blocked    20         396            
I (203292) TASK_MONITOR: wifi                 Blocked    23         3608           
I (203302) TASK_MONITOR: esp_timer            Suspended  22         2156           
I (203302) TASK_MONITOR: EStopTask            Blocked    24         1880           
I (203312) TASK_MONITOR: ipc0                 Suspended  24         508            
I (203322) TASK_MONITOR: Free Heap: 100508 bytes, Min Free Heap: 92352 bytes
I (203322) TASK_MONITOR: =============================================================

[23:18:18 130 Rx] I (203402) wifi:<ba-add>idx:0 (ifx:0, 1c:3b:f3:6a:77:74), tid:0, ssn:172, winSize:64

[23:18:18 584 Rx] I (203992) wifi:[ADDBA]RX DELBA, reason:39, delete tid:0, initiator:1(originator)
I (203992) wifi:<ba-del>idx:0, tid:0

[23:18:21 --- Rx] I (206332) TASK_MONITOR: ==================== TASK MONITOR SYSTEM ====================
I (206332) TASK_MONITOR: Task Name            State      Priority   Stack High Water
I (206332) TASK_MONITOR: TaskMonitor          Running    1          1984           
I (206342) TASK_MONITOR: IDLE0                Ready      0          924            
I (206352) TASK_MONITOR: IDLE1                Ready      0          916            
I (206362) TASK_MONITOR: mqtt_task            Blocked    5          3004           
I (206362) TASK_MONITOR: tiT                  Blocked    18         1620           
I (206372) TASK_MONITOR: taskfreezer          Blocked    1          3552           
I (206382) TASK_MONITOR: AdcBurst             Blocked    2          1496           
I (206392) TASK_MONITOR: Tmr Svc              Blocked    1          1548           
I (206392) TASK_MONITOR: WifiManagerTask      Suspended  5          5288           
I (206402) TASK_MONITOR: RelayManagerTas      Suspended  3          5208          
I (206412) TASK_MONITOR: PowerManagerTas      Suspended  3         1752           
I (206412) TASK_MONITOR: AcReaderTask        Suspended  3          1648           
I (206422) TASK_MONITOR: ConfigSystemTas      Sus
[23:18:21 102 Rx] pended  3          5852          
I (206432) TASK_MONITOR: MqttManagerTask      Suspended  3          4872           
I (206442) TAS_MONITOR: EspNowReceiverT      Suspended  3          1744           
I (206442) TASK_MONITOR: sys_evt             Blocke    20        396            
I (206452) TASK_MONITOR: EStopTask            Bloked    24         1880          
I (206462) TASK_MONITR: wifi                Blocked    23         3608           
I (206472) TSK_MONITOR: esp_timer            Suspeded  22         2156           
I (206472) TASK_MOITOR: ipc0                 Suspended  24         508            
I (206482) TASK_MONITOR: ipc1                 Suspended  24         500            
I (206492) TASKMONITOR: Free Heap: 102068 bytes, Min Free Heap: 92352 bytes
I (20692) TASK_MONITOR: =============================================================

[23:18:21 567 Rx] I (207012) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:149:computeAndSendRms] [RAW] GPIO36=79 GPIO39=1813 GPIO35=0
I (207112) [debug]AdcReaderTask: [src/task/adcreadertask.cpp:2
[23:18:21 101 Rx] 15:computeAndSendRms] DC1=189mV DC2=1640mV | RMS=13.9mV/15.0mV | A1=0.35A A2=0.42A [N=605]

