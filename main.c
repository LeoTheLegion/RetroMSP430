#include <msp430.h> 
#include <Output.h>
#include <NotePlayer.h>

#define LED1 BIT1
#define LED2 BIT2


void init(){
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    setupOutput(LED1);

    setOutput(LED1,OFF);

    setSpeakerPin(LED2);

    _enable_interrupt();
}

int main(void)
{
    init();

    while(1){
        PlayNote(Testnote1, 1000);
        PlayNote(Testnote2, 1000);
        Pause(1000);
        PlayNote(Testnote1, 500);
        PlayNote(Testnote3, 500);
        PlayNote(Testnote1, 500);
        PlayNote(Testnote2, 500);
        PlayNote(Testnote3, 500);
        PlayNote(Testnote2, 500);
    }
}
