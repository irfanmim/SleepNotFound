#ifndef EAGLE_H
#define EAGLE_H
#include "../flying_animal/flying_animal.h"
#include "../carnivore/carnivore.h"
#include "../aves/aves.h"

/** @class Eagle
  * Real class eagle
  */
class Eagle : public FlyingAnimal, public Carnivore, public Aves{
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * @param weight berat badan
    * Konstruktor kelas eagle
    */  
  Eagle(int x, int y, int weight);
  /** @brief Method interaksi eagle
    */
  void Interact();
  void RenderAnimal();
};

#endif