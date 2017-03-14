#include "gorilla.h"
#include <iostream>
using namespace std;

Gorilla :: Gorilla (int x, int y) : LandAnimal(x, y){}

void Gorilla :: interact() {cout << "*Gorilla menggedor kandang dan berusaha menerkam kamu*" << endl;}