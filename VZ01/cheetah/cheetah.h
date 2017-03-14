#ifndef CHEETAH_H
#define CHEETAH_H
#include "../land_animal/land_animal.h"
#include "../mammal/mammal.h"

/** @class Cheetah
  * Real class cheetah
  */
class Cheetah : public LandAnimal, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas cheetah
	  */  
	Cheetah(int x, int y);
	/** @brief Method interaksi cheetah
	  */
	void interact();
};

#endif