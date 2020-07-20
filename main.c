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

int main(void)
{
    init();

    while (1)
    {
        //TestC5Major();
        setBPM(120);

        Play(E6, 1);
        Play(E6, 1);
        Rest(1);
        Play(E6, 1);
        Rest(1);
        Play(C6, 1);
        Play(E6, 1);
        Rest(1);

        Play(F7, 1);
        Rest(3);
        Play(G6, 1);
        Rest(3);
/////////////////////////////////

        Play(C6, 1);
        Rest(2);
        Play(G7, 1);
        Rest(2);
        Play(E7, 1);
        Rest(1);

        Rest(1);
        Play(A7, 1);
        Rest(1);
        Play(B7, 1);
        Rest(1);
        Play(As6, 1);
        Play(A6, 1);
        Rest(1);

        Play(G7, 1);
        Play(E6, 1);
        Rest(1);
        Play(G6, 1);
        Play(A6, 1);
        Rest(1);
        Play(F6, 1);
        Play(G6, 1);

        Rest(1);
        Play(E6, 1);
        Rest(1);
        Play(C6, 1);
        Play(D6, 1);
        Play(B7, 1);
        Rest(1);

        //////////////////////////////////////////
        Play(C6, 1);
        Rest(2);
        Play(G7, 1);
        Rest(2);
        Play(E7, 1);
        Rest(1);

        Rest(1);
        Play(A7, 1);
        Rest(1);
        Play(B7, 1);
        Rest(1);
        Play(As6, 1);
        Play(A6, 1);
        Rest(1);

        Play(G7, 1);
        Play(E6, 1);
        Rest(1);
        Play(G6, 1);
        Play(A6, 1);
        Rest(1);
        Play(F6, 1);
        Play(G6, 1);

        Rest(1);
        Play(E6, 1);
        Rest(1);
        Play(C6, 1);
        Play(D6, 1);
        Play(B7, 1);
        Rest(1);

//////////////////////////////////////
    }
}
