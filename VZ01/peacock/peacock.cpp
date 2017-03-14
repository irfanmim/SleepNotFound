#include "Peacock.h"
#include <iostream>
using namespace std;

Peacock :: Peacock (int x, int y) : LandAnimal(x, y){}

void Peacock :: interact() {cout << "*Burung merak memamerkan sayapnya, sombong sekali :(*" << endl;}