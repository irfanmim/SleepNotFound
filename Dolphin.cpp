#include <iostream>
#include "Dolphin.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

Dolphin :: Dolphin (int x, int y, int weight) : Animal(x, y, weight), Carnivore(weight) {
	;
}

void Dolphin :: interact() {cout << "*Ikan lumba-lumba melakukan dolphin jump ! Wuuuoooowww !! (*o*) *" << endl;}