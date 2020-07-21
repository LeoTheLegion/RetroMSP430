/*
 * Frequency.h
 *
 *  Created on: Jul 6, 2020
 *      Author: LeoTheLegion
 */

#ifndef FREQUENCY_H_
#define FREQUENCY_H_

#include <Output.h>
#include <msp430.h>

int frequencyPin;
int currentFrequency = 500;

void setupFrequency(int pin){
    frequencyPin = pin;

    setupOutput(frequencyPin);
    setOutput(frequencyPin,OFF);

    BCSCTL1 = CALBC1_1MHZ;
    DCOCTL = CALDCO_1MHZ;

    TACTL |= TASSEL_2 | TAIE | ID_0 | MC_2 ;

    TACCTL0 |= CCIE;
}

void setFrequency(int freq){
    if(freq < 1){
        currentFrequency = -1;
        return;
    }
    currentFrequency = (1000000)/ (2*freq);
}

#pragma vector = TIMER0_A0_VECTOR
__interrupt void Frequency_Clock(void)
{
    if(currentFrequency > 0){
        TACCR0 += currentFrequency;
        P1OUT ^= frequencyPin;
    }
}


#endif /* FREQUENCY_H_ */
