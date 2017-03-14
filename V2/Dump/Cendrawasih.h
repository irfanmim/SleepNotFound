#ifndef CENDRAWASIH_H
#define CENDRAWASIH_H

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
};

#endif