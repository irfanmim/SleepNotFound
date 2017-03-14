#ifndef TIGER_H
#define TIGER_H
#include "../land_animal/land_animal.h"
#include "../mammal/mammal.h"

/** @class Tiger
  * Real class tiger
  */
class Tiger : public LandAnimal, public Mammal {
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * Konstruktor kelas tiger
    */  
  Tiger(int x, int y);
  /** @brief Method interaksi tiger
    */
  void Interact();
};


#endif
