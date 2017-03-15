#ifndef CHEETAH_H
#define CHEETAH_H
#include "../land_animal/land_animal.h"
#include "../mammal/mammal.h"

/** @class Cheetah
  * Real class cheetah
  */
class Cheetah : public LandAnimal, public Mammal {
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * Konstruktor kelas cheetah
    * I.S.: Kelas Cheetah belum memiliki konstruktor
    * F.S.: Kelas Cheetah sudah memiliki konstruktor
    * Perancang kelas: Martin
    */  
  Cheetah(int x, int y);
  /** @brief Method interaksi cheetah
    * I.S.: Kelas Cheetah belum memiliki method interact
    * F.S.: Kelas Cheetah sudah memiliki method interact
    * Perancang kelas: Martin
    */
  void Interact();
};

#endif