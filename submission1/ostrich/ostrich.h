#ifndef OSTRICH_H
#define OSTRICH_H
#include "../land_animal/land_animal.h"
#include "../aves/aves.h"

/** @class Ostrich
  * Real class ostrich
  */
class Ostrich : public LandAnimal, public Aves{
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * Konstruktor kelas ostrich
    */  
  Ostrich(int x, int y);
  /** @brief Method interaksi ostrich
    */
  void Interact();
};

#endif
