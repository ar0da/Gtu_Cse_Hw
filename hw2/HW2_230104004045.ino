volatile bool extendRedLight = false;
void setup() {
  pinMode(6, OUTPUT); //Red light
  pinMode(8, OUTPUT); //Yellow light
  pinMode(10, OUTPUT); //Green light
  pinMode(2, INPUT_PULLUP); //Button
  attachInterrupt(digitalPinToInterrupt(2), extendRedLightISR, FALLING);
}

void loop() {
  digitalWrite(6, HIGH);
  delay(3000);
  if (extendRedLight){
    delay(3000);
    extendRedLight = false;
  }
  digitalWrite(6, LOW);
  digitalWrite(8, HIGH);
  delay(2000);
  digitalWrite(8, LOW);
  digitalWrite(10, HIGH);
  delay(3000);
  digitalWrite(10, LOW);
}
void extendRedLightISR() {
  extendRedLight = true; 
}