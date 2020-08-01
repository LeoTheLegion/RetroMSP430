/*
 * Pokemon_R_B_Y_Champion_Theme.h
 *
 *  Created on: Jul 29, 2020
 *      Author: HalEl
 *
 *      https://www.ninsheetmusic.org/browse/arranger/939
 */

#ifndef POKEMON_R_B_Y_CHAMPION_THEME_H_
#define POKEMON_R_B_Y_CHAMPION_THEME_H_

#include <NotePlayer.h>
#include <Song.h>

#define PM_FULL_SIZE 97

void PM_setBPM()
{
    setBPM(140);
}

void PM_measure1()
{
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
    Play(E4);//half note
    Play(E4);//half note
    Play(E4);//half note
    Play(E4);//half note
    Play(E4);//half note
        Play(E4);//half note
    Play(B4);
    Play(Eb4);//half note
    Play(Eb4);//half note
    Play(Eb4);//half note
    Play(Eb4);//half note
    Play(Eb4);//half note
        Play(Eb4);//half note
    Play(Bb4);
}

void PM_measure12()
{
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(A3);
    Play(B3); //half note
    Play(B3); //half note
    Play(B3); //half note
    Play(B3); //half note
    Play(B3); //half note
    Play(B3); //half note
    Play(As3);
}

void PM_measure13()
{
    Play(As3);
    Play(B3); //half note
    Play(B3); //half note
    Play(B3); //half note
    Play(B3); //half note
    Play(B3); //half note
    Play(B3); //half note
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
    Play(B3); //half note
    Play(B3); //half note
    Play(B3); //half note
    Play(B3); //half note
    Play(B3); //half note
    Play(B3); //half note
}

void PM_measure18()
{
    Play(Ds4);
    Play(E4); //half note
    Play(E4); //half note
    Play(E4); //half note
    Play(E4); //half note
    Play(E4); //half note
    Play(E4); //half note
}

