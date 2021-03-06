#include "cage.h"
#include <iostream>
using namespace std;

Cage::Cage(Habitat ** hl,int n):nh(n){
	h = new Habitat*[nh];
	na = 0;
	for(int i = 0;i < nh;i++){
		h[i] = new Habitat(*(hl[i]));
		if(h[i]->getAnimal()!=NULL){
			na++;
		}
	}
	if(na > 0.3*nh){throw 3;}
}

Cage::Cage(const Cage& c){
	nh = c.nh;
	h = new Habitat*[nh];
	na = 0;
	for(int i = 0;i < nh;i++){
		h[i] = new Habitat(*(c.h[i]));
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
		h[i] = new Habitat(*(c.h[i]));
		if(h[i]->getAnimal()!=NULL){
			na++;
		}
	}
	return *this;
}

bool Cage::isCoorInCage(int x,int y){
	bool found = false;
	int i = 0;
	while(i < nh && !found){
		if((h[i]->getX()==x)&&(h[i]->getY()==y)){
			found = true;
		}else{
			i++;
		}
	}
	return found;
}


void Cage::wakeAllAnimal(){
	for(int i = 0;i < nh;i++){
		if(h[i]->getAnimal()!=NULL){
			h[i]->wakeAnimal();
		}
	}
}

Habitat * Cage::getHabitat(int i) const{
	return h[i];
}

int Cage::getHabByCoor(int x,int y) const{
	bool found = false;
	int i = 0;
	while(i < nh && !found){
		if((h[i]->getX()==x)&&(h[i]->getY()==y)){
			found = true;
		}else{
			i++;
		}
	}
	if(found){
		return i;
	}else{
		return -1;
	}
}

int Cage::getNH() const{
	return nh;
}

void Cage::Validate(){
	int x = h[0]->GetHabCode();
	int i = 1;
	while(i < nh){
		if(x != h[i]->GetHabCode()){
			throw 5;
		}else{
			i++;
		}
	}
	i = 0;
	while(i < nh){
		if(h[i]->getAnimal()!=NULL){
			if(!(h[i]->getAnimal()->IsHabMatch(x))){
				throw 6;
			}
		}
		i++;
	}
	i = 0;int untamed = 0;int tamed = 0;
	while(i < nh){
		if(h[i]->getAnimal()!=NULL){
			if(!(h[i]->getAnimal()->IsTamed())){
				untamed++;
			}else{
				tamed++;
			}
		}
		i++;
		if(untamed>1 || (untamed>0 && tamed>0)){throw 7;}
	}
}