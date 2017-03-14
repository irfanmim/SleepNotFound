#include "tiger.h"
#include <iostream>
using namespace std;

Tiger :: Tiger (int x, int y, int weight) : LandAnimal(x, y, weight), Carnivore(weight) {
	tamed = false;
}

void Tiger::renderAnimal(){
	cout << "t";
}

void Tiger :: interact() {
	cout << "*Aummmmmmmmm .... *" << endl;
}