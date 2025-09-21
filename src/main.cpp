#include <Arduino.h>

#define LED 2   // ESP32 built-in LED (GPIO2)

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  delay(1000); // 1 second
  digitalWrite(LED, LOW);
  delay(1000); // 1 second
}
