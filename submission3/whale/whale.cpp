#include "whale.h"
#include <iostream>
using namespace std;

Whale :: Whale (int x, int y, int weight) : WaterAnimal(x, y, weight), Carnivore(weight) {
  tamed = true;
}

void Whale::RenderAnimal() {
  cout << "Q";
}

void Whale :: Interact() {
  cout << "*Ikan paus hampir tidak muat di habitatnya*" << endl;
}