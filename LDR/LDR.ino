void setup()
{
  pinMode(A5, INPUT);
  Serial.begin(9600);
}

void loop()
{
	int ldr = analogRead(A5);
  Serial.println(ldr);
  delay(1000);
}
