#ifndef HYENA_H
#define HYENA_H
#include "../land_animal/land_animal.h"
#include "../mammal/mammal.h"

/** @class Hyena
  * Real class hyena
  */
class Hyena : public LandAnimal, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas hyena
	  */  
	Hyena(int x, int y);
	/** @brief Method interaksi hyena
	  */
	void interact();
};

#endif