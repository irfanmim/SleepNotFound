#include "panda.h"
#include <iostream>
using namespace std;

Panda :: Panda (int x, int y, int weight) : LandAnimal(x, y, weight), Herbivore(weight) {

}

void Panda::renderAnimal(){
	cout << "p";
}

void Panda :: interact() {
	cout << "*Panda duduk sambil makan bambu*" << endl;
}