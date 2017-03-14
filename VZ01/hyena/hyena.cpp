#include "hyena.h"
#include <iostream>
using namespace std;

Hyena :: Hyena (int x, int y) : LandAnimal(x, y){}

void Hyena :: interact() {cout << "*Hyena berjalan-jalan mengelilingi kandang*" << endl;}