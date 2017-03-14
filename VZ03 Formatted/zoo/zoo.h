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
  Cell * GetMember(int i,int j);
  void setMember(int i,int j,Cell * c);
  void Initialize(int row,int col,ifstream& infile);
  Habitat ** ParseCage(int& nh,ifstream& infile);
  Road * getExit();
  void InitializeCage(ifstream& infile);
  bool isInPath(int x,int y);
  void Show();
  void Tour();
  int GetHeight() const;
  int GetWidth() const;
  void ClearPath();
  void ShowFood();
  void MoveAnimal();
  void Animate();
  void ShowByEdge(int a,int b,int c,int d);
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

bool SearchInVector(const vector<Habitat *>& v,Habitat * h);

#endif