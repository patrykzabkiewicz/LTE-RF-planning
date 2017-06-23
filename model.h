#ifndef MODEL_H_
#define MODEL_H_


#include "antena.h"
#include <list>

/* virtual device model which agregates couple of antenas */
struct Site {
	int mobility;
	int handovers;
	int cells;
	int bearers;
	int maxUE;

	int site_vector[5];

	// optimized frequency plan
	int * ResourceBlocks[];

	list<Site> * neighborCell;
	list<Antena> * antenaList;
};

/* overall virtual model of the whole simulation */
struct Model {
	int numberOfSites;
	vect cost;
	vect income;
	list<Site> * sitesList;
};

#endif // MODEL_H_
