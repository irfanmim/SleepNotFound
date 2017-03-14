#ifndef PARK_H
#define PARK_H
#include "../Facility/Facility.h"

/** @class Park
  * Real class park
  */
class Park: public Facility{
public:
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y oridnat lokasi
	  * Konstruktor kelas park
	  */  
	Park(int x,int y);
	/** @brief Method render.
	  */
	void render();
};

#endif