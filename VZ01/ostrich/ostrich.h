#ifndef OSTRICH_H
#define OSTRICH_H
#include "../LandAnimal/LandAnimal.h"
#include "../Aves/Aves.h"

/** @class Ostrich
  * Real class ostrich
  */
class Ostrich : public LandAnimal, public Aves{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas ostrich
	  */  
	Ostrich(int x, int y);
	/** @brief Method interaksi ostrich
	  */
	void interact();
};

#endif