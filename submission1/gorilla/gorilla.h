#ifndef GORILLA_H
#define GORILLA_H
#include "../land_animal/land_animal.h"
#include "../mammal/mammal.h"

/** @class Gorilla
  * Real class gorilla
  */
class Gorilla : public LandAnimal, public Mammal {
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * Konstruktor kelas gorilla
    */  
  Gorilla(int x, int y);
  /** @brief Method interaksi gorilla
    */
  void Interact();
};

#endif