#include "orangutan.h"
#include <iostream>
using namespace std;

Orangutan :: Orangutan (int x, int y, int weight) : LandAnimal(x, y, weight), Omnivore(weight) {
  tamed = true;
}

void Orangutan::RenderAnimal() {
  cout << "r";
}

void Orangutan :: Interact() {
  cout << "*Orangutan bergelayutan*" << endl;
}