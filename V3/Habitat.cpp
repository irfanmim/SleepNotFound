#include "Habitat.h"
#include <iostream>
using namespace std;

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


WaterHabitat::WaterHabitat(int x,int y,bool s):Habitat(x,y,s){

}

AirHabitat::AirHabitat(int x,int y,bool s):Habitat(x,y,s){

}

LandHabitat::LandHabitat(int x,int y,bool s):Habitat(x,y,s){
	
}

void WaterHabitat::render(){
	if(isInCage){
		cout << "W";
	}else{
		cout << "w";
	}
}

void AirHabitat::render(){
	if(isInCage){
		if(a==NULL){
			cout << "A";
		}else{
			cout << " ";
		}
	}else{
		cout << "a";
	}
}

void LandHabitat::render(){
	if(isInCage){
		cout << "L";
	}else{
		cout << "l";
	}
}