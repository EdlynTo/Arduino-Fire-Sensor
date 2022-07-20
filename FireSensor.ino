int LedG = 9;
int LedR = 8;
int buz = 4;
int fire = A0;
int threshold = 600;

void setup() {
  Serial.begin(9600);
  pinMode(LedG, OUTPUT);
  pinMode(LedR, OUTPUT);
  pinMode(buz, OUTPUT);
  pinMode(fire, INPUT);
}

void loop() {
  int fireOutputValue = analogRead(fire);
  Serial.println(fireOutputValue);
  if (fireOutputValue < threshold){
    digitalWrite(LedG, LOW);
    digitalWrite(LedR, HIGH);
    tone(buz, 500);
  }
  else{
    digitalWrite(LedR, LOW);
    digitalWrite(LedG, HIGH);
    noTone(buz);
  }
}
