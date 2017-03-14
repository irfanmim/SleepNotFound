#include "cage_list.h"
#include <iostream>
#include <vector>
using namespace std;

void CageList::AddCage(Cage c){
	cagelist.push_back(c);
}

Cage& CageList::GetCage(int i){
	return cagelist[i];
}

int CageList::GetSize(){
	return cagelist.size();
}

int CageList::SearchByCoor(int x,int y){
	int i = 0;
	bool found = false;
	while(i < cagelist.size() && !found){
		found = cagelist[i].IsCoorInCage(x,y);
		if(!found){
			i++;
		}
		else {
	//		cout << "searchByCoor x, y, i : " << x << " " << y << " " << i << " " << endl;
		}
	}
	return (found)?i:-1;
}
