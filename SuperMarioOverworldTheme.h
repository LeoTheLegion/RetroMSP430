/*
 * SuperMarioOverworldTheme.h
 *
 *  Created on: Jul 26, 2020
 *      Author: HalEl
 *
 *      http://www.gamemusicthemes.com/sheetmusic/nintendo/supermariobros/overworldtheme/index.html
 */

#ifndef SUPERMARIOOVERWORLDTHEME_H_
#define SUPERMARIOOVERWORLDTHEME_H_

#include <NotePlayer.h>

void SM_setBPM()
{
    setBPM(120);
}

void SM_measure_1()
{
    Play(E4);
    Play(E4);
    Rest(1);
    Play(E4);
    Rest(1);
    Play(C4);
    Play(E4);
    Rest(1);
}

void SM_measure_2()
{
    Play(G4);
    Rest(3);
    Play(G3);
    Rest(3);
}

void SM_measure_3()
{
    Play(C4);
    Rest(2);
    Play(G3);
    Rest(2);
    Play(E3);
    Rest(1);
}

void SM_measure_4()
{
    Rest(1);
    Play(A3);
    Rest(1);
    Play(B3);
    Rest(1);
    Play(Bb3);
    Play(A3);
    Rest(1);
}

void SM_measure_5()
{
    Play(G3);
    Play(E4);
    Rest(1);
    Play(G4);
    Play(A4);
    Rest(1);
    Play(F4);
    Play(G4);
}

void SM_measure_6()
{
    Rest(1);
    Play(E4);
    Rest(1);
    Play(C4);
    Play(D4);
    Play(B3);
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
    Play(G4);
    Play(Fs4);
    Play(F4);
    Play(Ds4);
    Rest(1);
    Play(E4);
}

void SM_measure_12()
{
    Rest(1);
    Play(Gs3);
    Play(A3);
    Play(C3);
    Rest(1);
    Play(A3);
    Play(C3);
    Play(D4);
}

void SM_measure_13()
{
    SM_measure_11();
}

void SM_measure_14()
{
    Rest(1);
    Play(C5);
    Rest(1);
    Play(C5);
    Play(C5);
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
    Play(Eb4);
    Rest(2);
    Play(D4);
    Rest(2);
}

void SM_measure_18()
{
    Play(C4);
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
    Play(C4);
    Play(C4);
    Rest(1);
    Play(C4);
    Rest(1);
    Play(C4);
    Play(D4);
    Rest(1);
}

void SM_measure_28()
{
    Play(E4);
    Play(C4);
    Rest(1);
    Play(A3);
    Play(G3);
    Rest(3);
}

void SM_measure_29()
{
    Play(C4);
    Play(C4);
    Rest(1);
    Play(C4);
    Rest(1);
    Play(C4);
    Play(D4);
    Play(E4);
}

void SM_measure_30()
{
    Rest(7);
}

#endif /* SUPERMARIOOVERWORLDTHEME_H_ */
