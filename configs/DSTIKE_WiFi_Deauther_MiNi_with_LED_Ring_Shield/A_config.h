#ifndef config_h
#define config_h

// ====================== DISPLAY LIBRARY ====================== //
#include "SH1106Wire.h"

// ========================= LED CONFIG ======================== //
#define HIGHLIGHT_LED 16

#define NEOPIXEL_LED

#define LED_MODE_BRIGHTNESS 10 // brightness of LED modes 

#define LED_NEOPIXEL_NUM 12
#define LED_NEOPIXEL_PIN 15 // D8
#define LED_NEOPIXEL_MODE NEO_GRB + NEO_KHZ800
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)

// ======================= BUTTON CONFIG ======================= //
#define BUTTON_UP 12 // D6
#define BUTTON_DOWN 13 // D7
#define BUTTON_A 14 // D5

// ======================= DISPLAY CONFIG ====================== //
#define USE_DISPLAY true // default display setting

#define DEAUTHER_DISPLAY SH1106Wire display = SH1106Wire(0x3c, 5, 4); // for 1.3" OLED
// ============================================================= //

#endif