#define RELAY

void setup(){
	Serial.begin(9600);
	pinMode(RELAY, OUTPUT);
}

void loop(){
	digitalWrite(RELAY, 0);
	Serial.println(("Light On!");
	delay(4000);
	
	digitalWrite(RELAY, 1);
	Serial.println(("Light Off!");
	delay(2000);
}
