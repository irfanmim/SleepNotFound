#ifndef PARK_H
#define PARK_H
#include "Point.h"

/** @class Park
  * Real class park
  */
class Park {
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
	Point& getLoc();
private :
	Point loc;
};

#endif