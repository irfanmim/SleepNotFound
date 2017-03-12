#ifndef PARSE_H
#define PARSE_H
#include "Zoo.h"
#include "Habitat.h"
#include <fstream>
using namespace std;

char ** parseZoo(int& row,int& col,ifstream& infile);

Habitat ** parseCage(int& nh,ifstream& infile,Zoo& z);

void getCageEntry(string s,int& x,int& y,int& w,char& an);

void getRowCol(int& row, int& col, ifstream& infile);

void getNum(int& n,ifstream& infile);

void getMatrix(char ** c,int row, int col, ifstream& infile);

#endif