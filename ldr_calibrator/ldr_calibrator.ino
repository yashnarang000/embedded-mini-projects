#define ldrpin A0

int x;

void setup() {
  // put your setup code here, to run once:
  pinMode(ldrpin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  x = analogRead(ldrpin);

  Serial.println(x);

  delay(500);
}
