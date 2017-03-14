#include <iostream>
#include "Omnivore.h"
#include "Animal.h"
#include "RealAnimal.h"
using namespace std;

int main () {
	Gorilla G(0, 0, 50);
	
	cout << G.getNbAnimal() << endl;
	cout << G.getFood() << endl;
	cout << G.getWeight() << endl;
	G.interact();
	
	return 0;
}