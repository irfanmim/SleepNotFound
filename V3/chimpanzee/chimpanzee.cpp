#include "chimpanzee.h"
#include <iostream>
using namespace std;

Chimpanzee :: Chimpanzee (int x, int y, int weight) : LandAnimal(x, y, weight), Omnivore(weight) {
	tamed = true;
}

void Chimpanzee::renderAnimal(){
	cout << "m";
}

void Chimpanzee :: interact() {
	cout << "*Chimpanzee garuk-garuk punggung*" << endl;
}
