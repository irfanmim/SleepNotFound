#include "bat.h"
#include <iostream>
using namespace std;

Bat::Bat(int x, int y) : FlyingAnimal(x, y) {}

void Bat::Interact() {cout << "*Kelelawar bergelantung terbalik*" << endl;}
