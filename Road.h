#ifndef ROAD_H
#define ROAD_H
#include "Facility.h"

/** @class Road
  * Real class
  */
class Road: public Facility{

	public:
	/** @brief Constructor.
	  * Konstruktor kelas Road.
	  */  
	/** @param x Parameter x untuk loc.
	  */    
	/** @param y Parameter y untuk loc.
	  */ 
		Road(int x,int y);
		

		void render();
};
#endif
