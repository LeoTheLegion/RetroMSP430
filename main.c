#include <msp430.h> 
#include <Output.h>
#include <Input.h>
#include <NotePlayer.h>
#include <SuperMarioOverworldTheme.h>
#include <Pokemon_R_B_Y_Champion_Theme.h>
#include <Song.h>
#include <stdbool.h>

#define LED1 BIT1
#define LED2 BIT2
#define SWITCH BIT3


static bool POKEMON = true;
static bool MARIO  = false;

bool static selected_song;

void init()
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    setupOutput(LED1);
    setupInput(SWITCH);

    setOutput(LED1, ON);

    setSpeakerPin(LED2);

    _enable_interrupt();

    selected_song = POKEMON;
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
        setOutput(LED1, ON);
        while(!getInput(SWITCH)){};
        setOutput(LED1, OFF);

        SONG currentSong[100];
        int songSize = 0;

        if(selected_song == POKEMON){//pokemon
            songSize = PM_FULL_SIZE;
            PM_Full(currentSong);
        }else{ //mario
            songSize = SM_FULL_SIZE;
            SM_Full(currentSong);
        }

        int i;

        for (i = 0; i < (songSize)  ; i++){
            currentSong[i]();
            if(!getInput(SWITCH)){
                //switch song
                selected_song = !selected_song;
                Pause(1);//To set the freq to -1
                break;
            }
        }
    }
}
