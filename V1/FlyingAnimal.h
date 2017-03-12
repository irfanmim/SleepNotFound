#ifndef FLYING_ANIMAL_H
#define FLYING_ANIMAL_H
#include "Animal.h"
#include "Taxonomy.h"

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

/** @class Cendrawasih
  * Real class cendrawasih
  */
class Cendrawasih : public FlyingAnimal, public Aves{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas cendrawasih
	  */  
	Cendrawasih(int x, int y);
	/** @brief Method interaksi cendrawasih
	  */
	void interact();
};

/** @class Eagle
  * Real class eagle
  */
class Eagle : public FlyingAnimal, public Aves{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas eagle
	  */  
	Eagle(int x, int y);
	/** @brief Method interaksi eagle
	  */
	void interact();
};

/** @class Kolibri
  * Real class kolibri
  */
class Kolibri : public FlyingAnimal, public Aves{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas kolibri
	  */  
	Kolibri(int x, int y);
	/** @brief Method interaksi kolibri
	  */
	void interact();
};

#endif
