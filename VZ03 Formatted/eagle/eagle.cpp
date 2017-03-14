#include "eagle.h"
#include <iostream>
using namespace std;

Eagle :: Eagle (int x, int y, int weight) : FlyingAnimal(x, y, weight), Carnivore(weight) {
  tamed = false;
}

void Eagle::RenderAnimal() {
  cout << "e";
}

void Eagle :: Interact() {
  cout << "*Tatapan burung elang kelihatan tajam sekali*" << endl;
}