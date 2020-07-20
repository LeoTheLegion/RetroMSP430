/*
 * Timer.h
 *
 *  Created on: Jul 6, 2020
 *      Author: LeoTheLegion
 */

#ifndef TIMER_H_
#define TIMER_H_

#include <stdbool.h>
#include <msp430.h>

unsigned int timeElapsed_Current_ms = 0;

void setUpTimer(){
    BCSCTL1 = CALBC1_1MHZ;
    DCOCTL = CALDCO_1MHZ;

    TACTL |= TASSEL_2 | TAIE | ID_0 | MC_2 ;

    TACCTL1 |= CCIE;
}

#pragma vector = TIMER0_A1_VECTOR
__interrupt void timeElapsed_Clock(void)
{
    switch (TAIV) {
            case 2: //CCR1
                TACCR1 += 1000;
                timeElapsed_Current_ms++;
                break;
        }

}

bool isTimeUp(unsigned int targetTime_ms){
    return (targetTime_ms == timeElapsed_Current_ms); //I dont feel safe with this...
}

#endif /* TIMER_H_ */
