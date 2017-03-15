#ifndef ORANGUTAN_H
#define ORANGUTAN_H
#include "../land_animal/land_animal.h"
#include "../mammal/mammal.h"

/** @class Orangutan
  * Real class orangutan
  */
class Orangutan : public LandAnimal, public Mammal {
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * Konstruktor kelas orangutan
    */  
  Orangutan(int x, int y);
  /** @brief Method interaksi orangutan
    */
  void Interact();
};

#endif
