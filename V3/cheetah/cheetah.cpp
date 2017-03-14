#include "cheetah.h"
#include <iostream>
using namespace std;

Cheetah :: Cheetah (int x, int y, int weight) : LandAnimal(x, y, weight), Carnivore(weight) {

}

void Cheetah::renderAnimal(){
	cout << "h";
}

void Cheetah :: interact() {
	cout << "*Cheetah tidur siang*" << endl;
}