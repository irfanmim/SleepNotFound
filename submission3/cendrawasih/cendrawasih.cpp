#include "cendrawasih.h"
#include <iostream>
using namespace std;

Cendrawasih :: Cendrawasih (int x, int y, int weight) : FlyingAnimal(x, y, weight), Omnivore(weight) {
  tamed = true;
}

void Cendrawasih::RenderAnimal() {
  cout << "c";
}

void Cendrawasih :: Interact() {
  cout << "*Burung cendrawasih sangat indah, tidak heran kalau mereka terancam punah .__. *" << endl;
}