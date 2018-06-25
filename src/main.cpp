#include <Arduino.h>

#include "Kniwwelino.h"

void setup() {
    Kniwwelino.begin(true, true, false);
}

void loop() {
    Kniwwelino.loop();
		Kniwwelino.sleep(250);
}
