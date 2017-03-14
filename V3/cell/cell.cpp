#include "cell.h"
#include <iostream>
using namespace std;

Cell::Cell():loc(0,0){

}

Cell::Cell(int x,int y):loc(x,y){
	
}

void Cell::render(){
	cout << "#";
}


void Cell::printCoor(){
	loc.printPoint();
}

int Cell::getX(){
	return loc.getX();
}

int Cell::getY(){
	return loc.getY();
}
