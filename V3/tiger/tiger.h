#ifndef TIGER_H
#define TIGER_H
#include "../land_animal/land_animal.h"
#include "../carnivore/carnivore.h"
#include "../mammal/mammal.h"

/** @class Tiger
  * Real class tiger
  */
class Tiger : public LandAnimal, public Carnivore, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas tiger
	  */  
	Tiger(int x, int y, int weight);
	/** @brief Method interaksi tiger
	  */
	void renderAnimal();
	void interact();
};

#endif