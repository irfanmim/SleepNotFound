#include <iostream>
#include "Chimpanzee.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

Chimpanzee :: Chimpanzee (int x, int y, int weight) : Animal(x, y, weight), Omnivore(weight) {
	;
}

void Chimpanzee :: interact() {cout << "*Chimpanzee garuk-garuk punggung*" << endl;}