/*
 * app.c
 *
 * Created: 6/5/2023 12:15:50 PM
 *  Author: Sarah
 */ 
#include "app.h"

void APP_init(void)
{
	BUTTON_init(BUTTON_0_PORT, BUTTON_0_Pin);
	LED_init(LED_0_PORT, LED_0_PIN);
	LED_init(LED_1_PORT, LED_1_PIN);
	LED_init(LED_2_PORT, LED_2_PIN);
	LED_init(LED_3_PORT, LED_3_PIN);
	LED_off(LED_0_PORT, LED_0_PIN);
	LED_off(LED_1_PORT, LED_1_PIN);
	LED_off(LED_2_PORT, LED_2_PIN);
	LED_off(LED_3_PORT, LED_3_PIN);
}



void APP_start (void)
{
	static uint8_t  counter;
	static uint8_t buttonState = 0;
	BUTTON_read(BUTTON_0_PORT, BUTTON_0_Pin, &buttonState);
	if (buttonState)
	{
		_delay_ms(60);
		BUTTON_read(BUTTON_0_PORT, BUTTON_0_Pin, &buttonState);
		if(buttonState)
		{
			BUTTON_read(BUTTON_0_PORT, BUTTON_0_Pin, &buttonState);
			counter++;
			switch(counter)
			{
				case 1:
				LED_on(LED_0_PORT, LED_0_PIN);
				LED_off(LED_1_PORT, LED_1_PIN);
				LED_off(LED_2_PORT, LED_2_PIN);
				LED_off(LED_3_PORT, LED_3_PIN);
				break;
				
				case 2:
				LED_on(LED_0_PORT, LED_0_PIN);
				LED_on(LED_1_PORT, LED_1_PIN);
				LED_off(LED_2_PORT, LED_2_PIN);
				LED_off(LED_3_PORT, LED_3_PIN);
				break;
				
				case 3:
				LED_on(LED_0_PORT, LED_0_PIN);
				LED_on(LED_1_PORT, LED_1_PIN);
				LED_on(LED_2_PORT, LED_2_PIN);
				LED_off(LED_3_PORT, LED_3_PIN);
				break;
				
				case 4:
				LED_on(LED_0_PORT, LED_0_PIN);
				LED_on(LED_1_PORT, LED_1_PIN);
				LED_on(LED_2_PORT, LED_2_PIN);
				LED_on(LED_3_PORT, LED_3_PIN);
				break;
				
				case 5:
				LED_off(LED_0_PORT, LED_0_PIN);
				LED_on(LED_1_PORT, LED_1_PIN);
				LED_on(LED_2_PORT, LED_2_PIN);
				LED_on(LED_3_PORT, LED_3_PIN);
				break;
				
				case 6:
				LED_off(LED_0_PORT, LED_0_PIN);
				LED_off(LED_1_PORT, LED_1_PIN);
				LED_on(LED_2_PORT, LED_2_PIN);
				LED_on(LED_3_PORT, LED_3_PIN);
				break;
				
				case 7:
				LED_off(LED_0_PORT, LED_0_PIN);
				LED_off(LED_1_PORT, LED_1_PIN);
				LED_off(LED_2_PORT, LED_2_PIN);
				LED_on(LED_3_PORT, LED_3_PIN);
				break;
				
				case 8:
				LED_off(LED_0_PORT, LED_0_PIN);
				LED_off(LED_1_PORT, LED_1_PIN);
				LED_off(LED_2_PORT, LED_2_PIN);
				LED_off(LED_3_PORT, LED_3_PIN);
				counter = 0;	break;
				
				default:
				break;
				
			}
			while(buttonState)
			{
				BUTTON_read(BUTTON_0_PORT, BUTTON_0_Pin, &buttonState);
			}
			
		}
	}
}