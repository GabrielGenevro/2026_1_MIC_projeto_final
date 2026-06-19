/*
 * avr.c
 *
 * Created: 19/06/2026 17:03:26
 *  Author: Gabriel Genevro
 */ 


void ADC_Init (){
		// Referência AVcc (5 V)
		ADMUX = (1 << REFS0);
		// Habilita ADC e prescaler 128
		ADCSRA =	(1 << ADEN) |
					(1 << ADPS2) |
					(1 << ADPS1) |
					(1 << ADPS0);
	}

uint8_t ADC_Read(uint8_t canal){
		ADMUX = (ADMUX & 0xF0) | canal;
		ADCSRA |= (1 << ADSC);
		while (ADCSRA & (1 << ADSC));
		return ADC;
	}
