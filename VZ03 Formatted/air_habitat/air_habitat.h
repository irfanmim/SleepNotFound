#ifndef AIR_HABITAT_H
#define AIR_HABITAT_H
#include "../habitat/habitat.h"

/** @class AirHabitat
  * Base class Airhabitat
  */
class AirHabitat: public Habitat{
public:
  /** @brief AirHabitat
    * @param x absis lokasi
    * @param y oridnat lokasi
    * @param s status is_in_cage airhabitat
    * Konstruktor airhabitat
    */
  AirHabitat(int x,int y,bool s);
  /** @brief Method render.
    */
  void Render();
};

#endif
