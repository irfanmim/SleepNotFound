#include <iostream>
#include "Hyena.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

Hyena :: Hyena (int x, int y, int weight) : Animal(x, y, weight), Carnivore(weight) {
	;
}

void Hyena :: interact() {cout << "*Hyena berjalan-jalan mengelilingi kandang*" << endl;}