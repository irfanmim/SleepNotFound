#include <iostream>
#include "Peacock.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

Peacock :: Peacock (int x, int y, int weight) : Animal(x, y, weight), Herbivore(weight) {
	;
}

void Peacock :: interact() {cout << "*Burung merak memamerkan sayapnya, sombong sekali :(*" << endl;}