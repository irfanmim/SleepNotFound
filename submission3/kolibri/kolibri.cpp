#include "kolibri.h"
#include <iostream>
using namespace std;

Kolibri :: Kolibri (int x, int y, int weight) : FlyingAnimal(x, y, weight), Omnivore(weight) {
  tamed = true;  
}

void Kolibri::RenderAnimal() {
  cout << "k";
}

void Kolibri :: Interact() {
  cout << "*Paruh kolibri sangat panjang, kerenn *" << endl;
}