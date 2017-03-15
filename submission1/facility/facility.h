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
    * I.S.: Kelas Facility belum memiliki konstruktor
      * F.S.: Kelas Facility sudah memiliki konstruktor
      * Perancang kelas: Marvin
    */  
  Facility(int x,int y);
};

#endif
