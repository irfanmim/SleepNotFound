#ifndef TIGER_H
#define TIGER_H
#include "../LandAnimal/LandAnimal.h"
#include "../Mammal/Mammal.h"

/** @class Tiger
  * Real class tiger
  */
class Tiger : public LandAnimal, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas tiger
	  */  
	Tiger(int x, int y);
	/** @brief Method interaksi tiger
	  */
	void interact();
};


#endif