#include "animal.h"

int Animal::NbAnimal = 0;

int Animal::getWeight() const {
	return weight;
}

bool Animal::IsHabMatch(int hab_code){
	int i = 0;bool found = false;
	while(i < an_code.size() && !found){
		if(hab_code == an_code[i]){
			found = true;
		}else{
			i++;
		}
	}
	return found;
}

int Animal::getNbAnimal() {
	return NbAnimal;
}

Animal::Animal(int x, int y, int w) : loc(x, y), weight(w) {
	NbAnimal++;
}