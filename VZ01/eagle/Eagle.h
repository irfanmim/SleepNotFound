#ifndef EAGLE_H
#define EAGLE_H
#include "../flying_animal/flying_animal.h"
#include "../aves/aves.h"

/** @class Eagle
  * Real class eagle
  */
class Eagle : public FlyingAnimal, public Aves{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas eagle
	  */  
	Eagle(int x, int y);
	/** @brief Method interaksi eagle
	  */
	void interact();
};

#endif