#include "orangutan.h"
#include <iostream>
using namespace std;

Orangutan :: Orangutan (int x, int y) : LandAnimal(x, y) {}

void Orangutan :: Interact() {cout << "*Orangutan bergelayutan*" << endl;}
