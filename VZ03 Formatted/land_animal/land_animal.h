#ifndef LAND_ANIMAL_H
#define LAND_ANIMAL_H
#include "../animal/animal.h"

class LandAnimal : public Animal{
public:
  LandAnimal(int x,int y,int w);
};

#endif