#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "../facility/facility.h"

/** @class Restaurant
  * Real class restaurant
  */
class Restaurant: public Facility{
public:
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y oridnat lokasi
    * Konstruktor kelas restaurant
    */  
  Restaurant(int x,int y);
  /** @brief Method Render.
    */
  void Render();
};

#endif
