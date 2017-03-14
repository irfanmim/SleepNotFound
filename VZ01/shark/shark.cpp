#include "shark.h"
#include <iostream>
using namespace std;


Shark :: Shark (int x, int y) : WaterAnimal(x, y) {}

void Shark :: Interact() {cout << "*Ikan hiu memperhatikan kamu*" << endl;}
