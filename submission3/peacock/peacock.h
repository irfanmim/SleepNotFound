#ifndef PEACOCK_H
#define PEACOCK_H
#include "../land_animal/land_animal.h"
#include "../herbivore/herbivore.h"
#include "../aves/aves.h"

/** @class Peacock
  * Real class peacock
  */
class Peacock : public LandAnimal, public Herbivore, public Aves {
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * @param weight berat badan
    * Konstruktor kelas peacock
    */  
  Peacock(int x, int y, int weight);
  /** @brief Method interaksi peacock
    */
  void RenderAnimal();
  /** @brief Method render peacock
    */
  void Interact();
};

#endif