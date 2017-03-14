#include "whale.h"
#include <iostream>
using namespace std;

Whale :: Whale (int x, int y, int weight) : WaterAnimal(x, y, weight), Carnivore(weight) {
	tamed = true;
}

void Whale::renderAnimal(){
	cout << "Q";
}

void Whale :: interact() {
	cout << "*Ikan paus hampir tidak muat di habitatnya*" << endl;
}