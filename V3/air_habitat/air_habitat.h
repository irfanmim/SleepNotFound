#ifndef AIR_HABITAT_H
#define AIR_HABITAT_H
#include "../habitat/habitat.h"

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
	AirHabitat(int x,int y,bool s);
	/** @brief Method render.
	  */
	void render();
};

#endif