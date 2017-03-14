#ifndef KANGAROO_H
#define KANGAROO_H
#include "../land_animal/land_animal.h"
#include "../mammal/mammal.h"

/** @class Kangaroo
  * Real class kangaroo
  */
class Kangaroo : public LandAnimal, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas kangaroo
	  */  
	Kangaroo(int x, int y);
	/** @brief Method interaksi kangaroo
	  */
	void interact();
};

#endif