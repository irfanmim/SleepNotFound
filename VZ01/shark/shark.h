#ifndef SHARK_H
#define SHARK_H
#include "../water_animal/water_animal.h"
#include "../pisces/pisces.h"

/** @class Shark
  * Real class shark
  */
class Shark : public WaterAnimal, public Pisces{
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * Konstruktor kelas shark
    */
  Shark(int x, int y);
  /** @brief Method interaksi shark
    */
  void Interact();
};

#endif
