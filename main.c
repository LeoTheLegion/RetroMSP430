#include <msp430.h> 
#include <Output.h>
#include <NotePlayer.h>

#define LED1 BIT1
#define LED2 BIT2


void init()
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    setupOutput(LED1);

    setOutput(LED1, OFF);

    setSpeakerPin(LED2);

    _enable_interrupt();
}

void TestC3Major()
{
    PlayNote(C3, 500);
    PlayNote(D3, 500);
    PlayNote(E3, 500);
    PlayNote(F3, 500);
    PlayNote(G3, 500);
    PlayNote(A3, 500);
    PlayNote(B3, 500);
    PlayNote(B3, 500);
    PlayNote(A3, 500);
    PlayNote(G3, 500);
    PlayNote(F3, 500);
    PlayNote(E3, 500);
    PlayNote(D3, 500);
    PlayNote(C3, 500);
}


int main(void)
{
    init();

    while (1)
    {
        //TestC3Major();
        setBPM(120);

        Play(E4,1);
        Play(E4,1);
        Rest(1);
        Play(E4,1);
        Rest(1);
        Play(C4,1);
        Play(E4,1);
        Rest(1);
        Play(G4,1);
        Rest(3);
        Play(G3,1);
        Rest(3);

        Play(C4,1);
        Rest(2);
        Play(G3,1);
        Rest(2);
        Play(E3,1);
        Rest(2);
        Play(A3,1);
        Rest(1);
        Play(B3,1);
        Rest(1);
        Play(As3,1);
        Play(A3,1);
        Rest(1);

        Play(C3,1);
        Play(E4,1);
        Rest(1);
        Play(G4,1);
        Play(A4,1);
        Rest(1);
        Play(F4,1);
        Play(G4,1);
        Rest(1);
        Play(E4,1);
        Rest(1);
        Play(C4,1);
        Play(D4,1);
        Play(B3,1);
        Rest(2);
    }
}
