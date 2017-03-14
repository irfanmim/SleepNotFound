#include "land_habitat.h"
#include <iostream>
using namespace std;

LandHabitat::LandHabitat(int x,int y,bool s):Habitat(x,y,s){
	hab_code = 1;
}

void LandHabitat::render(){
	if(isInCage){
		if(a!=NULL){
			a->renderAnimal();
		}else{
			cout << "L";
		}
	}else{
		cout << "l";
	}
}