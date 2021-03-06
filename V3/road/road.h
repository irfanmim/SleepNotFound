#ifndef ROAD_H
#define ROAD_H
#include "../facility/facility.h"

/** @class Road
  * Real class road
  */
class Road: public Facility{
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
	void setIsHere(bool s);

private:
	bool visited;
	bool IsHere;
};

#endif