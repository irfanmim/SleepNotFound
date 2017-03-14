#ifndef DOLPHIN_H
#define DOLPHIN_H
#include "../water_animal/water_animal.h"
#include "../carnivore/carnivore.h"
#include "../mammal/mammal.h"

/** @class Dolphin
  * Real class dolphin
  */
class Dolphin : public WaterAnimal, public Carnivore, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas dolphin
	  */
	Dolphin(int x, int y, int weight);
	/** @brief Method interaksi dolphin
	  */
	void interact();
	void renderAnimal();
};

#endif