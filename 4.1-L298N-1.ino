int SPD=6;
int RC=7;
int LC=8;


void setup() {
  pinMode(SPD, OUTPUT);
  pinMode(RC, OUTPUT);
  pinMode(LC, OUTPUT);
  
  digitalWrite(RC, HIGH);
  digitalWrite(LC, LOW);
  analogWrite(SPD,255);
  delay(5000);
  digitalWrite(RC, LOW);
  digitalWrite(LC, LOW);
  analogWrite(SPD, 255);
  delay(5000);
}

void loop() {
}
