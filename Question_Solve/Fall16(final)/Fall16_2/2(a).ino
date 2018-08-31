void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
	int ldr = analogRead(A0);
  Serial.println(ldr);
  delay(1000);
}