#include "bat.h"
#include <iostream>
using namespace std;

Bat::Bat(int x, int y, int weight) : FlyingAnimal(x, y, weight), Carnivore(weight) {
  tamed = true;
}

void Bat::RenderAnimal() {
  cout << "b";
}

void Bat::Interact() {
  cout << "*Kelelawar bergelantung terbalik*" << endl;
}