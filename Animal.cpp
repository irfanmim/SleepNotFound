#include "Animal.h"

int Animal::NbAnimal = 0;

int Animal::getWeight() const {
	return weight;
}

int Animal::getNbAnimal() {
	return NbAnimal;
}

Animal::Animal(int x, int y, int w) : loc(x, y), weight(w) {
	NbAnimal++;
}

FlyingAnimal::FlyingAnimal(int x, int y, int w) : loc(x, y), weight(w){

}

WaterAnimal::WaterAnimal(int x, int y, int w) : loc(x, y), weight(w){
	
}

LandAnimal::LandAnimal(int x, int y, int w) : loc(x, y), weight(w){
	
}
