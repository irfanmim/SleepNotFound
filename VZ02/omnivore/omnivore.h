#ifndef OMNIVORE_H
#define OMNIVORE_H
#define factor 0.5


/** @class Omnivore
  * Base class omnivore
  */
class Omnivore {
public:
	/** @brief Constructor
	  * @param weight
	  * Konstruktor omnivore dengan parameter berat badan 
	  */
	Omnivore(float weight);
	/** @brief Method getFood mengembalikan makanan omnivora
	  */
	int getFood() const;
	/** Jumlah hewan omnivora */
	static int nOmnivore; 
	/** Jumlah total makanan omnivora */
	static int total_oFood;
protected :
	/** Makanan omnivora */
	float oFood;
};

#endif
