#include "coala.h"
#include <iostream>
using namespace std;

Coala :: Coala (int x, int y, int weight) : LandAnimal(x, y, weight), Herbivore(weight) {

}

void Coala::renderAnimal(){
	cout << "a";
}

void Coala :: interact() {
	cout << "*Coala imut sekali <3*" << endl;
}
