#ifndef CAGELIST_H
#define CAGELIST_H
#include "../Habitat/Habitat.h"
#include "../Cage/Cage.h"
#include <vector>
using namespace std;

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
