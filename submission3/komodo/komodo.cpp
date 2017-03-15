#include "komodo.h"
#include <iostream>
using namespace std;

Komodo :: Komodo (int x, int y, int weight) : LandAnimal(x, y, weight), Carnivore(weight) {
  tamed = false;
}

void Komodo::RenderAnimal() {
  cout << "d";
}

void Komodo :: Interact() {
  cout << "*Komodo berjalan lambat sekali*" << endl;
}