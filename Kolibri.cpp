#include <iostream>
#include "Kolibri.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

Kolibri :: Kolibri (int x, int y, int weight) : Animal(x, y, weight), Omnivore(weight) {
	;
}

void Kolibri :: interact() {cout << "*Paruh kolibri sangat panjang, kerenn *" << endl;}