#ifndef ZOO_H
#define ZOO_H
#include "../Cell/Cell.h"
#include "../Habitat/Habitat.h"
#include "../Cage/Cage.h"
#include "../CageList/CageList.h"
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
	Cell * parseCage(int& nh,ifstream& infile);
	Cell * getExit();
	void initializeCage(ifstream& infile);
	bool isInPath(int x, int y);
	int getHeight() const;
	int getWidth() const;
	void clearPath();	
	void tour();
	void showFood();
	~Zoo();
	void animate();
	void moveAnimal();
private:
	int width;
	int height;
	Cell *** member;
	Cell * ext;
	vector<Cell *> path;
	vector<Cell *> arrent;
	CageList cl;
};


bool searchInVector(const vector<Cell *>& v,Cell * h);

#endif
