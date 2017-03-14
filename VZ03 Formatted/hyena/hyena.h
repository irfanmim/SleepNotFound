#ifndef HYENA_H
#define HYENA_H
#include "../land_animal/land_animal.h"
#include "../carnivore/carnivore.h"
#include "../mammal/mammal.h"

/** @class Hyena
  * Real class hyena
  */
class Hyena : public LandAnimal, public Carnivore, public Mammal {
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * @param weight berat badan
    * Konstruktor kelas hyena
    */  
  Hyena(int x, int y, int weight);
  /** @brief Method interaksi hyena
    */
  void Interact();
  /** @brief Method render hyena
    */
  void RenderAnimal();
};

#endif