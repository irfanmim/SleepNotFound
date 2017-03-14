#ifndef CHIMPANZEE_H
#define CHIMPANZEE_H
#include "../land_animal/land_animal.h"
#include "../mammal/mammal.h"

/** @class Chimpanzee
  * Real class chimpanzee
  */
class Chimpanzee : public LandAnimal, public Mammal {
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * Konstruktor kelas chimpanzee
    */  
  Chimpanzee(int x, int y);
  /** @brief Method interaksi chimpanzee
    */
  void Interact();
};

#endif