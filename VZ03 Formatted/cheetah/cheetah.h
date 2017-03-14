#ifndef CHEETAH_H
#define CHEETAH_H
#include "../land_animal/land_animal.h"
#include "../carnivore/carnivore.h"
#include "../mammal/mammal.h"

/** @class Cheetah
  * Real class cheetah
  */
class Cheetah : public LandAnimal, public Carnivore, public Mammal {
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * @param weight berat badan
    * Konstruktor kelas cheetah
    */  
  Cheetah(int x, int y, int weight);
  /** @brief Method interaksi cheetah
    */
  void Interact();
  void RenderAnimal();
};

#endif