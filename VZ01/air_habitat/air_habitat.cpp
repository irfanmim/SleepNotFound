#include "air_habitat.h"
#include <iostream>
using namespace std;

AirHabitat::AirHabitat(int x,int y,bool s):Habitat(x,y,s){

}

void AirHabitat::render(){
	if(isInCage){
		cout << "A";
	}else{
		cout << "a";
	}
}
