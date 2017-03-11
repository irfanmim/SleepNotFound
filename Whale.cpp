#include <iostream>
#include "Whale.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

Whale :: Whale (int x, int y, int weight) : Animal(x, y, weight), Carnivore(weight) {
	;
}

void Whale :: interact() {cout << "*Ikan paus hampir tidak muat di habitatnya*" << endl;}