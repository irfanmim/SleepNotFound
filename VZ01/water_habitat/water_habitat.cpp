#include "WaterHabitat.h"
#include <iostream>
using namespace std;

WaterHabitat::WaterHabitat(int x,int y,bool s):Habitat(x,y,s){

}

void WaterHabitat::render(){
	if(isInCage){
		cout << "W";
	}else{
		cout << "w";
	}
}
