#include "point.h"
#include <iostream>
using namespace std;

Point::Point(int x, int y) {setX(x); setY(y);}
Point::Point(const Point& P) {
  this->setX(P.GetX());
  this->setY(P.GetY());
}
void Point::printPoint() {cout << x << " " << y << endl;}
int Point::GetX() const {return x;}
int Point::GetY() const {return y;}
void Point::setX(int x) {this->x = x;}
void Point::setY(int y) {this->y = y;}
void Point::add(int x, int y) {this->x += x; this->y += y;}
