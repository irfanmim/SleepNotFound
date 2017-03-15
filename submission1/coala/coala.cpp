#include "coala.h"
#include <iostream>
using namespace std;

Coala :: Coala (int x, int y) : LandAnimal(x, y) {}

void Coala :: Interact() {cout << "*Coala imut sekali <3*" << endl;}