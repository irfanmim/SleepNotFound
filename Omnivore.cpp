#include <iostream>
#include "Omnivore.h"
using namespace std;

#define factor	0.5

int Omnivore::nOmnivore = 0;
int Omnivore :: total_oFood = 0;
Omnivore :: Omnivore(int weight) : Herbivore(weight), Carnivore(weight) {
	oFood = hFood + cFood;
	nOmnivore++;
	total_oFood += oFood;
}
