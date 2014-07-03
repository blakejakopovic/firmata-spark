// IMPORTANT: When including a library in a firmware app, a sub dir prefix is needed
// before the particular .h file.
#include "firmata-spark/firmata.h"

TCPClient client;
byte server[] = { 192, 168, 2, 10 }; // Firmata server IP
int port = 3000;

void setup() {

  Serial.begin(9600);

  if (client.connect(server, port)) {
    Serial.println("Connected");
    Firmata.begin(client);
  }
  else {
    Serial.println("Connection failed");
    while(1) {}; // loop forever
  }
}

void loop() {
  if (client.connected()) {
    Firmata.sendString("Hello World!");
    delay(1000);
  } else {
    Serial.println("Disconnected.");
    client.stop();
    while(1) {}; // loop forever  
  }
}