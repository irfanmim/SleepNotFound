#include "hyena.h"
#include <iostream>
using namespace std;

Hyena :: Hyena (int x, int y, int weight) : LandAnimal(x, y, weight), Carnivore(weight) {
  tamed = false;
}

void Hyena::RenderAnimal() {
  cout << "y";
}

void Hyena :: Interact() {
  cout << "*Hyena berjalan-jalan mengelilingi kandang*" << endl;
}