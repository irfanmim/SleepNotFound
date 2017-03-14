#include "mantaray.h"
#include <iostream>
using namespace std;

Mantaray :: Mantaray (int x, int y, int weight) : WaterAnimal(x, y, weight), Carnivore(weight) {
	tamed = true;
}

void Mantaray::renderAnimal(){
	cout << "M";
}

void Mantaray :: interact() {
	cout << "*Ikan pari bentuknya aneh sekali ... :| *" << endl;
}
