#ifndef CAGELIST_H
#define CAGELIST_H
#include "../habitat/habitat.h"
#include "../cage/cage.h"
#include <vector>
using namespace std;

class CageList{
public:
	void AddCage(Cage c);
	Cage& GetCage(int i);
	int GetSize();
	int SearchByCoor(int x,int y);
private:
	vector<Cage> cagelist;
};
#endif
