#ifndef WATERHABITAT_H
#define WATERHABITAT_H
#include "../cell/cell.h"
#include "../animal/animal.h"
#include "../habitat/habitat.h"


/** @class water_habitat
  * Base class waterhabitat
  */
class water_habitat: public Habitat{
public:
  /** @brief water_habitat
    * @param x absis lokasi
    * @param y oridnat lokasi
    * @param s boolean yang merepresentasikan habitat didalam cage atau tidak
    * Konstruktor waterhabitat
    */
  water_habitat(int x,int y,bool s);
  /** @brief Method Render.
    */
  void Render();
};

#endif
