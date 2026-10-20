#include "config.h"

void setup() {
  serial.begin(SERIAL_BAUD);
  }

void loop () {
  int raw = analogRead(SENSOR_PIN);
  serial.println(raw);
  delay(SAMPLE_PERIOD_MS);
}
