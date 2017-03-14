#ifndef BAT_H
#define BAT_H

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
};

#endif