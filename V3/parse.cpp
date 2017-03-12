#include "parse.h"
#include <iostream>
#include <fstream>
using namespace std;

void getRowCol(int& row, int& col, ifstream& infile){
	getNum(row,infile);
	getNum(col,infile);
}

void getNum(int& n,ifstream& infile){
	string s;
	getline(infile,s);
	n = 0;
	for(int i = 0;i < s.length();i++){
		n *= 10;
		n += (s[i] - '0');
	}
}

void getMatrix(char ** c,int row, int col, ifstream& infile){
	string temp;
	int i = 0,j = 0,k;
	while(getline(infile,temp) && i < row){
		if(temp.length() != col){
			throw 1;
		}else{
			for(int k = 0;k < col;k++){
				c[j][k] = temp[k];
			}
			j++;
		}
		i++;
	}
}