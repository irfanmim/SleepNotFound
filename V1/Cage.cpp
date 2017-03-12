#include "Cage.h"

Cage::Cage(Habitat ** hl,int n):nh(n){
	h = new Habitat*[nh];
	na = 0;
	for(int i = 0;i < nh;i++){
		h[i] = hl[i];
		if(h[i]->getAnimal()!=NULL){
			na++;
		}
	}
}

Cage::Cage(const Cage& c){
	nh = c.nh;
	h = new Habitat*[nh];
	na = 0;
	for(int i = 0;i < nh;i++){
		h[i] = c.h[i];
		if(h[i]->getAnimal()!=NULL){
			na++;
		}
	}
}

Cage::~Cage(){
	for(int i = 0;i < nh;i++){
		h[i] = NULL;
	}
	delete [] h;
}

Cage& Cage::operator=(const Cage& c){
	delete [] h;
	nh = c.nh;
	h = new Habitat*[nh];
	na = 0;
	for(int i = 0;i < nh;i++){
		h[i] = c.h[i];
		if(h[i]->getAnimal()!=NULL){
			na++;
		}
	}
	return *this;
}

void Cage::wakeAllAnimal(){
	for(int i = 0;i < nh;i++){
		if(h[i]->getAnimal()!=NULL){
			h[i]->wakeAnimal();
		}
	}
}