#include "parse.h"
#include "Zoo.h"
#include "Cage.h"
#include <iostream>
using namespace std;

int main(){
	int row,col;
	string s,a;
	ifstream infile("Zoo.txt");
	try{
		getline(infile,s);
		if(s!="#Zoo"){throw 1;}
		char ** zoo = parseZoo(row,col,infile);
		Zoo z(col,row);
		z.initialize(zoo,row,col);
		for(int i = 0;i < row;i++){
			delete [] zoo[i];
		}
		delete [] zoo;
		
		getline(infile,s);
		if(s!="#Cage"){throw 1;}
		int nh;
		CageList cl;
		while(s=="#Cage"){
			Habitat ** h = parseCage(nh,infile,z);
			Cage c(h,nh);
			cl.addCage(c);
			getline(infile,s);
		}
		z.show();
	}catch(int x){
		switch(x){
			case 1:cout << "File format error" << endl;break;
			case 2:cout << "Row or column mismatch" << endl;break;
		}
	}
	return 0;
}