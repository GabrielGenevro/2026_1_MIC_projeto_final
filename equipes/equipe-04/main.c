/*
 * main.c
 *
 * Created: 6/19/2026 4:29:16 PM
 *  Author: Gabriel Genevro
 */ 
#define F_CPU 16000000

#include <xc.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/io.h>
#include "constantes.h"
#include "adc.c"


ISR(INT0_vect){

}

void config(){
	DDRB |= (1<<PORTB5);
	float temperatura;
}

int main(void){
	ADC_Init();
	sei();
    while(1){
			uint8_t adc = ADC_Read(0);
			temperatura = (adc * vref * 100.0)/1024;
		}
	}