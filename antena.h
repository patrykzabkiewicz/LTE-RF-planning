#ifndef ANTENA_H_
#define ANTENA_H_

#define PI 3.141592

#include <list>

struct Antena {
	vect x;
	vect y;
	vect directionAngle; 	// facing of the antena
	vect height;
	vect * anglePropagation;
	int anglePropagationCount;
	int signalStrenght;
	int 

	void move(vect x, vect y);
	void calculatePropagation();	// calculate signal strenght

};

struct Site {
	list<Antena> * antenaList;
};

#endif // ANTENA_H_
