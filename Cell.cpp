#include "Cell.h"

Cell::Cell():loc(0,0){

}

Cell::Cell(int x,int y):loc(x,y){
	
}

void Cell::printCoor(){
	loc.printPoint();
}
