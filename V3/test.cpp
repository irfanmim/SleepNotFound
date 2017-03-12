#include "parse.h"
#include "Zoo.h"
#include <iostream>
using namespace std;

int main(){
	int row,col;
	ifstream infile("Zoo.txt");
	getRowCol(row,col,infile);
	char ** zoo = new char*[row];
	for(int i = 0;i < row;i++){
		zoo[i] = new char[col];
	}
	try{
		getMatrix(zoo,row,col,infile);
	}catch(int x){
		cout << "Row or column mismatch" << endl;
	}
	
	Zoo z(col,row);
	z.initialize(zoo,row,col);
	z.show();

	for(int i = 0;i < row;i++){
		delete [] zoo[i];
	}
	delete [] zoo;
	return 0;
}