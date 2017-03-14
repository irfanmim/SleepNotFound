#ifndef ROAD_H
#define ROAD_H
#include "Point.h"

/** @class Road
  * Real class road
  */
class Road {
public:
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y oridnat lokasi
	  * Konstruktor kelas road
	  */  
	Road(int x,int y);
	/** @brief Method virtual render.
	  */
	virtual void render();
	bool isVisited();
	void setVisited(bool s);
	Point& getLoc();
private:
	Point loc;
	bool visited;
};
#endif