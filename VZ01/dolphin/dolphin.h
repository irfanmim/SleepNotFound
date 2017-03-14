#ifndef DOLPHIN_H
#define DOLPHIN_H
#include "../water_animal/water_animal.h"
#include "../mammal/mammal.h"

/** @class Dolphin
  * Real class dolphin
  */
class Dolphin : public WaterAnimal, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas dolphin
	  */
	Dolphin(int x, int y);
	/** @brief Method interaksi dolphin
	  */
	void interact();
};

#endif