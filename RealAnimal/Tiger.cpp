#include <iostream>
#include "Tiger.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

Tiger :: Tiger (int x, int y, int weight) : Animal(x, y, weight), Carnivore(weight) {
	;
}

void Tiger :: interact() {cout << "*Aummmmmmmmm .... *" << endl;}