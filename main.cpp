/**
 *
 *  LTE RF planning
 *
 *  Simulation software to calculate efficency of the radio antenas
 *  and provides cost calculations
 *
 *  Secondary goal is to design aplication with speed in mind
 *
 *  Author: Patryk Ząbkiewicz
 *
 */

#include <iostream>
#include <stdlib.h> 

#include "population.h"

int * matrix[];
int genes_count;

using namespace std;

int main(int argc, char * argv[]) {

    int generateMapFlag = 0;

    // read arguments
    if(argc > 1) {
        generateMapFlag = atoi(argv[1]);
        
    } else {
        cout << "usage: " << argv[0] << " generateMapFlag " << endl;
        return 0; // exit
    }

    // load map

    // create antenas

    // create population

    // start simulation

    // iterate over the results

    // save results to file and display on screen

    return 0;
}
