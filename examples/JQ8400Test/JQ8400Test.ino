#include "Audio_JQ8400.h"

Audio_JQ8400 ajq;

void setup() {
	Serial.begin(9600);

}

void loop() {
	ajq.playIndex(1);
	delay(10000);
}
