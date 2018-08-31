void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  //to change the rotation withoud adding any
  // extra hardware we can make 13, low and 12 high

}