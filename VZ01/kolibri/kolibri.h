#ifndef KOLIBRI_H
#define KOLIBRI_H
#include "../flying_animal/flying_animal.h"
#include "../aves/aves.h"

/** @class Kolibri
  * Real class kolibri
  */
class Kolibri : public FlyingAnimal, public Aves{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas kolibri
	  */  
	Kolibri(int x, int y);
	/** @brief Method interaksi kolibri
	  */
	void interact();
};

#endif