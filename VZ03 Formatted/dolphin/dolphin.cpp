#include "dolphin.h"
#include <iostream>
using namespace std;

Dolphin :: Dolphin (int x, int y, int weight) : WaterAnimal(x, y, weight), Carnivore(weight) {
  tamed = true;
}

void Dolphin::RenderAnimal() {
  cout << "O";
}

void Dolphin :: Interact() {
  cout << "*Ikan lumba-lumba melakukan dolphin jump ! Wuuuoooowww !! (*o*) *" << endl;
}