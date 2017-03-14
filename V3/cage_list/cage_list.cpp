#include "cage_list.h"

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