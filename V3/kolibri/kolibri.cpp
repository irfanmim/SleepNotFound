#include "kolibri.h"
#include <iostream>
using namespace std;

Kolibri :: Kolibri (int x, int y, int weight) : FlyingAnimal(x, y, weight), Omnivore(weight){
	tamed = true;	
}

void Kolibri::renderAnimal(){
	cout << "k";
}

void Kolibri :: interact() {
	cout << "*Paruh kolibri sangat panjang, kerenn *" << endl;
}