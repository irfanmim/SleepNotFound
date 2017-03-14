#ifndef ZOO_H
#define ZOO_H
#include "../cell/cell.h"
#include "../habitat/habitat.h"
#include "../road/road.h"
#include "../cage_list/cage_list.h"
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

bool searchInVector(const vector<Habitat *>& v,Habitat * h);

#endif