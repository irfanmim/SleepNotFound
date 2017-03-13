#include "Consumption.h"
#include <iostream>
using namespace std;

int Herbivore::nHerbivore = 0;

float Herbivore::total_hFood = 0;

float Herbivore::getFood() const {
	return hFood;
}

Herbivore::Herbivore(int weight) : hFood(weight * factor) {
	nHerbivore++;
	total_hFood += hFood;
}

int Carnivore::nCarnivore = 0;

float Carnivore::total_cFood = 0;

float Carnivore :: getFood() const {
	return cFood;
}

Carnivore :: Carnivore(int weight) : cFood(weight * factor) {
	nCarnivore++;
	total_cFood += cFood;
}

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