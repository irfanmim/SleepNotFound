#ifndef WATER_ANIMAL_H
#define WATER_ANIMAL_H
#include "Animal.h"
#include "Taxonomy.h"

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

/** @class Mantaray
  * Real class mantaray
  */
class Mantaray : public WaterAnimal, public Pisces{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas mantaray
	  */
	Mantaray(int x, int y);
	/** @brief Method interaksi mantaray
	  */
	void interact();
};

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
