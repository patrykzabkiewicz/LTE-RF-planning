#ifndef ANTENA_H_
#define ANTENA_H_

#define PI 3.141592

#include <list>

struct Antena {
	vect x;
	vect y;
	vect angle;
	vect height;
	vect * anglePropagation;
};

struct Site {
	list<Antena> * antenaList;
};

#endif // ANTENA_H_
