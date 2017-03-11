#include <iostream>
#include "Lion.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

Lion :: Lion (int x, int y, int weight) : Animal(x, y, weight), Carnivore(weight) {
	;
}

void Lion :: interact() {cout << "*Singa menyanyi lagu Lion King*" << endl;}