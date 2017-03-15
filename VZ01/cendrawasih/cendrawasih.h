#ifndef CENDRAWASIH_H
#define CENDRAWASIH_H
#include "../flying_animal/flying_animal.h"
#include "../aves/aves.h"


/** @class Cendrawasih
  * Real class cendrawasih
  */
class Cendrawasih : public FlyingAnimal, public Aves {
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * Konstruktor kelas cendrawasih
    * I.S.: Kelas Cendrawasih belum memiliki konstruktor
    * F.S.: Kelas Cendrawasih sudah memiliki konstruktor
    * Perancang kelas: Marvin
    */  
  Cendrawasih(int x, int y);
  /** @brief Method interaksi cendrawasih
    * I.S.: Kelas Cendrawasih belum memiliki method interact
    * F.S.: Kelas Cendrawasih sudah memiliki method interact
    * Perancang kelas: Marvin
    */
  void Interact();
};

#endif