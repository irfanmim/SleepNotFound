#include "gorilla.h"
#include <iostream>
using namespace std;

Gorilla :: Gorilla (int x, int y, int weight) : LandAnimal(x, y, weight), Omnivore(weight) {
  tamed = false;
}

void Gorilla::RenderAnimal() {
  cout << "g";
}

void Gorilla :: Interact() {
  cout << "*Gorilla menggedor kandang dan berusaha menerkam kamu*" << endl;
}
