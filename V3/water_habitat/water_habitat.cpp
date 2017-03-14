#include "water_habitat.h"
#include <iostream>
using namespace std;

WaterHabitat::WaterHabitat(int x,int y,bool s):Habitat(x,y,s){
	hab_code = 2;
}

void WaterHabitat::render(){
	if(isInCage){
		if(a!=NULL){
			a->renderAnimal();
		}else{
			cout << "W";
		}
	}else{
		cout << "w";
	}
}