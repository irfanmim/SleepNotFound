#ifndef EXIT_H
#define EXIT_H
#include "../road/road.h"

/** @class Exit
  * Real class exit
  */
class Exit: public Road{
public:
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y oridnat lokasi
    * Konstruktor kelas exit
    * I.S.: Kelas Exit belum memiliki konstruktor
    * F.S.: Kelas Exit sudah memiliki konstruktor
    * Perancang kelas: Marvin
    */  
  Exit(int x,int y);
  /** @brief Method Render.
    * I.S.: Kelas Exit belum memiliki method render
    * F.S.: Kelas Exit sudah memiliki method render
    * Perancang kelas: Marvin
    */
  void Render();
};

#endif