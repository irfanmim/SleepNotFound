#ifndef ZOO_H
#define ZOO_H
#include "../cell/cell.h"
#include "../habitat/habitat.h"
#include "../cage/cage.h"
#include "../cage_list/cage_list.h"
#include <fstream>
#include <vector>
using namespace std;

#define DEF_WIDTH 35
#define DEF_HEIGHT 25

class Zoo{
public:
	Zoo(ifstream& infile);
	void Initialize(int row,int col,ifstream& infile);
	void Show();
	Cell * GetMember(int i,int j);
	void SetMember(int i,int j,Cell * c);
	Cell * ParseCage(int& nh,ifstream& infile);
	Cell * GetExit();
	void InitializeCage(ifstream& infile);
	bool IsInPath(int x, int y);
	int GetHeight() const;
	int GetWidth() const;
	void ClearPath();	
	void Tour();
	void ShowFood();
	~Zoo();
	void MoveAnimal();
private:
	int width;
	int height;
	Cell *** member;
	Cell * ext;
	vector<Cell *> path;
	vector<Cell *> arrent;
	CageList cl;
};


bool SearchInVector(const vector<Cell *>& v,Cell * h);

#endif
