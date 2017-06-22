#ifndef CHROMOSOME_H_ 
#define CHROMOSOME_H_

struct Chromosome {
	vect value;	// overall goal function value
	vect product; // tensor product

	int genes_count;
	vect * similarity_map;	// similarity memory bit-map
	vect * genes;
	vect * weights;
	vect * error;
	vect * tensor;

	Chromosome();
	Chromosome(Chromosome &B);
	virtual void ~Chromosome();
	void compare(Chromosome * ch); /* compare how far from each other are two Chromosomes */
	void recalculate();	/* recalculate value of goal function */
	void mutate();		/* mutate Chromosome to similar new entity */
};


#endif // CHROMOSOME_H_
