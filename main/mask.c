#include <stdio.h>
#include <util/debug.h>
#include <wiringPi.h>

void blink (const int led)
{
    digitalWrite(led, HIGH);
    delay(30);
    digitalWrite(led, LOW);
    delay(30);
}

void main() {

    wiringPiSetupGpio();
    DEBUG("wiringSetup");
    pinMode(2,OUTPUT);
    DEBUG("Pin mode");
            
    delay(10); 
    DEBUG("Starting loop");
    while(1)
    {
	for (int j = 0; j < 4; j++)
	{
	    blink(leds[j]);
	}
    }
    return 0;
}