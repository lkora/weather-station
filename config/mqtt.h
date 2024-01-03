#ifndef CONFIG_MQTT_H_
#define CONFIG_MQTT_H_

#define ENABLE_MQTT       false

#if ENABLE_MQTT
    // MQTT
    const char* mqtt_broker           = "x.x.x.x"; // IP address of your MQTT broker
    const char* mqtt_username         = "";              // Your MQTT username
    const char* mqtt_password         = "";              // Your MQTT password
    #define     REPORT_MQTT_SEPARATE  true               // Report each value to its own topic
    #define     REPORT_MQTT_JSON      true               // Report all values in a JSON message
    const char* status_topic          = "events";        // MQTT topic to report startup
#endif

#endif
