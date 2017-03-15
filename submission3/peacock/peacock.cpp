#include "peacock.h"
#include <iostream>
using namespace std;

Peacock :: Peacock (int x, int y, int weight) : LandAnimal(x, y, weight), Herbivore(weight) {
  tamed = true;
}

void Peacock::RenderAnimal() {
  cout << "&";
}

void Peacock :: Interact() {
  cout << "*Burung merak memamerkan sayapnya, sombong sekali :(*" << endl;
}
