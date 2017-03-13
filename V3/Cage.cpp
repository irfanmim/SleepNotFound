#include "Cage.h"
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
		h[i] = c.h[i];
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
		if((h[i]->getLoc().getX()==x)&&(h[i]->getLoc().getY()==y)){
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

void CageList::addCage(Cage c){
	cagelist.push_back(c);
}

Cage& CageList::getCage(int i){
	return cagelist[i];
}

int CageList::getSize(){
	return cagelist.size();
}

int CageList::searchByCoor(int x,int y){
	int i = 0;
	bool found = false;
	while(i < cagelist.size() && !found){
		found = cagelist[i].isCoorInCage(x,y);
		if(!found){
			i++;
		}
	}
	return (found)?i:-1;
}
