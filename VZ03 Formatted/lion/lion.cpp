#include "lion.h"
#include <iostream>
using namespace std;

Lion :: Lion (int x, int y, int weight) : LandAnimal(x, y, weight), Carnivore(weight) {
  tamed = false;
}

void Lion::RenderAnimal() {
  cout << "i";
}

void Lion :: Interact() {
  cout << "*Singa menyanyi lagu Lion King*" << endl;
}
