#ifndef ZOO_H
#define ZOO_H
#include "Cell.h"
#include "Habitat.h"
#include "Facility.h"
#include "Cage.h"
#include <fstream>
#include <vector>
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
	bool isInPath(int x,int y);
	void tour();
	void showFood();
	~Zoo();
private:
	int width;
	int height;
	Cell *** member;
	Road * ent;
	Road * ext;
	vector<Road *> path;
	CageList cl;
};

#endif