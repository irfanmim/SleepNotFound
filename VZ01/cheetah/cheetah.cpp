#include "cheetah.h"
#include <iostream>
using namespace std;

Cheetah :: Cheetah (int x, int y) : LandAnimal(x, y){}

void Cheetah :: interact() {cout << "*Cheetah tidur siang*" << endl;}