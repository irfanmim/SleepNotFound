#ifndef PANDA_H
#define PANDA_H
#include "../LandAnimal/LandAnimal.h"
#include "../Mammal/Mammal.h"

/** @class Panda
  * Real class panda
  */
class Panda : public LandAnimal, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas panda
	  */  
	Panda(int x, int y);
	/** @brief Method interaksi panda
	  */
	void interact();
};

#endif