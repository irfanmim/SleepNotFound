#include "parse.h"
#include <iostream>
#include <fstream>
using namespace std;

char ** parseZoo(int row,int col,ifstream& infile){
	char ** zoo = new char*[row];
	for(int i = 0;i < row;i++){
		zoo[i] = new char[col];
	}
	getMatrix(zoo,row,col,infile);
	return zoo;
}

void getRowCol(int& row, int& col, ifstream& infile){
	getNum(row,infile);
	getNum(col,infile);
}

void getEntry(string s,int& x,int& y,int& w,char& an){
	int n = 0,i = 0;
	while(s[i]!=' ' && i < s.length()){
		if(s[i]<48 || s[i]>57){throw 1;}
		n *= 10;
		n += (s[i] - '0');
		i++;
	}
	x = n;n = 0;
	if(i == s.length()){throw 1;}
	i++;
	while(s[i]!=' ' && i < s.length()){
		if(s[i]<48 || s[i]>57){throw 1;}
		n *= 10;
		n += (s[i] - '0');
		i++;
	}
	y = n;n = 0;
	if(i != s.length()){
		i++;
		if(i == s.length()){throw 1;}
		an = s[i];
		i++;
		if(i == s.length()){throw 1;}
		while(s[i]!=' ' && i < s.length()){
			if(s[i]<48 || s[i]>57){throw 1;}
			n *= 10;
			n += (s[i] - '0');
			i++;
		}
		w = n;
	}else{
		an = ' ';w = 0;
	}
}

void getNum(int& n,ifstream& infile){
	string s;
	getline(infile,s);
	n = 0;
	for(int i = 0;i < s.length();i++){
		if(s[i]<48 || s[i]>57){throw 1;}
		n *= 10;
		n += (s[i] - '0');
	}
}

void getMatrix(char ** c,int row, int col, ifstream& infile){
	string temp;
	int i = 0,j = 0,k;
	while(getline(infile,temp) && temp!="#"){
		if(temp.length() != col){
			throw 2;
		}else{
			for(int k = 0;k < col;k++){
				c[j][k] = temp[k];
			}
			j++;
		}
		i++;
	}
	if(i != row){throw 2;}
}