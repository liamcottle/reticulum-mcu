#pragma once

// #define LILYGO_TBeam_V0_7
//#define LILYGO_TBeam_V1_X
// #define LILYGO_T3_V1_0
// #define LILYGO_T3_V1_3
// #define LILYGO_T3_V1_6
// #define LILYGO_T3_V1_6_TXCO
// #define LILYGO_T3_V2_0
// #define LILYGO_T3_S3_V1_0
// #define LILYGO_T3_S3_V1_2
// #define HELTEC_WIFI_LORA_32_V3


#define UNUSE_PIN                   (0)

#if defined(LILYGO_TBeam_V0_7)
#define GPS_RX_PIN                  12
#define GPS_TX_PIN                  15
#define BUTTON_PIN                  39
#define BUTTON_PIN_MASK             GPIO_SEL_39
#define I2C_SDA                     21
#define I2C_SCL                     22

#define RADIO_SCLK_PIN               5
#define RADIO_MISO_PIN              19
#define RADIO_MOSI_PIN              27
#define RADIO_CS_PIN                18
#define RADIO_DIO0_PIN               26
#define RADIO_RST_PIN               23
#define RADIO_DIO1_PIN              33
#define RADIO_BUSY_PIN              32

#define BOARD_LED                   14
#define LED_ON                      HIGH
#define LED_OFF                     LOW

#define GPS_BAUD_RATE               9600
#define HAS_GPS
#define HAS_DISPLAY                 //Optional, bring your own board, no OLED !!

#elif defined(LILYGO_TBeam_V1_X)

#define GPS_RX_PIN                  34
#define GPS_TX_PIN                  12
#define BUTTON_PIN                  38
#define BUTTON_PIN_MASK             GPIO_SEL_38
#define I2C_SDA                     21
#define I2C_SCL                     22
#define PMU_IRQ                     35

#define RADIO_SCLK_PIN               5
#define RADIO_MISO_PIN              19
#define RADIO_MOSI_PIN              27
#define RADIO_CS_PIN                18
#define RADIO_DIO0_PIN               26
#define RADIO_RST_PIN               23
#define RADIO_DIO1_PIN              33
#define RADIO_BUSY_PIN              32

#define BOARD_LED                   4
#define LED_ON                      LOW
#define LED_OFF                     HIGH

#define GPS_BAUD_RATE               9600
#define HAS_GPS
#define HAS_DISPLAY                 //Optional, bring your own board, no OLED !!
#define HAS_PMU
#elif defined(LILYGO_T3_V1_0)
#define I2C_SDA                     4
#define I2C_SCL                     15
#define OLED_RST                    16

#define RADIO_SCLK_PIN              5
#define RADIO_MISO_PIN              19
#define RADIO_MOSI_PIN              27
#define RADIO_CS_PIN                18
#define RADIO_DIO0_PIN               26
#define RADIO_RST_PIN               14
#define RADIO_DIO1_PIN              33
#define RADIO_BUSY_PIN              32

#define HAS_DISPLAY


#elif defined(LILYGO_T3_V1_3)

#define I2C_SDA                     21
#define I2C_SCL                     22
#define OLED_RST                    UNUSE_PIN

#define RADIO_SCLK_PIN              5
#define RADIO_MISO_PIN              19
#define RADIO_MOSI_PIN              27
#define RADIO_CS_PIN                18
#define RADIO_DIO0_PIN               26
#define RADIO_RST_PIN               14
#define RADIO_DIO1_PIN              33
#define RADIO_BUSY_PIN              32

#define ADC_PIN                     35

#define HAS_DISPLAY

#elif defined(LILYGO_T3_V1_6)
#define I2C_SDA                     21
#define I2C_SCL                     22
#define OLED_RST                    UNUSE_PIN

#define RADIO_SCLK_PIN              5
#define RADIO_MISO_PIN              19
#define RADIO_MOSI_PIN              27
#define RADIO_CS_PIN                18
#define RADIO_DIO0_PIN               26
#define RADIO_RST_PIN               23
#define RADIO_DIO1_PIN              33
#define RADIO_BUSY_PIN              32

#define SDCARD_MOSI                 15
#define SDCARD_MISO                 2
#define SDCARD_SCLK                 14
#define SDCARD_CS                   13

#define BOARD_LED                   25
#define LED_ON                      HIGH

#define ADC_PIN                     35

#define HAS_SDCARD
#define HAS_DISPLAY

#elif defined(LILYGO_T3_V1_6_TXCO)


#define I2C_SDA                     21
#define I2C_SCL                     22
#define OLED_RST                    UNUSE_PIN

