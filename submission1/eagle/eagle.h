#ifndef EAGLE_H
#define EAGLE_H
#include "../flying_animal/flying_animal.h"
#include "../aves/aves.h"

/** @class Eagle
  * Real class eagle
  */
class Eagle : public FlyingAnimal, public Aves{
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * Konstruktor kelas eagle
    * I.S.: Kelas Eagle belum memiliki method
    * F.S.: Kelas Eagle sudah memiliki method interact
    * Perancang kelas: Marvin
    */  
  Eagle(int x, int y);
  /** @brief Method interaksi eagle
    * I.S.: Kelas Eagle belum memiliki method interact
    * F.S.: Kelas Eagle sudah memiliki method interact
    * Perancang kelas: Marvin
    */
  void Interact();
};

#endif