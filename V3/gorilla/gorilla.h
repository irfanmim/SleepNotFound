#ifndef GORILLA_H
#define GORILLA_H
#include "../land_animal/land_animal.h"
#include "../omnivore/omnivore.h"
#include "../mammal/mammal.h"

/** @class Gorilla
  * Real class gorilla
  */
class Gorilla : public LandAnimal, public Omnivore, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas gorilla
	  */  
	Gorilla(int x, int y, int weight);
	/** @brief Method interaksi gorilla
	  */
	void interact();
	void renderAnimal();
};

#endif