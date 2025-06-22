#define ldrpin A0
#define servopin 9

#include <Servo.h>
Servo s;

int x;
int y = 0;
int prevX;

void setup() {
  // put your setup code here, to run once:
  pinMode(ldrpin, INPUT);
  Serial.begin(9600);
  s.attach(servopin);
  s.write(0);

  delay(3000);
}

void loop() {
  // put your main code here, to run repeatedly:

  delay(1000);

  x = analogRead(ldrpin);

  if (x <= 685) { // if TV indicator is Red

    y = 0;

  }

  else {

    if (x - prevX >= 170) { // if analog value of LDR spikes

      if (x > 720) { // if TV LED turns Green or Off

        y = 1;

      }
    
    }

    else { // casual case

      y = 0;

    }

  }

  if (y == 1) {
    Serial.println("TV has been turned on!");
    s.write(110);
    delay(500);
    s.write(0);
  }

  prevX = x;
}
