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
    C6 = 1046,
    D6 = 1174,
    Ds6 = 1244,
    E6 = 1318,
    F6 = 1396,
    Fs6 = 1479,
    G6 = 1567,
    Gs6 = 1661,
    A6 =  1760,
    As6 = 1864,
    B6 = 1975,
    E7 = 2637,
    F7 = 2793,
    G7 = 3135,
    A7 = 3520,
    B7 = 3951
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
    timeElapsed_Target_ms += duration;
    while (!isTimeUp (timeElapsed_Target_ms)){}
}

void Play(Notes note, int num_of_ticks){
    PlayNote(note, num_of_ticks * ms_per_tick);
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
