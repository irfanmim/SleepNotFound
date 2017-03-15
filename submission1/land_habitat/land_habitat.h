#ifndef LANDHABITAT_H
#define LANDHABITAT_H
#include "../cell/cell.h"
#include "../animal/animal.h"
#include "../habitat/habitat.h"


/** @class LandHabitat
  * Base class landhabitat
  */
class LandHabitat: public Habitat{
public:
  /** @class LandHabitat
    * @param x absis lokasi
    * @param y oridnat lokasi
    * @param s boolean yang merepresentasikan habitat didalam cage atau tidak
    * Konstruktor landhabitat
    */
  LandHabitat(int x,int y,bool s);
  /** @brief Method Render.
    */
  void Render();
};

#endif