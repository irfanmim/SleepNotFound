#ifndef KOMODO_H
#define KOMODO_H
#include "../land_animal/land_animal.h"
#include "../reptile/reptile.h"

/** @class Komodo
  * Real class komodo
  */
class Komodo : public LandAnimal, public Reptile{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas komodo
	  */  
	Komodo(int x, int y);
	/** @brief Method interaksi komodo
	  */
	void interact();
};

#endif