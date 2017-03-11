#include <iostream>
#include "Shark.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

Shark :: Shark (int x, int y, int weight) : Animal(x, y, weight), Carnivore(weight) {
	;
}

void Shark :: interact() {cout << "*Ikan hiu memperhatikan kamu*" << endl;}