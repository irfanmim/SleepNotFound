#include "coala.h"
#include <iostream>
using namespace std;

Coala :: Coala (int x, int y, int weight) : LandAnimal(x, y, weight), Herbivore(weight) {
  tamed = true;
}

void Coala::RenderAnimal() {
  cout << "a";
}

void Coala :: Interact() {
  cout << "*Coala imut sekali <3*" << endl;
}
