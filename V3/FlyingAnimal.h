#ifndef FLYING_ANIMAL_H
#define FLYING_ANIMAL_H
#include "Animal.h"
#include "Taxonomy.h"
#include "Consumption.h"

/** @class Bat
  * Real class bat
  */
class Bat : public FlyingAnimal, public Carnivore, public Mammal{
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
	void renderAnimal();
};

/** @class Cendrawasih
  * Real class cendrawasih
  */
class Cendrawasih : public FlyingAnimal, public Omnivore, public Aves{
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
	void renderAnimal();
};

/** @class Eagle
  * Real class eagle
  */
class Eagle : public FlyingAnimal, public Carnivore, public Aves{
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
	void renderAnimal();
};

/** @class Kolibri
  * Real class kolibri
  */
class Kolibri : public FlyingAnimal, public Omnivore, public Aves{
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
	void renderAnimal();
};

#endif
