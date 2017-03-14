#include "kangaroo.h"
#include <iostream>
using namespace std;

Kangaroo :: Kangaroo (int x, int y) : LandAnimal(x, y){}

void Kangaroo :: interact() {cout << "*Kangaroo minum Extra Joss supaya kuat tinju*" << endl;}