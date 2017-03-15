#ifndef COALA_H
#define COALA_H
#include "../land_animal/land_animal.h"
#include "../mammal/mammal.h"

/** @class Coala
  * Real class coala
  */
class Coala : public LandAnimal, public Mammal {
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * Konstruktor kelas coala
    * I.S.: Kelas Coala belum memiliki konstruktor
    * F.S.: Kelas Coala sudah memiliki konstruktor
    * Perancang kelas: Martin
    */  
  Coala(int x, int y);
  /** @brief Method interaksi coala
    * I.S.: Kelas Coala belum memiliki method interact
    * F.S.: Kelas Coala sudah memiliki method interact
    * Perancang kelas: Martin
    */
  void Interact();
};

#endif