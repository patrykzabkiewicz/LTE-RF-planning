#ifndef ANTENA_H_
#define ANTENA_H_

#define PI 3.141592

#include <list>

/* phisical device modeling */
struct Antena {
	vect x;
	vect y;
	vect directionAngle; 	// facing of the antena
	vect downtilt;			// angle of downtilt
	vect height;
	vect * anglePropagation;
	int anglePropagationCount;
	int signalStrenght;
	int signalQuality;
	int bestCINR;
	int uplinkThrouput;
	int downlinkThrouput;

	void move(vect x, vect y);
	void calculatePropagation();	// calculate signal strenght

};


#endif // ANTENA_H_
