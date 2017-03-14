#include "Shark.h"
#include <iostream>
using namespace std;


Shark :: Shark (int x, int y) : WaterAnimal(x, y){}

void Shark :: interact() {cout << "*Ikan hiu memperhatikan kamu*" << endl;}