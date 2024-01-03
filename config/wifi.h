#ifndef CONFIG_WIFI_H_
#define CONFIG_WIFI_H_

// Use WiFi. If this is off, MQTT and web server won't run
#define ENABLE_WIFI       true


#if ENABLE_WIFI
    // WiFi config
    const char* ssid                  = "YOUR SSID";     // Your WiFi SSID
    const char* password              = "YOUR PASS";     // Your WiFi password
    
#endif


#endif