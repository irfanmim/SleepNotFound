#include "dolphin.h"
#include <iostream>
using namespace std;


Dolphin :: Dolphin (int x, int y) : WaterAnimal(x, y) {}

void Dolphin :: Interact() {cout << "*Ikan lumba-lumba melakukan dolphin jump ! Wuuuoooowww !! (*o*) *" << endl;}