#include <msp430.h> 
#include <Output.h>
#include <NotePlayer.h>
#include <SuperMarioOverworldTheme.h>

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

        SM_measure_1();
        SM_measure_2();

        SM_measure_3();
        SM_measure_4();
        SM_measure_5();
        SM_measure_6();

        SM_measure_7();
        SM_measure_8();
        SM_measure_9();
        SM_measure_10();

        SM_measure_11();
        SM_measure_12();
        SM_measure_13();
        SM_measure_14();

        SM_measure_15();
        SM_measure_16();
        SM_measure_17();
        SM_measure_18();

        SM_measure_19();
        SM_measure_20();
        SM_measure_21();
        SM_measure_22();

        SM_measure_23();
        SM_measure_24();
        SM_measure_25();
        SM_measure_26();

        SM_measure_27();
        SM_measure_28();
        SM_measure_29();
        SM_measure_30();

        SM_measure_27();
        SM_measure_28();
    }
}
