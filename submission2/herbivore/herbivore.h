#ifndef HERBIVORE_H
#define HERBIVORE_H


#define factor 0.5

/** @class Herbivore
  * Base class herbivore
  */
class Herbivore{
public:
	/** @brief Constructor
	  * @param weight
	  * Konstruktor herbivore dengan parameter berat badan 
	  */
	Herbivore(float weight);
	/** Jumlah hewan herbivora */
	static int nHerbivore; 
	/** Jumlah total makanan herbivora */
	static int total_hFood;
	/** @brief Method getFood mengembalikan makanan herbivora
	  */
	int getFood() const;
protected :
	/** Makanan herbivora */
	float hFood;
};

#endif