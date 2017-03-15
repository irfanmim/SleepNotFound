#include "cheetah.h"
#include <iostream>
using namespace std;

Cheetah :: Cheetah (int x, int y, int weight) : LandAnimal(x, y, weight), Carnivore(weight) {
  tamed = false;
}

void Cheetah::RenderAnimal() {
  cout << "h";
}

void Cheetah :: Interact() {
  cout << "*Cheetah tidur siang*" << endl;
}