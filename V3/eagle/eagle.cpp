#include "eagle.h"
#include <iostream>
using namespace std;

Eagle :: Eagle (int x, int y, int weight) : FlyingAnimal(x, y, weight), Carnivore(weight){

}

void Eagle::renderAnimal(){
	cout << "e";
}

void Eagle :: interact() {
	cout << "*Tatapan burung elang kelihatan tajam sekali*" << endl;
}