#include <Arduino.h>

#include "Kniwwelino.h"

void setup() {
    Kniwwelino.begin("name", true, true, false);
}

void loop() {
    Kniwwelino.loop();
}
