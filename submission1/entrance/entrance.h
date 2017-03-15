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
    * I.S.: Kelas Entrance belum memiliki konstruktor
    * F.S.: Kelas Entrance sudah memiliki konstruktor
    * Perancang kelas: Marvin
    */  
  Entrance(int x,int y);
  /** @brief Method Render.
    * I.S.: Kelas Entrance belum memiliki method render
    * F.S.: Kelas Entrance sudah memiliki method render
    * Perancang kelas: Marvin
    */
  void Render();
};

#endif