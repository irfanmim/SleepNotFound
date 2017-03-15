#include "lion.h"
#include <iostream>
using namespace std;

Lion :: Lion (int x, int y) : LandAnimal(x, y) {}

void Lion :: Interact() {cout << "*Singa menyanyi lagu Lion King*" << endl;}