#ifndef FACILITY_H
#define FACILITY_H
#include "Cell.h"

/** @class Facility
  * Base class facility
  */
class Facility: public Cell{
public:
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y oridnat lokasi
	  * Konstruktor kelas facility
	  */  
	Facility(int x,int y);
};

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

/** @class Restaurant
  * Real class restaurant
  */
class Restaurant: public Facility{
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
};

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

/** @class Entrance
  * Real class entrance
  */
class Entrance: public Road{
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
};

/** @class Exit
  * Real class exit
  */
class Exit: public Road{
public:
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y oridnat lokasi
	  * Konstruktor kelas exit
	  */  
	Exit(int x,int y);
	/** @brief Method render.
	  */
	void render();
};

#endif
