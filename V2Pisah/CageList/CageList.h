#ifndef CAGELIST_H
#define CAGELIST_H
#include "../Habitat/Habitat.h"
#include <vector>


class CageList{
public:
	void addCage(Cage c);
	Cage& getCage(int i);
	int getSize();
	int searchByCoor(int x,int y);
private:
	vector<Cage> cagelist;
};
#endif
