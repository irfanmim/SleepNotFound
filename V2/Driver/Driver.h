#ifndef DRIVER_H
#define DRIVER_H
#include "../Zoo/Zoo.h"
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
	void AnimateZoo();
	void InitMenu();
	void GoToXY(int x,int y);
private:
	bool quit;
	int inp;
	int defcol;
	vector<string> menu;
	Zoo z;
};

#endif
