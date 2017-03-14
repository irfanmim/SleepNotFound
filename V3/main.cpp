#include "driver/driver.h"
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
			case 3:cout << "Cage limit exeeded" << endl;break;
			case 4:cout << "Height or width out of bounds" << endl;break;
			case 5:cout << "Cage has multiple habitat types" << endl;break;
			case 6:cout << "Wrong animal placement" << endl;break;
		}
	}catch(...){
		cout << "Another error occured" << endl;
	}
	return 0;
}
