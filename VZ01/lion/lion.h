#ifndef LION_H
#define LION_H
#include "../land_animal/land_animal.h"
#include "../mammal/mammal.h"

/** @class Lion
  * Real class lion
  */
class Lion : public LandAnimal, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas lion
	  */  
	Lion(int x, int y);
	/** @brief Method interaksi lion
	  */
	void interact();
};

#endif