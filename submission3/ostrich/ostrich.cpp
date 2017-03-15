#include "ostrich.h"
#include <iostream>
using namespace std;

Ostrich :: Ostrich (int x, int y, int weight) : LandAnimal(x, y, weight), Omnivore(weight) {
  tamed = true;
}

void Ostrich::RenderAnimal() {
  cout << "s";
}

void Ostrich :: Interact() {
  cout << "*Burung unta sedang mengubur kepalanya dalam tanah*" << endl;
}
