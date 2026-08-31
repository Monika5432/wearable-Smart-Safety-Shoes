/*
 * Smart Safety Shoes
 * ESP32 firmware
 *
 * Development stage:
 * Basic firmware skeleton.
 *
 * Add each tested module incrementally.
 */

const int STATUS_LED = 2;

void setup() {
  Serial.begin(115200);
  pinMode(STATUS_LED, OUTPUT);

  Serial.println("Smart Safety Shoes");
  Serial.println("ESP32 firmware started");
}

void loop() {
  // Module integration will be added after individual hardware tests.
  digitalWrite(STATUS_LED, !digitalRead(STATUS_LED));
  delay(1000);
}
