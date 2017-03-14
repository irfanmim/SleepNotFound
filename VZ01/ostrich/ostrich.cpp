#include "Ostrich.h"
#include <iostream>
using namespace std;

Ostrich :: Ostrich (int x, int y) : LandAnimal(x, y){}

void Ostrich :: interact() {cout << "*Burung unta sedang mengubur kepalanya dalam tanah*" << endl;}