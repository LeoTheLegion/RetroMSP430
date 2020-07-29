/*
 * NotePlayer.h
 *
 *  Created on: Jul 15, 2020
 *      Author: LeoTheLegion
 */

#ifndef NOTEPLAYER_H_
#define NOTEPLAYER_H_

#include <Timer.h>
#include <Frequency.h>

typedef enum Notes{
    Testnote1 = 500,
    Testnote2 = 1000,
    Testnote3 = 1500,
    ////////////////
    C3 = 130,
    D3 = 146,
    Ds3 = 155,
    Eb3 = 155,
    E3 = 164,
    F3 = 174,
    Fs3 = 184,
    G3 = 195,
    Gs3 =  207,
    A3 =  220,
    As3 = 233,
    Bb3= 233,
    B3 = 246,

    ////////////////////
    C4 = 261,
    Cs4 = 277,
    Db4 = 277,
    D4 = 293,
    Ds4 = 311,
    Eb4 = 311,
    E4 = 329,
    F4 = 349,
    Fs4 = 369,
    Gb4 = 369,
    G4 = 391,
    Gs4 =   415,
    Ab4 = 415,
    A4 =  440,
    As4 = 466,
    Bb4 = 466,
    B4 = 493,
    /////////////////////
    C5 = 523,
    E5 = 659
}Notes;

#define TICKS_PER_BEAT 4

static unsigned int ms_per_tick = 0;
unsigned int timeElapsed_Target_ms = 0;

void setSpeakerPin(int pin){
    setUpTimer();
    setupFrequency(pin);
}

void setBPM(unsigned int bpm) {
    ms_per_tick = 60000 / (TICKS_PER_BEAT * bpm);
}

void PlayNote(Notes note, int duration){
    setFrequency(note);
    timeElapsed_Target_ms = timeElapsed_Current_ms + duration;
    while (!isTimeUp (timeElapsed_Target_ms)){}
}

void Play(Notes note){
    PlayNote(note,  ms_per_tick);
}

void Pause(int duration){
    setFrequency(-1);
    timeElapsed_Target_ms += duration;
    while (!isTimeUp (timeElapsed_Target_ms)){}
}

void Rest(int num_of_ticks){
    Pause(num_of_ticks * ms_per_tick);
}

#endif /* NOTEPLAYER_H_ */
