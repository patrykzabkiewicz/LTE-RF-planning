
#include "chromosome.h"

Chromosome::Chromosome() {
    weights = new vect[genes_count];
    genes = new vect[genes_count];
    error = new vect[genes_count];
}

Chromosome::Chromosome(Chromosome &B) {
    
}

Chromosome::mutate() {

}

Chromosome::recalculate() {

}

Chromosome::compare(Chromosome &B) {

}
