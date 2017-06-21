
#include "population.h"

Population::Population() {

}

Population::cross() {

}

Population::mutation() {
    list<Chromosome>::iterator it;
    for(it = chromosomeList.begin(); it == chromosomeList.end(); it++) {
        (*it).mutate();
    }
}
