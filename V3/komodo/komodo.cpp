#include "komodo.h"
#include <iostream>
using namespace std;

Komodo :: Komodo (int x, int y, int weight) : LandAnimal(x, y, weight), Carnivore(weight) {

}

void Komodo::renderAnimal(){
	cout << "d";
}

void Komodo :: interact() {
	cout << "*Komodo berjalan lambat sekali*" << endl;
}