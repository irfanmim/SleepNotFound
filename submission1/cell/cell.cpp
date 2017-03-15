#include "cell.h"
#include <iostream>
using namespace std;

Cell::Cell():loc(0,0) {

}

Cell::Cell(int x,int y):loc(x,y) {
  
}

void Cell::Render() {
  cout << "#";
}


void Cell::PrintCoor() {
  loc.PrintPoint();
}

int Cell::GetX() {
  return loc.GetX();
}

int Cell::GetY() {
  return loc.GetY();
}
