#include "omnivore.h"

int Omnivore::nOmnivore = 0;

float Omnivore::total_oFood = 0;

float Omnivore :: getFood() const {
	return oFood;
}

Omnivore :: Omnivore(int weight) : Herbivore(factor * weight), Carnivore(factor * weight) {
	oFood = hFood + cFood;
	nOmnivore++;
	total_oFood += oFood;
}