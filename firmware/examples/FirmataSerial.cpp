#include "firmata-spark/firmata-spark.h"

void setup() {
  Firmata.begin();
}

void loop() {
  Firmata.sendString("Hello World!");
  delay(1000);
}
