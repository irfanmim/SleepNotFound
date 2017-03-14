#ifndef KOMODO_H
#define KOMODO_H
#include "../land_animal/land_animal.h"
#include "../carnivore/carnivore.h"
#include "../reptile/reptile.h"

/** @class Komodo
  * Real class komodo
  */
class Komodo : public LandAnimal, public Carnivore, public Reptile{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas komodo
	  */  
	Komodo(int x, int y, int weight);
	/** @brief Method interaksi komodo
	  */
	void interact();
	void renderAnimal();
};

#endif