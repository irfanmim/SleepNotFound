#ifndef KOLIBRI_H
#define KOLIBRI_H
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
};

#endif
