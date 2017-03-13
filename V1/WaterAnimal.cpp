#include "WaterAnimal.h"
#include <iostream>
using namespace std;

Whale :: Whale (int x, int y) : WaterAnimal(x, y){}

void Whale :: interact() {cout << "*Ikan paus hampir tidak muat di habitatnya*" << endl;}

Shark :: Shark (int x, int y) : WaterAnimal(x, y){}

void Shark :: interact() {cout << "*Ikan hiu memperhatikan kamu*" << endl;}

Mantaray :: Mantaray (int x, int y) : WaterAnimal(x, y){}

void Mantaray :: interact() {cout << "*Ikan pari bentuknya aneh sekali ... :| *" << endl;}

Dolphin :: Dolphin (int x, int y) : WaterAnimal(x, y){}

void Dolphin :: interact() {cout << "*Ikan lumba-lumba melakukan dolphin jump ! Wuuuoooowww !! (*o*) *" << endl;}