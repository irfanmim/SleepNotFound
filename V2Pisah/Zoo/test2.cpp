#include "Animal.h"
#include "Habitat.h"
#include "FlyingAnimal.h"
#include "WaterAnimal.h"
#include "LandAnimal.h"
#include "Cage.h"
#include <iostream>
using namespace std;

int main(){
	Habitat ** h1 = new Habitat*[3];
	h1[0] = new LandHabitat(1,2,true);
	h1[0] -> setAnimal(new Ostrich(1,2,10));
	h1[1] = new AirHabitat(2,2,false);
	h1[1] -> setAnimal(NULL);
	h1[2] = new WaterHabitat(3,2,true);
	h1[2] -> setAnimal(new Dolphin(2,2,10));
	Cage * c1 = new Cage(h1,3);
	c1->wakeAllAnimal();
	delete c1;
	for(int i = 0;i < 3;i++){
		h1[i]->render();
		if(h1[i]->getAnimal()!=NULL){
			h1[i]->wakeAnimal();
		}
	}
	return 0;
}