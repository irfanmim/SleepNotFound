#include <iostream>
#include "Cheetah.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

Cheetah :: Cheetah (int x, int y, int weight) : Animal(x, y, weight), Carnivore(weight) {
	;
}

void Cheetah :: interact() {cout << "*Cheetah tidur siang*" << endl;}