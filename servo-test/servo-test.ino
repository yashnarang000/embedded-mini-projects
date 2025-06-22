#include <Servo.h>

Servo s;

int x;

void setup() {
  // put your setup code here, to run once:
  s.attach(9);
  Serial.begin(9600);
  s.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    x = Serial.readStringUntil('\n').toInt();
    x = constrain(x, 0, 180);
    Serial.println(x);
    s.write(x);
    delay(500);
    s.write(0);
    delay(500);
  }
}
