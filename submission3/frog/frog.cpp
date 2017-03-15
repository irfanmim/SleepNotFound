#include "frog.h"
#include <iostream>
using namespace std;

Frog::Frog(int x, int y, int weight) : LandWaterAnimal(x, y, weight),Carnivore(weight) {
  tamed = true;
}

void Frog::RenderAnimal() {
  cout << "?";
}

void Frog::Interact() {
  cout << "*Webek, webek*" << endl;
}
