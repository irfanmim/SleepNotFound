#include "peacock.h"
#include <iostream>
using namespace std;

Peacock :: Peacock (int x, int y, int weight) : LandAnimal(x, y, weight), Herbivore(weight) {
	tamed = true;
}

void Peacock::renderAnimal(){
	cout << "&";
}

void Peacock :: interact() {
	cout << "*Burung merak memamerkan sayapnya, sombong sekali :(*" << endl;
}
