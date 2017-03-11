#include <iostream>
#include "Coala.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

Coala :: Coala (int x, int y, int weight) : Animal(x, y, weight), Herbivore(weight) {
	;
}

void Coala :: interact() {cout << "*Coala imut sekali <3*" << endl;}