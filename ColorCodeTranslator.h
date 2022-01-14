/*
 * ColorCodeTranslator.h
 *
 *  Created on: Jan 12, 2022
 *      Author: APE1GA
 */

#ifndef COLORCODETRANSLATOR_H_
#define COLORCODETRANSLATOR_H_

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[];

extern const char* MinorColorNames[];

extern const int MAX_COLORPAIR_NAME_CHARS;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

void ColorPairToString(const ColorPair* colorPair, char* buffer);

ColorPair GetColorFromPairNumber(int pairNumber);

int GetPairNumberFromColor(const ColorPair* colorPair);

#endif /* COLORCODETRANSLATOR_H_ */
