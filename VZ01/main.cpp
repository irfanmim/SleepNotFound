#include "Parse/Parse.h"
#include "Zoo/Zoo.h"
#include "Cage/Cage.h"
#include "Driver/Driver.h"
#include <fstream>
#include <iostream>
using namespace std;

int main () {
	ifstream infile("Zoo.txt");
	try{
		Driver zoomain(infile);
		zoomain.DisplayMenu();
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
