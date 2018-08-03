#include <Arduino.h>

#include "Kniwwelino.h"

void setup() {
    Kniwwelino.begin(true, true, false);
    if (WiFi.status() != WL_CONNECTED) {
      WiFi.beginWPSConfig();
      delay(3000);
    }
}

void loop() {
    Kniwwelino.loop();
    Kniwwelino.sleep(250);
}
