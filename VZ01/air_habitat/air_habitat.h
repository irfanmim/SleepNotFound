#ifndef AIRHABITAT_H
#define AIRHABITAT_H
#include "../cell/cell.h"
#include "../animal/animal.h"
#include "../habitat/habitat.h"

/** @class AirHabitat
  * Base class waterhabitat
  */
class AirHabitat: public Habitat {
public:
  /** @class AirHabitat
    * @param x absis lokasi
    * @param y oridnat lokasi
    * @param s boolean yang merepresentasikan habitat didalam cage atau tidak
    * Konstruktor airhabitat
    */
  AirHabitat(int x,int y,bool s);
  /** @brief Method Render.
    */
  void Render();
};

#endif
