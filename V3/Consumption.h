#ifndef CONSUMPTION_H
#define CONSUMPTION_H
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
	Herbivore(int weight);
	/** Jumlah hewan herbivora */
	static int nHerbivore; 
	/** Jumlah total makanan herbivora */
	static float total_hFood;
	/** @brief Method getFood mengembalikan makanan herbivora
	  */
	float getFood() const;
protected :
	/** Makanan herbivora */
	float hFood;
};

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
