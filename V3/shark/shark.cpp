#include "shark.h"
#include <iostream>
using namespace std;

Shark :: Shark (int x, int y, int weight) : WaterAnimal(x, y, weight), Carnivore(weight) {
	tamed = false;
}

void Shark::renderAnimal(){
	cout << "S";
}

void Shark :: interact() {
	cout << "*Ikan hiu memperhatikan kamu*" << endl;
}