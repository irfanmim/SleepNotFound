#include "parse.h"
#include "Habitat.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"
#include "WaterAnimal.h"
#include "Zoo.h"
#include <iostream>
#include <fstream>
using namespace std;

char ** parseZoo(int& row,int& col,ifstream& infile){
	getRowCol(row,col,infile);
	char ** zoo = new char*[row];
	for(int i = 0;i < row;i++){
		zoo[i] = new char[col];
	}
	getMatrix(zoo,row,col,infile);
	return zoo;
}

Habitat ** parseCage(int& nh,ifstream& infile,Zoo& z){
	string temp;
	int x,y,w;
	char an;
	getNum(nh,infile);
	Habitat ** h = new Habitat*[nh];
	int i = 0;
	while(getline(infile,temp) && temp!="#"){
		if(i >= nh){throw 1;}
		getCageEntry(temp,x,y,w,an);
		h[i] = (Habitat *)z.getMember(x,y);
		h[i]->setCageStatus(true);
		switch(an){
			case 'b': h[i]->setAnimal(new Bat(x,y,w));break;
			case 'c': h[i]->setAnimal(new Cendrawasih(x,y,w));break;
			case 'e': h[i]->setAnimal(new Eagle(x,y,w));break;
			case 'k': h[i]->setAnimal(new Kolibri(x,y,w));break;
			case 'h': h[i]->setAnimal(new Cheetah(x,y,w));break;
			case 'm': h[i]->setAnimal(new Chimpanzee(x,y,w));break;
			case 'a': h[i]->setAnimal(new Coala(x,y,w));break;
			case 'g': h[i]->setAnimal(new Gorilla(x,y,w));break;
			case 'y': h[i]->setAnimal(new Hyena(x,y,w));break;
			case 'n': h[i]->setAnimal(new Kangaroo(x,y,w));break;
			case 'd': h[i]->setAnimal(new Komodo(x,y,w));break;
			case 'i': h[i]->setAnimal(new Lion(x,y,w));break;
			case 'r': h[i]->setAnimal(new Orangutan(x,y,w));break;
			case 's': h[i]->setAnimal(new Ostrich(x,y,w));break;
			case 'p': h[i]->setAnimal(new Panda(x,y,w));break;
			case 'P': h[i]->setAnimal(new Peacock(x,y,w));break;
			case 't': h[i]->setAnimal(new Tiger(x,y,w));break;
			case 'D': h[i]->setAnimal(new Dolphin(x,y,w));break;
			case 'M': h[i]->setAnimal(new Mantaray(x,y,w));break;
			case 'S': h[i]->setAnimal(new Shark(x,y,w));break;
			case 'W': h[i]->setAnimal(new Whale(x,y,w));break;
			default:h[i]->setAnimal(NULL);
		}
		i++;
	}
	return h;
}

void getRowCol(int& row, int& col, ifstream& infile){
	getNum(row,infile);
	getNum(col,infile);
}

void getCageEntry(string s,int& x,int& y,int& w,char& an){
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