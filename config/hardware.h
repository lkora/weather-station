#ifndef CONFIG_HARDWARE_H_
#define CONFIG_HARDWARE_H_

#define     MODE_BUTTON_PIN         D3               // GPIO0 Pushbutton to GND
#define     ESP_WAKEUP_PIN          D0               // To reset ESP8266 after deep sleep

// I2C
#define I2C_SDA_PIN       4
#define I2C_SCL_PIN       5

// PMS5003
#define     PMS_RX_PIN            13                // Rx from PMS (== PMS Tx)
#define     PMS_TX_PIN            15                // Tx to PMS (== PMS Rx)
#define     PMS_BAUD_RATE         9600              // PMS5003 uses 9600bps

// BME280 - hygrometer, thermometer, barometer
#define     BME280_I2C_ADDR       0x76              // // I2C address used by the BME280

// SSD1306 - OLED Display
#define     SCREEN_WIDTH          128               // OLED display width (pixels)
#define     SCREEN_HEIGHT         32                // OLED display height (pixels)
#define     OLED_RESET            -1                // Reset pin (or -1 if sharing Arduino reset pin)
#define     SSD1306_I2C_ADDR      0x3C              // I2C address used by the SSD1306

#endif
