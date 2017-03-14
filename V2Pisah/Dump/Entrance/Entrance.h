#ifndef ENTRANCE_H
#define ENTRANCE_H
#include "Point.h"

/** @class Entrance
  * Real class entrance
  */
class Entrance {
public :  
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y oridnat lokasi
	  * Konstruktor kelas entrance
	  */  
	Entrance(int x,int y);
	/** @brief Method render.
	  */
	void render();
	Point& getLoc();
private :
	Point loc;
};
#endif