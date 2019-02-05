#include <Kniwwelino.h>
#include <SPI.h>

#define USE_SERIAL Serial

void setup() {
  //Initialize the Kniwwelino Board
  Kniwwelino.begin("latest", true, true, false); // Wifi=true, Fastboot=true, MQTT Logging=false

}

void loop() {


  Kniwwelino.loop(); // do background stuff...

}
