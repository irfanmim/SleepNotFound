#include "shark.h"
#include <iostream>
using namespace std;

Shark :: Shark (int x, int y, int weight) : WaterAnimal(x, y, weight), Carnivore(weight) {
  tamed = false;
}

void Shark::RenderAnimal() {
  cout << "S";
}

void Shark :: Interact() {
  cout << "*Ikan hiu memperhatikan kamu*" << endl;
}