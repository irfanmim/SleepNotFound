#include <iostream>
#include "Kangaroo.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

Kangaroo :: Kangaroo (int x, int y, int weight) : Animal(x, y, weight), Herbivore(weight) {
	;
}

void Kangaroo :: interact() {cout << "*Kangaroo minum Extra Joss supaya kuat tinju*" << endl;}