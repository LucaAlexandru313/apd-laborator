#include "config.h"

void setup() {
  Serail.begin(SERIAL_BAUD);
  }

void loop () {
  int raw = analogRead(SENSOR_PIN);
  Serial.println(raw);
  elay(SAMPLE_PERIOD_MS);
}
