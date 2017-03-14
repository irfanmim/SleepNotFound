#include "panda.h"
#include <iostream>
using namespace std;

Panda :: Panda (int x, int y) : LandAnimal(x, y) {}

void Panda :: Interact() {cout << "*Panda duduk sambil makan bambu*" << endl;}
