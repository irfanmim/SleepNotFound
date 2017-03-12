#ifndef FLYING_ANIMAL_H
#define FLYING_ANIMAL_H
#include "Animal.h"
#include "Consumption.h"

/** @class Bat
  * Real class bat
  */
class Bat : public FlyingAnimal, public Carnivore{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas bat
	  */  
	Bat(int x, int y, int weight);
	/** @brief Method interaksi bat
	  */
	void interact();
};

/** @class Cendrawasih
  * Real class cendrawasih
  */
class Cendrawasih : public FlyingAnimal, public Omnivore{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas cendrawasih
	  */  
	Cendrawasih(int x, int y, int weight);
	/** @brief Method interaksi cendrawasih
	  */
	void interact();
};

/** @class Eagle
  * Real class eagle
  */
class Eagle : public FlyingAnimal, public Carnivore{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas eagle
	  */  
	Eagle(int x, int y, int weight);
	/** @brief Method interaksi eagle
	  */
	void interact();
};

/** @class Kolibri
  * Real class kolibri
  */
class Kolibri : public FlyingAnimal, public Omnivore{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas kolibri
	  */  
	Kolibri(int x, int y, int weight);
	/** @brief Method interaksi kolibri
	  */
	void interact();
};

#endif