#define RADIO_SCLK_PIN              5
#define RADIO_MISO_PIN              19
#define RADIO_MOSI_PIN              27
#define RADIO_CS_PIN                18
#define RADIO_DIO0_PIN              26
#define RADIO_RST_PIN               23
// #define RADIO_DIO1_PIN              33
/*
* In the T3 V1.6.1 TXCO version, Radio DIO1 is connected to Radio’s
* internal temperature-compensated crystal oscillator enable
* */
#define RADIO_TXCO_ENABLE           33
#define RADIO_BUSY_PIN              32

#define SDCARD_MOSI                 15
#define SDCARD_MISO                 2
#define SDCARD_SCLK                 14
#define SDCARD_CS                   13

#define BOARD_LED                   25
#define LED_ON                      HIGH

#define ADC_PIN                     35

#define HAS_SDCARD
#define HAS_DISPLAY

#elif defined(LILYGO_T3_V2_0)
#define I2C_SDA                     21
#define I2C_SCL                     22
#define OLED_RST                    UNUSE_PIN

#define RADIO_SCLK_PIN              5
#define RADIO_MISO_PIN              19
#define RADIO_MOSI_PIN              27
#define RADIO_CS_PIN                18
#define RADIO_DIO0_PIN               26
#define RADIO_RST_PIN               14
#define RADIO_DIO1_PIN              UNUSE_PIN
#define RADIO_BUSY_PIN              UNUSE_PIN

#define SDCARD_MOSI                 15
#define SDCARD_MISO                 2
#define SDCARD_SCLK                 14
#define SDCARD_CS                   13

#define BOARD_LED                   0
#define LED_ON                      LOW

#define HAS_DISPLAY
#define HAS_SDCARD

#elif defined(LILYGO_T3_S3_V1_0) || defined(LILYGO_T3_S3_V1_2)

#define I2C_SDA                     18
#define I2C_SCL                     17
#define OLED_RST                    UNUSE_PIN

#define RADIO_SCLK_PIN              5
#define RADIO_MISO_PIN              3
#define RADIO_MOSI_PIN              6
#define RADIO_CS_PIN                7
#define RADIO_DIO1_PIN              33
#define RADIO_BUSY_PIN              34
#define RADIO_RST_PIN               8

//!SX1276/78 module only
#define RADIO_DIO0_PIN              9
#define RADIO_DIO3_PIN              21
#define RADIO_DIO4_PIN              10
#define RADIO_DIO5_PIN              36
//! end

#define SDCARD_MOSI                 11
#define SDCARD_MISO                 2
#define SDCARD_SCLK                 14
#define SDCARD_CS                   13

#define BOARD_LED                   37
#define LED_ON                      HIGH

#define BAT_ADC_PIN                1
#define BUTTON_PIN                 0

#define HAS_SDCARD
#define HAS_DISPLAY
#elif defined(HELTEC_WIFI_LORA_32_V3)

// Heltec V3.1
// Pin Sources
// - https://github.com/markqvist/RNode_Firmware/blob/master/Boards.h
// - https://github.com/ropg/heltec_esp32_lora_v3/blob/main/src/heltec_unofficial.h
// Radio
#define USE_SX1262
#define RADIO_SCLK_PIN               9
#define RADIO_MISO_PIN              11
#define RADIO_MOSI_PIN              10
#define RADIO_CS_PIN                 8
#define RADIO_DIO0_PIN              14
#define RADIO_RST_PIN               12
#define RADIO_DIO1_PIN              14
#define RADIO_BUSY_PIN              13
// LED
#define BOARD_LED                   35
#define LED_ON                      HIGH
#define LED_OFF                     LOW
// OLED Screen
#define HAS_DISPLAY
#define I2C_SDA                     17
#define I2C_SCL                     18
#define OLED_RST                    21
// Button
#define BUTTON_PIN                 0

#elif defined(RAK4631)

// RAK Wireless WisBlock with RAK4631
// Pin Sources
// - https://github.com/meshtastic/firmware/blob/master/variants/rak4631/variant.h
// Radio
#define USE_SX1262
#define RADIO_SCLK_PIN              43
#define RADIO_MISO_PIN              45
#define RADIO_MOSI_PIN              44
#define RADIO_CS_PIN                42
#define RADIO_DIO0_PIN              47
#define RADIO_RST_PIN               38
#define RADIO_DIO1_PIN              47
#define RADIO_BUSY_PIN              46
// LED
#define BOARD_LED                   35
#define LED_ON                      HIGH
#define LED_OFF                     LOW
// OLED Screen (none)
// Button (none)
#define BUTTON_PIN                 0

#else
#error "For the first use, please define the board version and model in <utilities. h>"
#endif
