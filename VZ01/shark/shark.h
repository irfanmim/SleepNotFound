#ifndef SHARK_H
#define SHARK_H
#include "../WaterAnimal/WaterAnimal.h"
#include "../Pisces/Pisces.h"

/** @class Shark
  * Real class shark
  */
class Shark : public WaterAnimal, public Pisces{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas shark
	  */
	Shark(int x, int y);
	/** @brief Method interaksi shark
	  */
	void interact();
};

#endif