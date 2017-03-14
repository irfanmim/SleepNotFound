#ifndef LAND_ANIMAL_H
#define LAND_ANIMAL_H
#include "../animal/animal.h"

class LandAnimal : public Animal{
public:
  /** @brief Constructor
  	* @param x absis lokasi
  	* @param y ordinat lokasi
  	* @param w berat badan
    */
  LandAnimal(int x,int y,int w);
};

#endif