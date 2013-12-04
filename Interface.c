/*
 * Interface.c
 *
 *  Created on: Dec 4, 2013
 *      Author: C15Jennae.Steinmiller
 */

#include <msp430g2553.h>

void senseLeft() {
	ADC10CTL0 &= ~ENC;             // Sampling and conversion stop
	ADC10CTL1 = INCH_4;                       // input channel A4
	ADC10AE0 |= BIT4;                         // PA.1 ADC option select

}

void senseRight() {
	ADC10CTL0 &= ~ENC;             // Sampling and conversion stop
	ADC10CTL1 = INCH_5;                       // input channel A5
	ADC10AE0 |= BIT5;                         // PA.1 ADC option select
}

void senseCenter() {
	ADC10CTL0 &= ~ENC;             // Sampling and conversion stop
	ADC10CTL1 = INCH_3;						//input channel A3
	ADC10AE0 |= BIT3;							// PA.1 ADC option select
}

char IsRightHighLow(int threshhold) {
	if (ADC10MEM < threshhold) {
		return 0;
	} else {
		return 5;
	}
}

char IsLeftHighLow(int threshhold) {
	if (ADC10MEM < threshhold) {
		return 0;
	} else {
		return 4;
	}
}

char IsCenterHighLow(int threshhold) {
	if (ADC10MEM < threshhold) {
		return 0;
	} else {
		return 3;
	}
}

