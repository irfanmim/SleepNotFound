#include "Animal.h"
#include <iostream>
using namespace std;

int Animal::NbAnimal = 0;

int Animal::getNbAnimal() {return NbAnimal;}
Animal::Animal(int x, int y, int initw) : loc(x, y), weight(initw) {
	NbAnimal++;
}
