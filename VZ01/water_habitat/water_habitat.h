#ifndef WATER_HABITAT_H
#define WATER_HABITAT_H
#include "../cell/cell.h"
#include "../animal/animal.h"
#include "../habitat/habitat.h"


/** @class water_habitat
  * Base class waterhabitat
  */
class WaterHabitat: public Habitat{
public:
  /** @brief water_habitat
    * @param x absis lokasi
    * @param y oridnat lokasi
    * @param s boolean yang merepresentasikan habitat didalam cage atau tidak
    * Konstruktor waterhabitat
    */
  WaterHabitat(int x,int y,bool s);
  /** @brief Method Render.
    */
  void Render();
};

#endif
