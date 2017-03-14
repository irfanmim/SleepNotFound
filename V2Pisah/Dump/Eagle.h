#ifndef EAGLE_H
#define EAGLE_H

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
};

#endif