#ifndef AIRHABITAT_H
#define AIRHABITAT_H
#include "../cell/cell.h"
#include "../animal/animal.h"
#include "../habitat/habitat.h"

/** @class air_habitat
  * Base class waterhabitat
  */
class air_habitat: public Habitat {
public:
  /** @class air_habitat
    * @param x absis lokasi
    * @param y oridnat lokasi
    * @param s boolean yang merepresentasikan habitat didalam cage atau tidak
    * Konstruktor airhabitat
    */
  air_habitat(int x,int y,bool s);
  /** @brief Method Render.
    */
  void Render();
};

#endif
