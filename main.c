#include <msp430.h> 
#include <Output.h>
#include <Input.h>
#include <NotePlayer.h>
#include <SuperMarioOverworldTheme.h>
#include <Pokemon_R_B_Y_Champion_Theme.h>

#define LED1 BIT1
#define LED2 BIT2
#define SWITCH BIT3

#define PM_FULL_SIZE 97

typedef void (*SONG)();// should out this in other file

void init()
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    setupOutput(LED1);
    setupInput(SWITCH);

    setOutput(LED1, ON);

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
    SM_setBPM();
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

void pokemontheme()
{
    PM_setBPM();
    PM_measure1();
    PM_measure2();
    PM_measure3();
    PM_measure4();
    PM_measure5();
    PM_measure6();
    PM_measure7();
    PM_measure8();
    PM_measure9();
    PM_measure10();
    PM_measure11();
    PM_measure12();
    PM_measure13();
    PM_measure14();
    PM_measure15(); // trouble here
    PM_measure16(); // trouble here
    PM_measure17(); // trouble here
    PM_measure18(); // trouble here
    PM_measure19();
    PM_measure20();
    PM_measure21();
    PM_measure22();
    PM_measure23();
    PM_measure24();
    PM_measure25();
    PM_measure26();
    PM_measure27();
    PM_measure28();
    PM_measure29();
    PM_measure30();
    PM_measure31();
    PM_measure32();
    PM_measure33();
    PM_measure34();
    PM_measure35();
    PM_measure36();
    PM_measure37();
    PM_measure38();
    PM_measure39();
    PM_measure40();
    PM_measure41();
    PM_measure42();
    PM_measure43();
    PM_measure44();
    PM_measure45();
    PM_measure46();
    PM_measure47();
    PM_measure48();
    PM_measure49();
    PM_measure50();
    PM_measure51();
    PM_measure52();
    PM_measure53();
}

void PM_Full(SONG *s){
    SONG song[] = {
        PM_setBPM,
        PM_measure1,
        PM_measure2,
        PM_measure3,
        PM_measure4,
        PM_measure5,
        PM_measure6,
        PM_measure7,
        PM_measure8,
        PM_measure9,
        PM_measure10,
        PM_measure11,
        PM_measure12,
        PM_measure13,
        PM_measure14,
        PM_measure15, // trouble here
        PM_measure16, // trouble here
        PM_measure17, // trouble here
        PM_measure18, // trouble here
        PM_measure19,
        PM_measure20,
        PM_measure21,
        PM_measure22,
        PM_measure23,
        PM_measure24,
        PM_measure25,
        PM_measure26,
        PM_measure27,
        PM_measure28,
        PM_measure29,
        PM_measure30,
        PM_measure31,
        PM_measure32,
        PM_measure33,
        PM_measure34,
        PM_measure35,
        PM_measure36,
        PM_measure37,
        PM_measure38,
        PM_measure39,
        PM_measure40,
        PM_measure41,
        PM_measure42,
        PM_measure43,
        PM_measure44,
        PM_measure45,
        PM_measure46,
        PM_measure47,
        PM_measure48,
        PM_measure49,
        PM_measure50,
        PM_measure51,
        PM_measure52,
        PM_measure53,
        PM_measure11,
        PM_measure12,
        PM_measure13,
        PM_measure14,
        PM_measure15, // trouble here
        PM_measure16, // trouble here
        PM_measure17, // trouble here
        PM_measure18, // trouble here
        PM_measure19,
        PM_measure20,
        PM_measure21,
        PM_measure22,
        PM_measure23,
        PM_measure24,
        PM_measure25,
        PM_measure26,
        PM_measure27,
        PM_measure28,
        PM_measure29,
        PM_measure30,
        PM_measure31,
        PM_measure32,
        PM_measure33,
        PM_measure34,
        PM_measure35,
        PM_measure36,
        PM_measure37,
        PM_measure38,
        PM_measure39,
        PM_measure40,
        PM_measure41,
        PM_measure42,
        PM_measure43,
        PM_measure44,
        PM_measure45,
        PM_measure46,
        PM_measure47,
        PM_measure48,
        PM_measure49,
        PM_measure50,
        PM_measure51,
        PM_measure52,
        PM_measure53
    };
    int i;
    for (i = 0; i < (PM_FULL_SIZE)  ; i++){
        s[i] = song[i];
    }
}



int main(void)
{
    init();

    while (1)
    {
        setOutput(LED1, ON);
        while(!getInput(SWITCH)){};
        setOutput(LED1, OFF);

        SONG currentSong[PM_FULL_SIZE];

        PM_Full(currentSong);

        int i;

        for (i = 0; i < (PM_FULL_SIZE)  ; i++){
            currentSong[i]();
            if(!getInput(SWITCH)){
                //switch song
                break;
            }
        }

    }
}
