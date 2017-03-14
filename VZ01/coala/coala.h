#ifndef COALA_H
#define COALA_H
#include "../land_animal/land_animal.h"
#include "../mammal/mammal.h"

/** @class Coala
  * Real class coala
  */
class Coala : public LandAnimal, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas coala
	  */  
	Coala(int x, int y);
	/** @brief Method interaksi coala
	  */
	void interact();
};

#endif