#ifndef PARSE_H
#define PARSE_H
#include <fstream>
using namespace std;

char ** ParseZoo(int row,int col,ifstream& infile);

void GetRowCol(int& row, int& col, ifstream& infile);

void GetEntry(string s,int& x,int& y,int& w,char& an);

void GetNum(int& n,ifstream& infile);

void GetMatrix(char ** c,int row, int col, ifstream& infile);

#endif