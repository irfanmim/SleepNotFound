#ifndef ORANGUTAN_H
#define ORANGUTAN_H
#include "../land_animal/land_animal.h"
#include "../omnivore/omnivore.h"
#include "../mammal/mammal.h"

/** @class Orangutan
  * Real class orangutan
  */
class Orangutan : public LandAnimal, public Omnivore, public Mammal {
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * @param weight berat badan
    * Konstruktor kelas orangutan
    */  
  Orangutan(int x, int y, int weight);
  /** @brief Method interaksi orangutan
    */
  void Interact();
  void RenderAnimal();
};

#endif