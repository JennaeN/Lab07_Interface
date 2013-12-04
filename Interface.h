/*
 * Interface.h
 *
 *  Created on: Dec 4, 2013
 *      Author: C15Jennae.Steinmiller
 */

#ifndef INTERFACE_H_
#define INTERFACE_H_


void senseLeft();

void senseRight();

void senseCenter();

char IsLeftHighLow(int threshhold);

char IsRightHighLow(int threshhold);

char IsCenterHighLow(int threshhold);

#endif /* INTERFACE_H_ */
