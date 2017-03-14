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
    */  
  Exit(int x,int y);
  /** @brief Method render.
    */
  void Render();
};

#endif