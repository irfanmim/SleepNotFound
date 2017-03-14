#ifndef FACILITY_H
#define FACILITY_H
#include "Point.h"

/** @class Facility
  * Base class facility
  */
class Facility {
public:
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y oridnat lokasi
	  * Konstruktor kelas facility
	  */  
	Facility(int x,int y);
	Point& getLoc();
private :
	Point loc;
};

#endif
