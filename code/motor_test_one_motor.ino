const int PWMA = 5;
const int AIN1 = 7;
const int AIN2 = 8;
const int STBY = 11;

void setup() {
  pinMode(PWMA, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(STBY, OUTPUT);

  digitalWrite(STBY, HIGH);
}

void loop() {
  // Forward
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  analogWrite(PWMA, 150);
  delay(2000);

  // Stop
  analogWrite(PWMA, 0);
  delay(1000);

  // Reverse

digitalWrite(AIN1, LOW);
digitalWrite(AIN2, HIGH);
analogWrite(PWMA, 120);
delay(2000);

  // Stop
  analogWrite(PWMA, 0);
  delay(1000);
  
}
