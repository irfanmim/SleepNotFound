#ifndef LAND_WATER_ANIMAL_H
#define LAND_WATER_ANIMAL_H
#include "../animal/animal.h"

/** @class LandWaterAnimal
  * Kelas untuk binatang yang dapat hidup di antara dua habitat
  */
class LandWaterAnimal : public Animal{
public:
  /** @brief Constructor berparameter
    * @param x Koordinat x
    * @param y Koordinat y
    * @param w Berat animal
    */
  LandWaterAnimal(int x,int y,int w);
};

#endif