#include "tiger.h"
#include <iostream>
using namespace std;

Tiger :: Tiger (int x, int y, int weight) : LandAnimal(x, y, weight), Carnivore(weight) {
  tamed = false;
}

void Tiger::RenderAnimal() {
  cout << "t";
}

void Tiger :: Interact() {
  cout << "*Aummmmmmmmm .... *" << endl;
}