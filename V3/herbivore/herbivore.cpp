#include "herbivore.h"

int Herbivore::nHerbivore = 0;

float Herbivore::total_hFood = 0;

float Herbivore::getFood() const {
	return hFood;
}

Herbivore::Herbivore(int weight) : hFood(weight * factor) {
	nHerbivore++;
	total_hFood += hFood;
}