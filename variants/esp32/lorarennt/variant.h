#define HW_VENDOR meshtastic_HardwareModel_PRIVATE_HW

#define NO_EXT_GPIO 1
#define NO_GPS 1

#define HAS_GPS 0 // GPS is not equipped
#undef GPS_RX_PIN
#undef GPS_TX_PIN

// Green / Lora = PIN 22 / GPIO2, Yellow / Wifi = PIN 23 / GPIO0, Blue / BLE = PIN 25 / GPIO16
//#define LED_PIN 22
//#define WIFI_LED 23
//#define BLE_LED 25

// ESP32-D0WDQ6 direct pins SX1276
#define USE_RF95
#define LORA_DIO0 20
#define LORA_DIO1 07
#define LORA_DIO2 08
#define LORA_SCK 14
#define LORA_MISO 12
#define LORA_MOSI 13
#define LORA_CS 15

// several things are not possible with JTAG enabled
#ifndef USE_JTAG
#define LORA_RESET 19 // LoRa Reset shares a pin with MTMS
#define I2C_SDA 21     // SD_DATA1 going to W25Q64, but
#define I2C_SCL 22    // SD_CMD shared a pin with MTD0
#endif


