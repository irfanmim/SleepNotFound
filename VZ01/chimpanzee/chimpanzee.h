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
    * I.S.: Kelas Chimpanzee belum memiliki konstruktor
    * F.S.: Kelas Chimpanzee sudah memiliki konstruktor
    * Perancang kelas: Martin
    */  
  Chimpanzee(int x, int y);
  /** @brief Method interaksi chimpanzee
    * I.S.: Kelas Chimpanzee belum memiliki method interact
    * F.S.: Kelas Chimpanzee sudah memiliki method interact
    * Perancang kelas: Martin
    */
  void Interact();
};

#endif