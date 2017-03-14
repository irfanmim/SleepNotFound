#ifndef ROAD_H
#define ROAD_H
#include "../Facility/Facility.h"

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
	/** @brief Method yang mengembalikan boolean sudah dilewati atau belum
	  */
	bool isVisited();
	/** @brief Method untuk men-set nilai visited
	  */
	void setVisited(bool s);
	/** @brief Method untuk men-set nilai IsHere
	  */
	void setIsHere(bool s);

private:
	bool visited;
	bool IsHere;
};

#endif