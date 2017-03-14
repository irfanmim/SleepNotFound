#include "bat.h"
#include <iostream>
using namespace std;

Bat::Bat(int x, int y, int weight) : FlyingAnimal(x, y, weight), Carnivore(weight){

}

void Bat::renderAnimal(){
	cout << "b";
}

void Bat::interact(){
	cout << "*Kelelawar bergelantung terbalik*" << endl;
}