void PM_measure19()
{
    Play(B4); //half note
    Play(B4); //half note
    Play(B4); //half note
    Play(B4); //half note
    Play(B4); //half note
    Play(B4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
}

void PM_measure20()
{
    Play(F4); //half note
    Play(F4); //half note
    Play(F4); //half note
    Play(F4); //half note
    Play(F4); //half note
    Play(F4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
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

void PM_measure23()
{
    /*
     */
    Play(E4);
    Play(E4);
    Play(D4);
    Play(E4); ///
    Play(F4);
    Play(E4);
    Play(D4);
    Play(F4); ///
    Play(E4);
    Play(E4);
    Play(Gb4);
    Play(F4); ///
    Play(E4);
    Play(D4);
    Play(E4);
    Play(F4); ////
}

void PM_measure24()
{
    Play(E4);
    Play(E4);
    Play(D4);
    Play(E4); ///
    Play(Ds4);
    Play(Cs4);
    Play(C4);
    Play(D4); //
    Play(E4);
    Play(E4);
    Play(B3);
    Play(D3);
}

void PM_measure25()
{
    Play(E4);
    Play(B4);
    Play(A3);
    Play(F4);
    Play(Fs4);
    Play(F4); //half note
    Play(F4); //half note
    Play(F4); //half note
    Play(F4); //half note
    Play(F4); //half note
    Play(F4); //half note
}

void PM_measure26()
{
    Play(F4);
    Play(B4);
    Play(B4);
    Rest(1);
    Play(B4);
    Play(B4);
    Rest(1);
    Play(B4);
}

void PM_measure27()
{
    PM_measure25();
}

void PM_measure28()
{
    PM_measure26();
}

void PM_measure29()
{
    Play(Fs4);
    Play(Cs4);
    Play(As4);
    Play(G4);
    Play(Gs4);
    Play(G4); //half note
    Play(G4); //half note
    Play(G4); //half note
    Play(G4); //half note
    Play(G4); //half note
    Play(G4); //half note
}

void PM_measure30()
{
    Play(G4);
    Play(Cs4);
    Play(C4);
    Rest(1);
    Play(C4);
    Play(C4);
    Rest(1);
    Play(C4);
}

void PM_measure31()
{
    Rest(1);
    Play(Cs4);
    Play(C4);
    Rest(1);
    Play(C4);
    Play(C4);
    Rest(1);
    Play(E4);
    Play(F4);
}

void PM_measure32()
{
    Play(Fs4); //full note
    Play(Fs4); //full note
    Play(Fs4); //full note
    Play(Fs4); //full note
    Play(Fs4); //full note
    Play(Fs4); //full note
    Play(Fs4); //full note
    Play(Fs4); //full note
    Play(Fs4); //full note
    Play(Fs4); //full note
    Play(Fs4); //full note
    Play(Fs4); //full note
}

void PM_measure33()
{
    Play(Fs3); //full note
    Play(Fs3); //full note
    Play(Fs3); //full note
    Play(Fs3); //full note
    Play(Fs3); //full note
    Play(Fs3); //full note
    Play(Fs3); //full note
    Play(Fs3); //full note
    Play(Fs3); //full note
    Play(Fs3); //full note
    Play(Fs3); //full note
    Play(Fs3); //full note
}

void PM_measure34()
{
    Play(Cs4);
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
}

void PM_measure35()
{
    Play(B4);
    Play(B4); //half note
    Play(B4); //half note
    Play(B4); //half note
    Play(B4); //half note
    Play(B4); //half note
    Play(B4); //half note
}

void PM_measure36()
{
    Play(E4); //full note
    Play(E4); //full note
    Play(E4); //full note
    Play(E4); //full note
    Play(E4); //full note
    Play(E4); //full note
    Play(E4); //full note
    Play(E4); //full note
    Play(E4); //full note
    Play(E4); //full note
    Play(E4); //full note
    Play(E4); //full note
}

void PM_measure37()
{
    Play(A4); //full note
    Play(A4); //full note
    Play(A4); //full note
    Play(A4); //full note
    Play(A4); //full note
    Play(A4); //full note
    Play(A4); //full note
    Play(A4); //full note
    Play(A4); //full note
    Play(A4); //full note
    Play(A4); //full note
    Play(A4); //full note
}

void PM_measure38()
{
    Play(F4); //full note
    Play(F4); //full note
    Play(F4); //full note
    Play(F4); //full note
    Play(F4); //full note
    Play(F4); //full note
    Play(F4); //full note
    Play(F4); //full note
    Play(F4); //full note
    Play(F4); //full note
    Play(F4); //full note
    Play(F4); //full note
}

void PM_measure39()
{
    Play(C5); //half note
    Play(C5); //half note
    Play(C5); //half note
    Play(C5); //half note
    Play(C5); //half note
    Play(C5); //half note
    Play(Bb4); //half note
    Play(Bb4); //half note
    Play(Bb4); //half note
    Play(Bb4); //half note
    Play(Bb4); //half note
    Play(Bb4); //half note
}

void PM_measure40()
{
    Play(Cs4);
    Play(E4); //half note
    Play(E4); //half note
    Play(E4); //half note
    Play(E4); //half note
    Play(E4); //half note
    Play(E4); //half note
}

void PM_measure41()
{
    Play(A3);
    Play(Cs4); //half note
    Play(Cs4); //half note
    Play(Cs4); //half note
    Play(Cs4); //half note
    Play(Cs4); //half note
    Play(Cs4); //half note
}

void PM_measure42()
{
    Play(D4);
    Play(Cs4);
    Play(B4);
    Play(C4);
    Play(D4);
    Play(C4);
    Play(Gs4);
    Play(D4);
}

void PM_measure43()
{
    PM_measure42();
}

void PM_measure44()
{
    PM_measure15();
}

void PM_measure45()
{
    PM_measure16();
}

void PM_measure46()
{
    PM_measure17();
}

void PM_measure47()
{
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(C4); //half note
    Play(C4); //half note
    Play(C4); //half note
    Play(C4); //half note
    Play(C4); //half note
    Play(C4); //half note
}

void PM_measure48()
{
    PM_measure15();
}

void PM_measure49()
{
    PM_measure16();
}

void PM_measure50()
{
    PM_measure17();
}

void PM_measure51()
{
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(D4); //half note
    Play(F4); //half note
    Play(F4); //half note
    Play(F4); //half note
    Play(F4); //half note
    Play(F4); //half note
    Play(F4); //half note
}

void PM_measure52()
{
    PM_measure36();
}

void PM_measure53()
{
    Play(As4);
    Play(B4); //half note
    Play(B4); //half note
    Play(B4); //half note
    Play(B4); //half note
    Play(B4); //half note
    Play(B4); //half note
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

#endif /* POKEMON_R_B_Y_CHAMPION_THEME_H_ */
