#ifndef MANTARAY_H
#define MANTARAY_H
#include "../water_animal/water_animal.h"
#include "../pisces/pisces.h"

/** @class Mantaray
  * Real class mantaray
  */
class Mantaray : public WaterAnimal, public Pisces{
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * Konstruktor kelas mantaray
    */
  Mantaray(int x, int y);
  /** @brief Method interaksi mantaray
    */
  void Interact();
};

#endif