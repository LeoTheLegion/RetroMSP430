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
    Testnote3 = 1500
}Notes;

unsigned int timeElapsed_Target_ms = 0;

void setSpeakerPin(int pin){
    setUpTimer();
    setupFrequency(pin);
}
void PlayNote(Notes note, int duration){
    setFrequency(note);
    timeElapsed_Target_ms += duration;
    while (!isTimeUp (timeElapsed_Target_ms)){}
}

void Pause(int duration){
    setFrequency(-1);
    timeElapsed_Target_ms += duration;
    while (!isTimeUp (timeElapsed_Target_ms)){}
}


#endif /* NOTEPLAYER_H_ */
