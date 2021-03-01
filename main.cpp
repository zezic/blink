#include <Arduino.h>

int main(void) {
	init();
	#if defined(USBCON)
		USBDevice.attach();
	#endif

	pinMode(LED_BUILTIN_RX, OUTPUT);
	pinMode(LED_BUILTIN_TX, OUTPUT);

	for (;;) {
		digitalWrite(LED_BUILTIN_RX, LOW);
		digitalWrite(LED_BUILTIN_TX, HIGH);
		delay(500);

		digitalWrite(LED_BUILTIN_RX, HIGH);
		digitalWrite(LED_BUILTIN_TX, LOW);
		delay(500);
	}

	return 0;
}