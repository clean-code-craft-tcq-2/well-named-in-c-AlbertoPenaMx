/*
 * ColorCodeTest.h
 *
 *  Created on: Jan 14, 2022
 *      Author: APE1GA
 */

#ifndef COLORCODETEST_H_
#define COLORCODETEST_H_

void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor);

void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber);

#endif /* COLORCODETEST_H_ */
