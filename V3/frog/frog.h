#ifndef FROG_H
#define FROG_H
#include "../land_water_animal/land_water_animal.h"
#include "../carnivore/carnivore.h"
#include "../amphibi/amphibi.h"

/** @class Gorilla
  * Real class gorilla
  */
class Frog : public LandWaterAnimal, public Carnivore, public Amphibi {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas gorilla
	  */  
	Frog(int x, int y, int weight);
	/** @brief Method interaksi gorilla
	  */
	void interact();
	void renderAnimal();
};

#endif