#ifndef CENDRAWASIH_H
#define CENDRAWASIH_H
#include "../flying_animal/flying_animal.h"
#include "../omnivore/omnivore.h"
#include "../aves/aves.h"

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

#endif