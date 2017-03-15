#ifndef WATERANIMAL_H
#define WATERANIMAL_H
#include "../point/point.h"
#include "../animal/animal.h"

/** @class WaterAnimal
  * Kelas yang merepresentasikan binatang yang hidup di air.
  */
class WaterAnimal : public Animal{
public:
  /** @brief Constructor.
      * Konstruktor kelas WaterAnimal
      * @param x Posisi koordinat x
      * @param y Posisi koordinat y
      */ 
  WaterAnimal(int x,int y);
};



#endif
