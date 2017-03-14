#include "mantaray.h"
#include <iostream>
using namespace std;


Mantaray :: Mantaray (int x, int y) : WaterAnimal(x, y) {}

void Mantaray :: Interact() {cout << "*Ikan pari bentuknya aneh sekali ... :| *" << endl;}