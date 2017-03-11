#include <iostream>
#include "Komodo.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

Komodo :: Komodo (int x, int y, int weight) : Animal(x, y, weight), Carnivore(weight) {
	;
}

void Komodo :: interact() {cout << "*Komodo berjalan lambat sekali*" << endl;}