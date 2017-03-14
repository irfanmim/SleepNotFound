#include "gorilla.h"
#include <iostream>
using namespace std;

Gorilla :: Gorilla (int x, int y, int weight) : LandAnimal(x, y, weight), Omnivore(weight) {

}

void Gorilla::renderAnimal(){
	cout << "g";
}

void Gorilla :: interact() {
	cout << "*Gorilla menggedor kandang dan berusaha menerkam kamu*" << endl;
}
