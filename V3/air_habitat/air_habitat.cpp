#include "air_habitat.h"
#include <iostream>
using namespace std;

AirHabitat::AirHabitat(int x,int y,bool s):Habitat(x,y,s){
	hab_code = 3;
}

void AirHabitat::render(){
	if(isInCage){
		if(a!=NULL){
			a->renderAnimal();
		}else{
			cout << "A";
		}
	}else{
		cout << "a";
	}
}