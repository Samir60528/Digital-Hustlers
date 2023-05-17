void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
  delay(500);
}

void loop() {
  int analogWert = analogRead(A0);
  Serial.println(analogWert);
  delay(1000);
}
