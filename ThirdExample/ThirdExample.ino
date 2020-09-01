#include <FastLED.h>

#define Num_Strip1 11

CRGB Strip1[Num_Strip1];

void setup() {
  FastLED.addLeds<NEOPIXEL,6>(Strip1, Num_Strip1);
}

void loop() {
  for(int a = 0; a < 10; a++) {
    Strip1[a] = CHSV(random(0, 255), 255, 255);
    FastLED.show();
    delay(5);
  }

  for(int a = 10; a > 0; a--) {
    Strip1[a] = CHSV(random(0, 255), 255, 255);
    FastLED.show();
    delay(5);
  }
}
