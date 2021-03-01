#include <Arduino.h>

int RXLED = 17;

void setup() {                
	pinMode(RXLED, OUTPUT);
}

void loop() {
	digitalWrite(RXLED, LOW);
	delay(300);
	digitalWrite(RXLED, HIGH);
	delay(300);
}
