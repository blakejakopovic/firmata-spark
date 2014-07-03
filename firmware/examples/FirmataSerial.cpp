// IMPORTANT: When including a library in a firmware app, a sub dir prefix is needed
// before the particular .h file.
#include "firmata-spark/firmata.h"

void setup() {
  Firmata.begin();
}

void loop() {
  Firmata.sendString("Hello World!");
  delay(1000);
}
