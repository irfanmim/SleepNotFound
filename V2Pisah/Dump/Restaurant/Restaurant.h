#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "Point.h"

/** @class Restaurant
  * Real class restaurant
  */
class Restaurant {
public:
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y oridnat lokasi
	  * Konstruktor kelas restaurant
	  */  
	Restaurant(int x,int y);
	/** @brief Method render.
	  */
	void render();
	Point& getLoc();
private :
	Point loc;
};

#endif