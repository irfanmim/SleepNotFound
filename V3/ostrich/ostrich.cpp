#include "ostrich.h"
#include <iostream>
using namespace std;

Ostrich :: Ostrich (int x, int y, int weight) : LandAnimal(x, y, weight), Omnivore(weight) {

}

void Ostrich::renderAnimal(){
	cout << "s";
}

void Ostrich :: interact() {
	cout << "*Burung unta sedang mengubur kepalanya dalam tanah*" << endl;
}
