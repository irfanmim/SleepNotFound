#include "land_water_animal.h"

LandWaterAnimal::LandWaterAnimal(int x, int y, int w) : Animal(x,y,w) {
  an_code.push_back(1);
  an_code.push_back(2);
}