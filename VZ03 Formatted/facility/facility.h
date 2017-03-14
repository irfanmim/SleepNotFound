#ifndef FACILITY_H
#define FACILITY_H
#include "../cell/cell.h"

/** @class Facility
  * Base class facility
  */
class Facility: public Cell{
public:
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y oridnat lokasi
    * Konstruktor kelas facility
    */  
  Facility(int x,int y);
};

#endif