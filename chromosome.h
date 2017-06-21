#ifndef CHROMOSOME_H_ 
#define CHROMOSOME_H_

#include <vector>

class Chromosome {
	int value;	// overall goal function value
	int * map;	// similarity memory bit-map
	vector<int> * geneList;
	
public:
	Chromosome();
	Chromosome(Chromosome &B);
	virtual void ~Chromosome();
	void compare(Chromosome * ch); /* compare how far from each other are two Chromosomes */
	void recalculate();	/* recalculate value of goal function */
	void mutate();		/* mutate Chromosome to similar new entity */
};


#endif // CHROMOSOME_H_
