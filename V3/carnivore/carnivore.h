#ifndef CARNIVORE_H
#define CARNIVORE_H
#define factor 0.5

/** @class Carnivore
  * Base class carnivore
  */
class Carnivore{
public:
	/** @brief Constructor
	  * @param weight
	  * Konstruktor carnivore dengan parameter berat badan 
	  */
	Carnivore(int weight);
	/** @brief Method getFood mengembalikan makanan karnivora
	  */
	float getFood() const;
	/** Jumlah hewan karnivora */
	static int nCarnivore; 	
	/** Jumlah total makanan karnivora */
	static float total_cFood;
protected:
	/** Makanan karnivora */
	float cFood;
};

#endif