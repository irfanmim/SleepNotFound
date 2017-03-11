#ifndef CARNIVORE_H
#define CARNIVORE_H

/** @class Carnivore
  * Kelas yang merepresentasikan hewan karnivora.
  */
class Carnivore{
public:
	/** @brief Constructor.
	  * Membuat objek hewan karnivora dan mengincrement atribut nCarnivore
	  */
	Carnivore(float weight);
	static int nCarnivore; 	/** Jumlah hewan karnivora */
	static int total_cFood;
protected:
	float cFood;
};

#endif