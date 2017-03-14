#include "panda.h"
#include <iostream>
using namespace std;

Panda :: Panda (int x, int y, int weight) : LandAnimal(x, y, weight), Herbivore(weight) {
  tamed = true;
}

void Panda::RenderAnimal() {
  cout << "p";
}

void Panda :: Interact() {
  cout << "*Panda duduk sambil makan bambu*" << endl;
}