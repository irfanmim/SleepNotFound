#include <iostream>
#include "Eagle.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

Eagle :: Eagle (int x, int y, int weight) : Animal(x, y, weight), Carnivore(weight) {
	;
}

void Eagle :: interact() {cout << "*Tatapan burung elang kelihatan tajam sekali*" << endl;}