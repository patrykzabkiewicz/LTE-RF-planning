#ifndef POPULATION_H_
#define POPULATION_H_

#include <list>
#include "chromosome.h"

/* population of the new */
class Population {
	list<Chromosome> * chromosomeList;
	list<int> * sortedList;
	void sort();
public:
	Population();
	Population(Population &P);
	virtual void ~Population();
	void cross();
	void mutation();
};


#endif // POPULATION_H_

