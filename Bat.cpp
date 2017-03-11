#include <iostream>
#include "Bat.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

Bat :: Bat (int x, int y, int weight) : Animal(x, y, weight), Carnivore(weight) {
	;
}

void Bat :: interact() {cout << "*Kelelawar bergelantung terbalik*" << endl;}