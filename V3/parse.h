#ifndef PARSE_H
#define PARSE_H
#include "Zoo.h"
#include <fstream>
using namespace std;

char ** parseZoo(int row,int col,ifstream& infile);

void getRowCol(int& row, int& col, ifstream& infile);

void getEntry(string s,int& x,int& y,int& w,char& an);

void getNum(int& n,ifstream& infile);

void getMatrix(char ** c,int row, int col, ifstream& infile);

#endif