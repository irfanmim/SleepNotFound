#ifndef WATER_ANIMAL_H
#define WATER_ANIMAL_H
#include "../animal/animal.h"

class WaterAnimal : public Animal{
public:
	  /** @brief Constructor.
      * Konstruktor kelas WaterAnimal
      * @param x Posisi koordinat x
      * @param y Posisi koordinat y
      * @param w berat badan
      */ 
  WaterAnimal(int x,int y,int w);
};

#endif