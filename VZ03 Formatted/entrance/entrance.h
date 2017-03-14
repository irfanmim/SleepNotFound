#ifndef ENTRANCE_H
#define ENTRANCE_H
#include "../road/road.h"

/** @class Entrance
  * Real class entrance
  */
class Entrance: public Road{
public : 
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y oridnat lokasi
    * Konstruktor kelas entrance
    */  
  Entrance(int x,int y);
  /** @brief Method render.
    */
  void Render();
};

#endif