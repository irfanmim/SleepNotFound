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
    */  
  Cendrawasih(int x, int y);
  /** @brief Method interaksi cendrawasih
    */
  void Interact();
};

#endif