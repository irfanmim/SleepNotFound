#ifndef BAT_H
#define BAT_H
#include "../flying_animal/flying_animal.h"
#include "../mammal/mammal.h"

/** @class Bat
  * Real class bat
  */
class Bat : public FlyingAnimal, public Mammal{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas bat
	  */  
	Bat(int x, int y);
	/** @brief Method interaksi bat
	  */
	void interact();
};

#endif