void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(18, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}