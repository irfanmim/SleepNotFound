#include "habitat.h"

Habitat::Habitat(int x,int y,bool s):Cell(x,y),a(NULL),isInCage(s){

}

Habitat::~Habitat(){
	delete a;
}


Animal * Habitat::getAnimal(){
	return a;
}

void Habitat::setAnimal(Animal * an){
	a = an;
}

void Habitat::resetAnimal(){
	a = NULL;
}

void Habitat::wakeAnimal(){
	a -> interact();
}

bool Habitat::getCageStatus() const{
	return isInCage;
}

void Habitat::setCageStatus(bool s){
	isInCage = s;
}

int Habitat::GetHabCode() const{
	return hab_code;
}
