#ifndef CARNIVORE_H
#define CARNIVORE_H
#define factor 0.5

/** @class Carnivore
  * Kelas yang menunjukan binatang carnivore
  */
class Carnivore{
public:
	/** @brief Constructor
	  * @param weight
	  * Konstruktor carnivore dengan parameter berat badan 
	  */
	Carnivore(float weight);
	/** @brief Method getFood mengembalikan makanan karnivora
	  */
	int getFood() const;
	/** Jumlah hewan karnivora */
	static int nCarnivore; 	
	/** Jumlah total makanan karnivora */
	static int total_cFood;
protected:
	/** Makanan karnivora */
	float cFood;
};
#endif