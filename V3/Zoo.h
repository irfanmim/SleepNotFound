#ifndef ZOO_H
#define ZOO_H
#include "Cell.h"
#include "Habitat.h"
#include "Facility.h"
#include "Cage.h"
#include <fstream>
using namespace std;

#define DEF_WIDTH 35
#define DEF_HEIGHT 25

class Zoo{
public:
	Zoo(ifstream& infile);
	void initialize(int row,int col,ifstream& infile);
	void show();
	Cell * getMember(int i,int j);
	void setMember(int i,int j,Cell * c);
	Habitat ** parseCage(int& nh,ifstream& infile);
	Road * getEntrance();
	Road * getExit();
	void initializeCage(ifstream& infile);
	void initializeRoad(ifstream& infile);
	void tour();

	~Zoo();
private:
	int width;
	int height;
	Cell *** member;
	Road * ent;
	Road * ext;
	CageList cl;
};

#endif