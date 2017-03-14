#ifndef WHALE_H
#define WHALE_H
#include "../WaterAnimal/WaterAnimal.h"
#include "../Mammal/Mammal.h"

/** @class Whale
  * Real class whale
  */
class Whale : public WaterAnimal, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas whale
	  */
	Whale(int x, int y);
	/** @brief Method interaksi whale
	  */
	void interact();
};

#endif