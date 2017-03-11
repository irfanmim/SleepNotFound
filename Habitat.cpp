#include "Habitat.h"
#include <iostream>
using namespace std;

Habitat::Habitat(int x,int y):Cell(x,y){

}

WaterHabitat::WaterHabitat(int x,int y):Habitat(x,y){

}

AirHabitat::AirHabitat(int x,int y):Habitat(x,y){

}

LandHabitat::LandHabitat(int x,int y):Habitat(x,y){
	
}

void WaterHabitat::render(){
	cout << "W";
}

void AirHabitat::render(){
	cout << "A";
}

void LandHabitat::render(){
	cout << "L";
}