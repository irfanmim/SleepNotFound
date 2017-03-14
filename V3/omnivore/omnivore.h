#ifndef OMNIVORE_H
#define OMNIVORE_H
#include "../carnivore/carnivore.h"
#include "../herbivore/herbivore.h"

/** @class Omnivore
  * Base class omnivore
  */
class Omnivore : public Herbivore, public Carnivore {
public:
	/** @brief Constructor
	  * @param weight
	  * Konstruktor omnivore dengan parameter berat badan 
	  */
	Omnivore(int weight);
	/** @brief Method getFood mengembalikan makanan omnivora
	  */
	float getFood() const;
	/** Jumlah hewan omnivora */
	static int nOmnivore; 
	/** Jumlah total makanan omnivora */
	static float total_oFood;
protected :
	/** Makanan omnivora */
	float oFood;
};

#endif