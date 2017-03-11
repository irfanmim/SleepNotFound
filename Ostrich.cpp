#include <iostream>
#include "Ostrich.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

Ostrich :: Ostrich (int x, int y, int weight) : Animal(x, y, weight), Omnivore(weight) {
	;
}

void Ostrich :: interact() {cout << "*Burung unta sedang mengubur kepalanya dalam tanah*" << endl;}