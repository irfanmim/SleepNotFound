#ifndef DRIVER_H
#define DRIVER_H
#include "../zoo/zoo.h"
#include <vector>
#include <fstream>
using namespace std;

class Driver{
public:
  Driver(ifstream& infile);
  void DisplayMenu();
  void ShowZoo();
  void TourZoo();
  void AnimateZoo();
  void FoodZoo();
  void InitMenu();
  void GoToXY(int x,int y);
private:
  bool quit;
  int inp;
  int def_col;
  vector<string> menu;
  Zoo z;
};

#endif