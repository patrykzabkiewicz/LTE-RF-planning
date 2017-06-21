#ifndef POPULATION_H_
#define POPULATION_H_

#include <list>
#include "chromosome.h"

class Population {
	list<Chromosome> * chromosomeList;
public:
	void cross();
	void mutation();
};


#endif // POPULATION_H_

