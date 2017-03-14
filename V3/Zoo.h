#ifndef ZOO_H
#define ZOO_H

#include "Cell.h"
#include "Habitat.h"
#include "Facility.h"
#include "Cage.h"
#include <fstream>
#include <vector>
using namespace std;

class Zoo{
public:
	Zoo(ifstream& infile);
	Cell * getMember(int i,int j);
	void setMember(int i,int j,Cell * c);
	void initialize(int row,int col,ifstream& infile);
	Habitat ** parseCage(int& nh,ifstream& infile);
	Road * getExit();
	void initializeCage(ifstream& infile);
	bool isInPath(int x,int y);
	void show();
	void tour();
	int getHeight() const;
	int getWidth() const;
	void clearPath();
	void showFood();
	void moveAnimal();
	void animate();
	~Zoo();
private:
	int width;
	int height;
	Cell *** member;
	vector<Road *> ent;
	Road * ext;
	vector<Road *> path;
	CageList cl;
};

#endif