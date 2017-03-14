#include "Animal.h"

int Animal::NbAnimal = 0;

int Animal::getWeight() const {
	return weight;
}

int Animal::getNbAnimal() {
	return NbAnimal;
}

Animal::Animal(int x, int y, int w) : loc(x, y), weight(w) {
	NbAnimal++;
}

void Animal :: addWeight (int w) {weight += w;}