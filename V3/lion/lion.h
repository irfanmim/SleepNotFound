#ifndef LION_H
#define LION_H
#include "../land_animal/land_animal.h"
#include "../carnivore/carnivore.h"
#include "../mammal/mammal.h"

/** @class Lion
  * Real class lion
  */
class Lion : public LandAnimal, public Carnivore, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas lion
	  */  
	Lion(int x, int y, int weight);
	/** @brief Method interaksi lion
	  */
	void interact();
	void renderAnimal();
};

#endif