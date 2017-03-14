#include "carnivore.h"

int Carnivore::nCarnivore = 0;

float Carnivore::total_cFood = 0;

Carnivore :: Carnivore(int weight) : cFood(weight * factor) {
	nCarnivore++;
	total_cFood += cFood;
}

float Carnivore :: getFood() const {
	return cFood;
}
