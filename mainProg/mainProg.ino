#include <FastLED.h>
#include "turnLedON.h"

//Define the pins where the relay modules are connected
const int relayPins[] = {2, 3, 4, 5, 6, 7}; //Green - White - Blue - Red - Black
#define numRelays 6

//Define LED Parameters
#define numLeds 2   //CP TX1818 12V
#define DATA_PIN_1 8
#define DATA_PIN_2 9
#define DATA_PIN_3 10
#define DATA_PIN_4 11
#define DATA_PIN_5 12
#define DATA_PIN_6 13

CRGB leds1[numLeds];
CRGB leds2[numLeds];
CRGB leds3[numLeds];
CRGB leds4[numLeds];
CRGB leds5[numLeds];
CRGB leds6[numLeds];


void setup() {
  for (int i = 0; i <= numRelays; i++){
    pinMode(relayPins[i], OUTPUT);    //Initialize each relay pin as output
    digitalWrite(relayPins[i], HIGH);  //All relays are turned off
  }
    FastLED.addLeds<WS2811, DATA_PIN_1, RGB>(leds1, numLeds);
    FastLED.addLeds<WS2811, DATA_PIN_2, RGB>(leds2, numLeds);
    FastLED.addLeds<WS2811, DATA_PIN_3, RGB>(leds3, numLeds);
    FastLED.addLeds<WS2811, DATA_PIN_4, RGB>(leds4, numLeds);
    FastLED.addLeds<WS2811, DATA_PIN_5, RGB>(leds5, numLeds);
    FastLED.addLeds<WS2811, DATA_PIN_6, RGB>(leds6, numLeds);

    FastLED.clear();
    FastLED.show();
    delay(1500);
    for (int i = 0; i < numLeds; i++){
      leds1[i] = CRGB::Black;
      leds2[i] = CRGB::Black;
      leds3[i] = CRGB::Black;
      leds4[i] = CRGB::Black;
      leds5[i] = CRGB::Black;
      leds6[i] = CRGB::Black;
    }
    FastLED.show(); 
    delay(5000);

    FastLED.clear();
    FastLED.show();
    delay(1500);

    leds2[0] = CRGB::White;
    FastLED.show(); 
    delay(500);

    leds3[0] = CRGB::White;
    FastLED.show(); 
    delay(500);

    leds4[0] = CRGB::White;
    FastLED.show(); 
    delay(500);

    leds5[0] = CRGB::White;
    FastLED.show(); 
    delay(500);

    leds6[0] = CRGB::White;
    FastLED.show(); 
    delay(1500);
    
}
  
void loop() {
  for (int i = 0; i < numRelays; i++){
    digitalWrite(relayPins[i], LOW); //Activate relay
  }
  //Pin 1 of UUT
  for (int i = 0; i < numLeds; i++) {
  leds1[i] = CRGB::Green;
  }
  FastLED.show();
  delay(500);

  //Pin 2 of UUT
  for (int i = 0; i < numLeds; i++) {
  leds2[i] = CRGB::Green;
  }
  FastLED.show();
  delay(500);

  //Pin 3 of UUT
  for (int i = 0; i < numLeds; i++) {
  leds3[i] = CRGB::Green;
  }
  FastLED.show();
  delay(500);

  //Pin 4 of UUT
  for (int i = 0; i < numLeds; i++) {
  leds4[i] = CRGB::Green;
  }
  FastLED.show();
  delay(500);

  //Pin 5 of UUT
  for (int i = 0; i < numLeds; i++) {
  leds5[i] = CRGB::Green;
  } 
  FastLED.show();
  delay(500);

  //Pin 6 of UUT
  for (int i = 0; i < numLeds; i++) {
  leds6[i] = CRGB::Green;
  }
  FastLED.show();
  delay(3500);

  for (int i = 0; i < numLeds; i++){
    leds1[i] = CRGB::Black;
    leds2[i] = CRGB::Black;
    leds3[i] = CRGB::Black;
    leds4[i] = CRGB::Black;
    leds5[i] = CRGB::Black;
    leds6[i] = CRGB::Black;
  }
  FastLED.show();
  delay(10000);

}
