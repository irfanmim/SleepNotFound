#include "hyena.h"
#include <iostream>
using namespace std;

Hyena :: Hyena (int x, int y, int weight) : LandAnimal(x, y, weight), Carnivore(weight) {
	tamed = false;
}

void Hyena::renderAnimal(){
	cout << "y";
}

void Hyena :: interact() {
	cout << "*Hyena berjalan-jalan mengelilingi kandang*" << endl;
}