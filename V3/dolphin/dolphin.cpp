#include "dolphin.h"
#include <iostream>
using namespace std;

Dolphin :: Dolphin (int x, int y, int weight) : WaterAnimal(x, y, weight), Carnivore(weight) {
	tamed = true;
}

void Dolphin::renderAnimal(){
	cout << "O";
}

void Dolphin :: interact() {
	cout << "*Ikan lumba-lumba melakukan dolphin jump ! Wuuuoooowww !! (*o*) *" << endl;
}