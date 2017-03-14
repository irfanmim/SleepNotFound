#include "Orangutan.h"
#include <iostream>
using namespace std;

Orangutan :: Orangutan (int x, int y) : LandAnimal(x, y){}

void Orangutan :: interact() {cout << "*Orangutan bergelayutan*" << endl;}