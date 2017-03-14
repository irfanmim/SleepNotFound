#ifndef CAGE_LIST_H
#define CAGE_LIST_H
#include "../cage/cage.h"
#include <vector>

class CageList{
public:
	void addCage(Cage c);
	Cage& getCage(int i);
	int getSize();
	int searchByCoor(int x,int y);
	bool IsOverlap(const Cage& c);
private:
	vector<Cage> cagelist;
};

#endif