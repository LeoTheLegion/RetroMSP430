#include <msp430.h> 
#include <Output.h>
#include <Timer.h>
#include <Frequency.h>

#define LED1 BIT1
#define LED2 BIT2

unsigned int timeElapsed_Target_ms = 0;

void init(){
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    setupOutput(LED1);

    setOutput(LED1,OFF);

    setUpTimer();
    setupFrequency(LED2);

    setFrequency(1000);

    _enable_interrupt();
}

int main(void)
{
    init();

    while(1){
        while (!isTimeUp (timeElapsed_Target_ms)){}
        setOutput(LED1,TOGGLE);
        setFrequency(1000);
        timeElapsed_Target_ms += 1000; // one sec

        while (!isTimeUp (timeElapsed_Target_ms)){}
        setOutput(LED1,TOGGLE);
        setFrequency(500);
        timeElapsed_Target_ms += 1000; // one secs

    }
}
