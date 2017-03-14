#ifndef OSTRICH_H
#define OSTRICH_H
#include "../land_animal/land_animal.h"
#include "../omnivore/omnivore.h"
#include "../aves/aves.h"

/** @class Ostrich
  * Real class ostrich
  */
class Ostrich : public LandAnimal, public Omnivore, public Aves{
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * @param weight berat badan
    * Konstruktor kelas ostrich
    */  
  Ostrich(int x, int y, int weight);
  /** @brief Method interaksi ostrich
    */
  void Interact();
  void RenderAnimal();
};

#endif