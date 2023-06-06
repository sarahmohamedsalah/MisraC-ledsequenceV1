/*
 * ledsequenceV1.c
 *
 * Created: 6/5/2023 11:57:38 AM
 * Author : Sarah
 */ 

#include <avr/io.h>
#include "Application/app.h"


int main(void)
{
    APP_init();
    while (1) 
    {
		APP_ledSequenceV_1();
    }
}

