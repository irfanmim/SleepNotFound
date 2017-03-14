#ifndef PANDA_H
#define PANDA_H
#include "../land_animal/land_animal.h"
#include "../herbivore/herbivore.h"
#include "../mammal/mammal.h"

/** @class Panda
  * Real class panda
  */
class Panda : public LandAnimal, public Herbivore, public Mammal {
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * @param weight berat badan
    * Konstruktor kelas panda
    */  
  Panda(int x, int y, int weight);
  /** @brief Method interaksi panda
    */
  void Interact();
  void RenderAnimal();
};

#endif