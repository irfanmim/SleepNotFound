#ifndef AIR_HABITAT_H
#define AIR_HABITAT_H
#include "../cell/cell.h"
#include "../animal/animal.h"
#include "../habitat/habitat.h"

/** @class AirHabitat
  * Base class waterhabitat
  */
class AirHabitat: public Habitat {
public:
  /** @brief Constructor berparameter
    * @param x absis lokasi
    * @param y oridnat lokasi
    * @param s boolean yang merepresentasikan habitat didalam cage atau tidak
    * Konstruktor airhabitat
    * I.S.: Kelas AirHabitat belum memiliki kontruktor
    * F.S.: Kelas AirHabitat sudah memiliki kontruktor
    * Pembuat kelas: Marvin
    */
  AirHabitat(int x,int y,bool s);
  /** @brief Method Render.
    * I.S.: Kelas AirHabitat belum memiliki method Render
    * F.S.: Kelas AirHabitat sudah memiliki method Render
    * Pembuat kelas: Marvin
    */
  void Render();
};

#endif
