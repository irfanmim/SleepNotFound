#include "Cage.h"
#include <iostream>
using namespace std;

Cage::Cage(Cell * hl,int n):nh(n){
	c = new Cell[nh];
	na = 0;
	for(int i = 0;i < nh;i++){
		c[i] = hl[i];
		if(c[i].isAnimalExist()){
			na++;
		}
	}
	
}

Cage::Cage(const Cage& ca){
	nh = ca.nh;
	c = new Cell[nh];
	na = 0;
	for(int i = 0;i < nh;i++){
		c[i] = ca.c[i];
		if(c[i].isAnimalExist()){
			na++;
		}
	}
}

Cage::~Cage(){
	delete [] c;
}

Cage& Cage::operator=(const Cage& ca){
	delete [] c;
	nh = ca.nh;
	c = new Cell[nh];
	na = 0;
	for(int i = 0;i < nh;i++){
		c[i] = ca.c[i];
		if(c[i].isAnimalExist()){
			na++;
		}
	}
	return *this;
}

bool Cage::isCoorInCage(int x,int y){
	bool found = false;
	int i = 0;
	while(i < nh && !found){
		if((c[i].getLoc().getX()==x)&&(c[i].getLoc().getY()==y)){
			found = true;
//			cout << "isCoorinCage x, y, i : " << x << " " << y << " " << i << endl;
		}else{
			i++;
		}
	}
	return found;
}


void Cage::wakeAllAnimal(){
	for(int i = 0;i < nh;i++){
		if(c[i].isAnimalExist()){
			c[i].wakeAnimal();
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
		else {
	//		cout << "searchByCoor x, y, i : " << x << " " << y << " " << i << " " << endl;
		}
	}
	return (found)?i:-1;
}

Cell * Cage::getCell(int i) const {
	return c[i];
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
