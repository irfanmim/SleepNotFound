#include <iostream>
#include "Orangutan.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

Orangutan :: Orangutan (int x, int y, int weight) : Animal(x, y, weight), Omnivore(weight) {
	;
}

void Orangutan :: interact() {cout << "*Orangutan tidur siang*" << endl;}