#ifndef WATER_ANIMAL_H
#define WATER_ANIMAL_H
#include "Animal.h"
#include "Taxonomy.h"
#include "Consumption.h"

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
};

/** @class Shark
  * Real class shark
  */
class Shark : public WaterAnimal, public Carnivore, public Pisces{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas shark
	  */
	Shark(int x, int y, int weight);
	/** @brief Method interaksi shark
	  */
	void interact();
};

/** @class Mantaray
  * Real class mantaray
  */
class Mantaray : public WaterAnimal, public Carnivore, public Pisces{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas mantaray
	  */
	Mantaray(int x, int y, int weight);
	/** @brief Method interaksi mantaray
	  */
	void interact();
};

/** @class Whale
  * Real class whale
  */
class Whale : public WaterAnimal, public Carnivore, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas whale
	  */
	Whale(int x, int y, int weight);
	/** @brief Method interaksi whale
	  */
	void interact();
};

#endif
