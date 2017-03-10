#include <iostream>
#include "Omnivore.h"
#include "Carnivore.h"
#include "Herbivore.h"
#include "Animal.h"
using namespace std;

class Monyet : public Animal, public Omnivore {
public :
	Monyet(int x, int y, int weight) : Animal(x, y, weight), Omnivore(weight) {
			;
	}
	int getFood() {
		return oFood;
	}
	int getWeight() {
		return weight;
	}
	void interact() {;}
};

int main () {
	Monyet M(0, 0, 50);
	
	cout << M.getNbAnimal() << endl;
	cout << M.getFood() << endl;
	cout << M.getWeight() << endl;
	
	return 0;
}