#include "kangaroo.h"
#include <iostream>
using namespace std;

Kangaroo :: Kangaroo (int x, int y, int weight) : LandAnimal(x, y, weight), Herbivore(weight) {
  tamed = true;
}

void Kangaroo::RenderAnimal() {
  cout << "n";
}

void Kangaroo :: Interact() {
  cout << "*Kangaroo minum Extra Joss supaya kuat tinju*" << endl;
}
