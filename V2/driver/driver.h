#ifndef DRIVER_H
#define DRIVER_H
#include "../zoo/zoo.h"
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

class Driver{
public:
  Driver(ifstream& infile);
  void DisplayMenu();
  void ShowZoo();
  void TourZoo();
  void InitMenu();
private:
  bool quit;
  int inp;
  vector<string> menu;
  Zoo z;
};

#endif
