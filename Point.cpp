#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(int x, int y) {setX(x); setY(y);}
void Point::printPoint(){cout << x << " " << y << endl;}
int Point::getX() {return x;}
int Point::getY() {return y;}
void Point::setX(int x) {this->x = x;}
void Point::setY(int y) {this->y = y;}
void Point::add(int x, int y) {this->x += x; this->y += y;}
