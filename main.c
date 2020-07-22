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

void SM_measure_1()
{
    Play(E4, 1);
    Play(E4, 1);
    Rest(1);
    Play(E4, 1);
    Rest(1);
    Play(C4, 1);
    Play(E4, 1);
    Rest(1);
}

void SM_measure_2()
{
    Play(G4, 1);
    Rest(3);
    Play(G3, 1);
    Rest(3);
}

void SM_measure_3()
{
    Play(C4, 1);
    Rest(2);
    Play(G3, 1);
    Rest(2);
    Play(E3, 1);
    Rest(1);
}

void SM_measure_4()
{
    Rest(1);
    Play(A3, 1);
    Rest(1);
    Play(B3, 1);
    Rest(1);
    Play(Bb3, 1);
    Play(A3, 1);
    Rest(1);
}

void SM_measure_5()
{
    Play(G3, 1);
    Play(E4, 1);
    Rest(1);
    Play(G4, 1);
    Play(A4, 1);
    Rest(1);
    Play(F4, 1);
    Play(G4, 1);
}

void SM_measure_6()
{
    Rest(1);
    Play(E4, 1);
    Rest(1);
    Play(C4, 1);
    Play(D4, 1);
    Play(B3, 1);
    Rest(2);
}

void SM_measure_7()
{
    SM_measure_3();
}

void SM_measure_8()
{
    SM_measure_4();
}

void SM_measure_9()
{
    SM_measure_5();
}

void SM_measure_10()
{
    SM_measure_6();
}

void SM_measure_11()
{
    Rest(2);
    Play(G4, 1);
    Play(Fs4, 1);
    Play(F4, 1);
    Play(Ds4, 1);
    Rest(1);
    Play(E4, 1);
}

void SM_measure_12()
{
    Rest(1);
    Play(Gs3, 1);
    Play(A3, 1);
    Play(C3, 1);
    Rest(1);
    Play(A3, 1);
    Play(C3, 1);
    Play(D4, 1);
}

void SM_measure_13()
{
    SM_measure_11();
}

void SM_measure_14()
{
    Rest(1);
    Play(C5, 1);
    Rest(1);
    Play(C5, 1);
    Play(C5, 1);
    Rest(3);
}

void SM_measure_15()
{
    SM_measure_11();
}

void SM_measure_16()
{
    SM_measure_12();
}

void SM_measure_17()
{
    Rest(2);
    Play(Eb4, 1);
    Rest(2);
    Play(D4, 1);
    Rest(2);
}

void SM_measure_18()
{
    Play(C4, 1);
    Rest(6);
}

void SM_measure_19()
{
    SM_measure_11();
}

void SM_measure_20()
{
    SM_measure_12();
}

void SM_measure_21()
{
    SM_measure_13();
}

void SM_measure_22()
{
    SM_measure_14();
}

void SM_measure_23()
{
    SM_measure_15();
}

void SM_measure_24()
{
    SM_measure_16();
}

void SM_measure_25()
{
    SM_measure_17();
}

void SM_measure_26()
{
    SM_measure_18();
}

void SM_measure_27()
{
    Play(C4, 1);
    Play(C4, 1);
    Rest(1);
    Play(C4, 1);
    Rest(1);
    Play(C4, 1);
    Play(D4, 1);
    Rest(1);
}

void SM_measure_28()
{
    Play(E4, 1);
    Play(C4, 1);
    Rest(1);
    Play(A3, 1);
    Play(G3, 1);
    Rest(3);
}

void SM_measure_29()
{
    Play(C4, 1);
    Play(C4, 1);
    Rest(1);
    Play(C4, 1);
    Rest(1);
    Play(C4, 1);
    Play(D4, 1);
    Play(E4, 1);
}

void SM_measure_30()
{
    Rest(7);
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
