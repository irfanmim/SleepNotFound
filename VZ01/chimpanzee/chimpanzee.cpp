#include "chimpanzee.h"
#include <iostream>
using namespace std;

Chimpanzee :: Chimpanzee (int x, int y) : LandAnimal(x, y){}

void Chimpanzee :: interact() {cout << "*Chimpanzee garuk-garuk punggung*" << endl;}