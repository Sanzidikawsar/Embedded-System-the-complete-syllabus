void setup() {
Serial.begin (9600);
pinMode(11, OUTPUT);
pinMode(10, INPUT);
}
void loop() {
  digitalWrite(11, LOW);
  delayMicroseconds(2);
  digitalWrite(11, HIGH);  
  delayMicroseconds(2);
  digitalWrite(11, LOW);

  duration = pulseIn(10, HIGH);
  distance = (duration * 0.348) / 2 ;
  Serial.print(distance);
}
