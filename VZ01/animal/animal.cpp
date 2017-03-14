#include "animal.h"

int Animal::NbAnimal = 0;

int Animal::GetNbAnimal() {
  return NbAnimal;
}

Animal::Animal(int x, int y) : loc(x, y) {
  NbAnimal++;
}



