#include "Animal.h"

int Animal::NbAnimal = 0;

int Animal::getNbAnimal() {
	return NbAnimal;
}

Animal::Animal(int x, int y) : loc(x, y) {
	NbAnimal++;
}

FlyingAnimal::FlyingAnimal(int x, int y) : Animal(x,y){

}

WaterAnimal::WaterAnimal(int x, int y) : Animal(x,y){
	
}

LandAnimal::LandAnimal(int x, int y) : Animal(x,y){
	
}
