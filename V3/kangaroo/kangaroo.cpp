#include "kangaroo.h"
#include <iostream>
using namespace std;

Kangaroo :: Kangaroo (int x, int y, int weight) : LandAnimal(x, y, weight), Herbivore(weight) {
	tamed = true;
}

void Kangaroo::renderAnimal(){
	cout << "n";
}

void Kangaroo :: interact() {
	cout << "*Kangaroo minum Extra Joss supaya kuat tinju*" << endl;
}
