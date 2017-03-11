#ifndef HABITAT_H
#define HABITAT_H
#include "Cell.h"

/** @class Habitat
  * ABC habitat
  */
class Habitat: public Cell{
public:
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y oridnat lokasi
	  * Konstruktor kelas habitat
	  */  
	Habitat(int x,int y);
};

/** @class WaterHabitat
  * Base class waterhabitat
  */
class WaterHabitat: public Habitat{
public:
	/** @brief WaterHabitat
	  * @param x absis lokasi
	  * @param y oridnat lokasi
	  * Konstruktor waterhabitat
	  */
	WaterHabitat(int x,int y);
	/** @brief Method render.
	  */
	void render();
};

/** @class AirHabitat
  * Base class waterhabitat
  */
class AirHabitat: public Habitat{
public:
	/** @class AirHabitat
	  * @param x absis lokasi
	  * @param y oridnat lokasi
	  * Konstruktor airhabitat
	  */
	AirHabitat(int x,int y);
	/** @brief Method render.
	  */
	void render();
};

/** @class LandHabitat
  * Base class landhabitat
  */
class LandHabitat: public Habitat{
public:
	/** @class LandHabitat
	  * @param x absis lokasi
	  * @param y oridnat lokasi
	  * Konstruktor landhabitat
	  */
	LandHabitat(int x,int y);
	/** @brief Method render.
	  */
	void render();
};

#endif
