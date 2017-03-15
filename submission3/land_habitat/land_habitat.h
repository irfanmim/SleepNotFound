#ifndef LAND_HABITAT_H
#define LAND_HABITAT_H
#include "../habitat/habitat.h"

/** @class LandHabitat
  * Base class landhabitat
  */
class LandHabitat: public Habitat{
public:
  /** @class LandHabitat
    * @param x absis lokasi
    * @param y oridnat lokasi
    * Konstruktor landhabitat
    */
  LandHabitat(int x,int y,bool s);
  /** @brief Method render.
    */
  void Render();
};

#endif