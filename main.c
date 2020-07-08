#include <msp430.h> 
#include <Output.h>
#include <Timer.h>

#define LED1 BIT1
#define LED2 BIT2

unsigned int timeElapsed_Target_ms = 0;
int freq = 1000;

void init(){
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    setupOutput(LED1);
    setupOutput(LED2);

    setOutput(LED1,OFF);
    setOutput(LED2,OFF);

    BCSCTL1 = CALBC1_1MHZ;
    DCOCTL = CALDCO_1MHZ;


    TACTL |= TASSEL_2 | TAIE | ID_0 | MC_2 ;
    TACCTL0 |= CCIE;
    TACCTL1 |= CCIE;


    //TACCR0 = 1000; // 1 ms

    _enable_interrupt();
}

#pragma vector = TIMER0_A0_VECTOR
__interrupt void Frequency_Clock(void)
{
    TACCR0 += 500;
    P1OUT ^= LED2;

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

int main(void)
{
    init();

    while(1){
        if(timeElapsed_Target_ms == timeElapsed_Current_ms){
            setOutput(LED1,TOGGLE);
            timeElapsed_Target_ms += 1000; // one sec
      }
    }
	
	return 0;
}
