int SPD=6;
int RC=7;
int LC=8;
int i;
int x=1;

void setup() {
  pinMode(SPD, OUTPUT);
  pinMode(RC, OUTPUT);
  pinMode(LC, OUTPUT);
  Serial.begin(9600);
  
  digitalWrite(RC,HIGH);
  digitalWrite(LC, LOW);
  
  for (i=0; i<255; i=i+x){
  analogWrite(SPD, i);
  delay(10);
  Serial.print("i equals ");
  Serial.println(i);
  }
  for (i=255; i>0; i=i-x){
  analogWrite(SPD, i);
  delay(10);
  Serial.print("i equals ");
  Serial.println(i);
  }
}

void loop() {
    
}
