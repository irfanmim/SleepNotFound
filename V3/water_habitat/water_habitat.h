#ifndef WATER_HABITAT_H
#define WATER_HABITAT_H
#include "../habitat/habitat.h"

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
	WaterHabitat(int x,int y,bool s);
	/** @brief Method render.
	  */
	void render();
};

#endif