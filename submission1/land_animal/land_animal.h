#ifndef LANDANIMAL_H
#define LANDANIMAL_H
#include "../point/point.h"
#include "../animal/animal.h"

/** @class LandAnimal
  * Kelas yang merepresentasikan binatang yang hidup di darat.
  */
class LandAnimal : public Animal{
public:
  /** @brief Constructor.
      * Konstruktor kelas LandAnimal
      * @param x Posisi koordinat x
      * @param y Posisi koordinat y
      */ 
  LandAnimal(int x,int y);
};

#endif