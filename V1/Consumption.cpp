#include "Consumption.h"

int Herbivore::nHerbivore = 0;

int Herbivore::total_hFood = 0;

int Herbivore::getFood() const {
	return hFood;
}

Herbivore::Herbivore(float weight) : hFood(weight * factor) {
	nHerbivore++;
	total_hFood += hFood;
}

int Carnivore::nCarnivore = 0;

int Carnivore::total_cFood = 0;

int Carnivore :: getFood() const {
	return cFood;
}

Carnivore :: Carnivore(float weight) : cFood(weight * factor) {
	nCarnivore++;
	total_cFood += cFood;
}

int Omnivore::nOmnivore = 0;

int Omnivore::total_oFood = 0;

int Omnivore :: getFood() const {
	return oFood;
}

Omnivore :: Omnivore(float weight) : Herbivore(factor * weight), Carnivore(factor * weight) {
	oFood = hFood + cFood;
	nOmnivore++;
	total_oFood += oFood;
}