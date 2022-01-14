/*
 * ReferenceManual.c
 *
 *  Created on: Jan 13, 2022
 *      Author: APE1GA
 */

#include <stdio.h>
#include "ColorCodeTranslator.h"
#include "ReferenceManual.h"

void printReferenceManual ()
{
	unsigned int pairNumber;
	ColorPair colorPair;
	char colorPairStr[MAX_COLORPAIR_NAME_CHARS];

	printf ("\n\t\tPair Color code Reference Manual\t\t\n");
	printf ("==========================================================\n");
	printf ("Pair Num\tMajor Color\t\tMinor Color\t\n");
	printf ("----------------------------------------------------------\n");
	for (pairNumber = PAIR_NUMBER_1; pairNumber <= PAIR_NUMBER_25; pairNumber++)
	{
		colorPair = GetColorFromPairNumber(pairNumber);
		ColorPairToString(&colorPair, colorPairStr);
		printf ("%-8d\t%-10s\n", pairNumber, colorPairStr);
		printf("==========================================================\n");
	}
}
