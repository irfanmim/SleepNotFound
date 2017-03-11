#include <iostream>
#include "Mantaray.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

Mantaray :: Mantaray (int x, int y, int weight) : Animal(x, y, weight), Carnivore(weight) {
	;
}

void Mantaray :: interact() {cout << "*Ikan pari bentuknya aneh sekali ... :| *" << endl;}