#include "Whale.h"
#include <iostream>
using namespace std;


Whale :: Whale (int x, int y) : WaterAnimal(x, y){}

void Whale :: interact() {cout << "*Ikan paus hampir tidak muat di habitatnya*" << endl;}