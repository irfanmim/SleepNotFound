#include "lion.h"
#include <iostream>
using namespace std;

Lion :: Lion (int x, int y, int weight) : LandAnimal(x, y, weight), Carnivore(weight) {

}

void Lion::renderAnimal(){
	cout << "i";
}

void Lion :: interact() {
	cout << "*Singa menyanyi lagu Lion King*" << endl;
}
