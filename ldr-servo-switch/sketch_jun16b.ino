#include <Servo.h>
Servo s;

#define ldrpin A0
#define spin 9

void setup() {
  // put your setup code here, to run once:
  
  pinMode(ldrpin, INPUT);
  s.attach(9);
  s.write(0);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(100);

  int x = analogRead(ldrpin);

  Serial.println(x);

  if (x >= 980) {
    s.write(100);
    delay(500);
    s.write(0);
    delay(400);
  }
}
