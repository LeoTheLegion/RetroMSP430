#include <msp430.h> 
#include <Output.h>
#include <NotePlayer.h>

#define LED1 BIT1
#define LED2 BIT2
#define TICKS_PER_BEAT 4

static unsigned int ms_per_tick = 0;

void init(){
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    setupOutput(LED1);

    setOutput(LED1,OFF);

    setSpeakerPin(LED2);

    _enable_interrupt();
}

void TestC5Major()
{
    PlayNote(C6, 500);
    PlayNote(D6, 500);
    PlayNote(E6, 500);
    PlayNote(F6, 500);
    PlayNote(G6, 500);
    PlayNote(A6, 500);
    PlayNote(B6, 500);
    PlayNote(B6, 500);
    PlayNote(A6, 500);
    PlayNote(G6, 500);
    PlayNote(F6, 500);
    PlayNote(E6, 500);
    PlayNote(D6, 500);
    PlayNote(C6, 500);
}

void set_bpm(unsigned int bpm) {
    ms_per_tick = 60000 / (TICKS_PER_BEAT * bpm);
}

int main(void)
{
    init();

    while(1){
        //TestC5Major();
        set_bpm(120);

        PlayNote(E6,1 * ms_per_tick);
        PlayNote(E6,1 * ms_per_tick);
        Pause(1 * ms_per_tick);
        PlayNote(E6,1* ms_per_tick);
        Pause(1 * ms_per_tick);
        PlayNote(C6,1* ms_per_tick);
        PlayNote(E6,1* ms_per_tick);
        Pause(1* ms_per_tick);

        PlayNote(F7,1* ms_per_tick);
        Pause(3* ms_per_tick);
        PlayNote(G6,1* ms_per_tick);
        Pause(3* ms_per_tick);
/////////////////////////////////

        PlayNote(C6,1 * ms_per_tick);
        Pause(2* ms_per_tick);
        PlayNote(G7,1 * ms_per_tick);
        Pause(2* ms_per_tick);
        PlayNote(E7,1 * ms_per_tick);
        Pause(1* ms_per_tick);

        Pause(1* ms_per_tick);
        PlayNote(A7,1 * ms_per_tick);
        Pause(1* ms_per_tick);
        PlayNote(B7,1 * ms_per_tick);
        Pause(1* ms_per_tick);
        PlayNote(As6,1 * ms_per_tick);
        PlayNote(A6,1 * ms_per_tick);
        Pause(1* ms_per_tick);

        PlayNote(G7,1 * ms_per_tick);
        PlayNote(E6,1 * ms_per_tick);
        Pause(1* ms_per_tick);
        PlayNote(G6,1 * ms_per_tick);
        PlayNote(A6,1 * ms_per_tick);
        Pause(1* ms_per_tick);
        PlayNote(F6,1 * ms_per_tick);
        PlayNote(G6,1 * ms_per_tick);

        Pause(1* ms_per_tick);
        PlayNote(E6,1 * ms_per_tick);
        Pause(1* ms_per_tick);
        PlayNote(C6,1 * ms_per_tick);
        PlayNote(D6,1 * ms_per_tick);
        PlayNote(B7,1 * ms_per_tick);
        Pause(1* ms_per_tick);


 //////////////////////////////////////////
        PlayNote(C6,1 * ms_per_tick);
       Pause(2* ms_per_tick);
       PlayNote(G7,1 * ms_per_tick);
       Pause(2* ms_per_tick);
       PlayNote(E7,1 * ms_per_tick);
       Pause(1* ms_per_tick);

       Pause(1* ms_per_tick);
       PlayNote(A7,1 * ms_per_tick);
       Pause(1* ms_per_tick);
       PlayNote(B7,1 * ms_per_tick);
       Pause(1* ms_per_tick);
       PlayNote(As6,1 * ms_per_tick);
       PlayNote(A6,1 * ms_per_tick);
       Pause(1* ms_per_tick);

       PlayNote(G7,1 * ms_per_tick);
       PlayNote(E6,1 * ms_per_tick);
       Pause(1* ms_per_tick);
       PlayNote(G6,1 * ms_per_tick);
       PlayNote(A6,1 * ms_per_tick);
       Pause(1* ms_per_tick);
       PlayNote(F6,1 * ms_per_tick);
       PlayNote(G6,1 * ms_per_tick);

       Pause(1* ms_per_tick);
       PlayNote(E6,1 * ms_per_tick);
       Pause(1* ms_per_tick);
       PlayNote(C6,1 * ms_per_tick);
       PlayNote(D6,1 * ms_per_tick);
       PlayNote(B7,1 * ms_per_tick);
       Pause(1* ms_per_tick);

//////////////////////////////////////
    }
}
