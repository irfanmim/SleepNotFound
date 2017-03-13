#include "parse.h"
#include "Zoo.h"
#include "Cage.h"
#include <iostream>
using namespace std;

int main(){
	int row,col;
	string s;
	ifstream infile("Zoo.txt");
	try{
		Zoo z(infile);
		z.initializeCage(infile);
		z.initializeRoad(infile);
		z.tour();
		z.show();

		infile.close();
	}catch(int x){
		switch(x){
			case 1:cout << "File format error" << endl;break;
			case 2:cout << "Row or column mismatch" << endl;break;
		}
	}catch(...){
		cout << "Another error occured" << endl;
	}
	return 0;
}