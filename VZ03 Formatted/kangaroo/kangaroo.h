#ifndef KANGAROO_H
#define KANGAROO_H
#include "../land_animal/land_animal.h"
#include "../herbivore/herbivore.h"
#include "../mammal/mammal.h"

/** @class Kangaroo
  * Real class kangaroo
  */
class Kangaroo : public LandAnimal, public Herbivore, public Mammal {
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * @param weight berat badan
    * Konstruktor kelas kangaroo
    */  
  Kangaroo(int x, int y, int weight);
  /** @brief Method interaksi kangaroo
    */
  void Interact();
  void RenderAnimal();
};

#endif