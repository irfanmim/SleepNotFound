#include "komodo.h"
#include <iostream>
using namespace std;

Komodo :: Komodo (int x, int y) : LandAnimal(x, y) {}

void Komodo :: Interact() {cout << "*Komodo berjalan lambat sekali*" << endl;}