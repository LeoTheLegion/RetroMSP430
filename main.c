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

void supermariotheme()
{
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

void PM_measure1()
{
    //supermariotheme();
    Play(C5);
    Play(Ab4);
    Play(B4);
    Play(Gb4);
    Play(A4);
    Play(E4);
    Play(G4);
    Play(C5);
    Play(Gb4);
    Play(Db4);
    Play(E4);
    Play(C4);
    Play(Eb4);
    Play(B4);
    Play(Ds4);
    Play(C5);
}

void PM_measure2()
{
    Play(C4);
    Play(Ab4);
    Play(B4);
    Play(Gb4);
    Play(Bb4);
    Play(E3);
    Play(As4);
    Play(C5);
    Play(Gs4);
    Play(Eb3);
    Play(G4);
    Play(D3);
    Play(F3);
    Play(C3);
    Play(E3); //suppose to be Es3
    Play(C5);
}

void PM_measure3()
{
    Play(E4);
    Play(E4);
    Rest(3);
    Play(E4);
    Play(E4);
    Rest(3);
}

void PM_measure4()
{
    PM_measure3();
}

void PM_measure5()
{
    Play(E4);
    Play(E4);
    Rest(1);
    Play(E5); //stressed
    Play(E5); //stressed
    Play(E4);
    Play(E4);
    Rest(1);
    Play(E5); //stressed
    Play(E5); //stressed
}

void PM_measure6()
{
    Play(E4);
    Play(E4);
    Rest(1);
    Play(E5); //stressed
    Play(E5); //stressed
    Play(E4);
    Play(E4);
    Rest(3);
}

void PM_measure7()
{
    Play(E4);
    Play(E4);
    Play(G4);
    Play(C5);
    Play(E5);
    Play(C5);
    Play(G4);
    Play(F4);

    Play(E4);
    Play(E4);
    Play(G4);
    Play(C5);
    Play(E5);
    Play(C5);
    Play(G4);
    Play(F4);
}

void PM_measure8()
{
    PM_measure7();
}

void PM_measure9()
{
    PM_measure7();
}

void PM_measure10()
{
    Play(E4);
    Play(E4);
    Play(G4);
    Play(C5);
    Play(E5);
    Play(C5);
    Play(G4);
    Play(F4);

    Play(E4);
    Play(E4);
    Rest(1);
    Play(E3);
}

void PM_measure11()
{
    Play(E4);//full note
    Play(E4);//full note
    Play(E4);//full note
    Play(E4);//full note
    Play(E4);//full note
        Play(E4);//full note
    Play(B4);
    Play(Eb4);//full note
    Play(Eb4);//full note
    Play(Eb4);//full note
    Play(Eb4);//full note
    Play(Eb4);//full note
        Play(Eb4);//full note
    Play(Bb4);
}

void PM_measure12()
{
    Play(D4); //full note
    Play(D4); //full note
    Play(D4); //full note
    Play(D4); //full note
    Play(D4); //full note
    Play(D4); //full note
    Play(A3);
    Play(B3); //full note
    Play(B3); //full note
    Play(B3); //full note
    Play(B3); //full note
    Play(B3); //full note
    Play(B3); //full note
    Play(As3);
}

void PM_measure13()
{
    Play(As3);
    Play(B3); //full note
    Play(B3); //full note
    Play(B3); //full note
    Play(B3); //full note
    Play(B3); //full note
    Play(B3); //full note
    Play(F3);
    Play(E3);
    Play(F3);
    Play(A4);
    Play(F3);
    Rest(1); //sixteenth Rest
    Play(F3);
}

void PM_measure14()
{
    Play(E3); //suppose to be Es3
    Play(Fs3);
    Play(F3);
    Play(A4);
    Play(B4);
    Play(A4);
    Play(C4);
    Play(B4);
    Rest(1); //sixteenth Rest
    Play(A4);
    Play(B4);
    Play(B4);
    Play(A4);
    Play(B4);
}

void PM_measure15()
{
    PM_measure10();
}

void PM_measure16()
{
    PM_measure11();
}

void PM_measure17()
{
    Play(As3);
    Play(B3); //full note
    Play(B3); //full note
    Play(B3); //full note
    Play(B3); //full note
    Play(B3); //full note
    Play(B3); //full note
}

void PM_measure18()
{
    Play(Ds4);
    Play(E4); //full note
    Play(E4); //full note
    Play(E4); //full note
    Play(E4); //full note
    Play(E4); //full note
    Play(E4); //full note
}

void PM_measure19()
{
    Play(B4); //full note
    Play(B4); //full note
    Play(B4); //full note
    Play(B4); //full note
    Play(B4); //full note
    Play(B4); //full note
    Play(D4); //full note
    Play(D4); //full note
    Play(D4); //full note
    Play(D4); //full note
    Play(D4); //full note
    Play(D4); //full note
}

void PM_measure20()
{
    Play(F4); //full note
    Play(F4); //full note
    Play(F4); //full note
    Play(F4); //full note
    Play(F4); //full note
    Play(F4); //full note
    Play(D4); //full note
    Play(D4); //full note
    Play(D4); //full note
    Play(D4); //full note
    Play(D4); //full note
    Play(D4); //full note
}

void PM_measure21()
{
    Play(E4);
    Play(E4);
    Rest(1);
    Play(D3);
    Play(E4);
    Play(E4);
    Rest(1);
    Play(F3);
}

void PM_measure22()
{
    Play(E4);
    Play(E4);
    Rest(1);
    Play(D3);
    Play(E4);
    Play(E4);
    Play(B3);
    Play(D3);
}

int main(void)
{
    init();

    while (1)
    {
        //https://www.ninsheetmusic.org/browse/arranger/939
        //TestC3Major();
        setBPM(150);

        //supermariotheme();

        /**/
        PM_measure1();
        PM_measure2();

        PM_measure3();
        PM_measure4();
        PM_measure5();
        PM_measure6();

        PM_measure8();
        PM_measure9();

        PM_measure10();
        PM_measure11();


        PM_measure12();
        PM_measure13();
        PM_measure14();

        PM_measure15();// trouble here
        PM_measure16();// trouble here
        PM_measure17();// trouble here
        PM_measure18();// trouble here

        PM_measure19();
        PM_measure20();
        PM_measure21();
        PM_measure22();
        /*
        */
        Play(E4);
        Play(E4);
        Play(D4);
        Play(E4);///
        Play(F4);
        Play(E4);
        Play(D4);
        Play(F4);///
        Play(E4);
        Play(E4);
        Play(Gb4);
        Play(F4);///
        Play(E4);
        Play(D4);
        Play(E4);
        Play(F4);////

        Play(E4);
        Play(E4);
        Play(D4);
        Play(E4);///
        Play(Ds4);
        Play(Cs4);
        Play(C4);
        Play(D4);//
        Play(E4);
        Play(E4);
        Play(B3);
        Play(D3);

        Play(E4);
        Play(B4);
        Play(A3);
        Play(F4);
        Play(Fs4);
        Play(F4);//full note
        Play(F4);//full note
        Play(F4);//full note
        Play(F4);//full note
        Play(F4);//full note
        Play(F4);//full note
        Play(F4);//full note


        Rest(10);

    }
}
