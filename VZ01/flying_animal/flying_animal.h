#ifndef FLYINGANIMAL_H
#define FLYINGANIMAL_H
#include "../point/point.h"
#include "../animal/animal.h"

/** @class FlyingAnimal
  * Kelas yang merepresentasikan binatang yang terbang atau hidup di udara.
  */
class FlyingAnimal : public Animal{
public:
	/** @brief Constructor.
      * Konstruktor kelas FlyingAnimal
      * @param x Posisi koordinat x
      * @param y Posisi koordinat y
      */ 
	FlyingAnimal(int x,int y);
};

#endif