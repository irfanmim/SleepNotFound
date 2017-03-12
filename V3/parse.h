#ifndef PARSE_H
#define PARSE_H
#include <fstream>
using namespace std;

void getRowCol(int& row, int& col, ifstream& infile);

void getNum(int& n,ifstream& infile);

void getMatrix(char ** c,int row, int col, ifstream& infile);

#endif