#include "eagle.h"
#include <iostream>
using namespace std;

Eagle :: Eagle (int x, int y) : FlyingAnimal(x, y){}

void Eagle :: interact() {cout << "*Tatapan burung elang kelihatan tajam sekali*" << endl;}