#ifndef PEACOCK_H
#define PEACOCK_H
#include "../LandAnimal/LandAnimal.h"
#include "../Aves/Aves.h"

/** @class Peacock
  * Real class peacock
  */
class Peacock : public LandAnimal, public Aves {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas peacock
	  */  
	Peacock(int x, int y);
	/** @brief Method interaksi peacock
	  */
	void interact();
};

#endif