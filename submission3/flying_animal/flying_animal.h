#ifndef FLYING_ANIMAL_H
#define FLYING_ANIMAL_H
#include "../animal/animal.h"

class FlyingAnimal : public Animal{
public:
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * @param w berat badan
    * Konstruktor kelas FlyingAnimal
    */  
  FlyingAnimal(int x,int y,int w);
};

#endif