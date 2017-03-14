#include "point.h"
#include <iostream>
using namespace std;

Point::Point(int x, int y) {SetX(x); SetY(y);}
Point::Point(const Point& P){
	SetX(P.GetX());
	SetY(P.GetY());
}
void Point::PrintPoint(){cout << x << " " << y << endl;}
int Point::GetX() const {return x;}
int Point::GetY() const {return y;}
void Point::SetX(int x) {this->x = x;}
void Point::SetY(int y) {this->y = y;}
