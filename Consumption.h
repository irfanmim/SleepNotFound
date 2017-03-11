#ifndef CONSUMPTION_H
#define CONSUMPTION_H
#define factor 0.5
class Herbivore{
public:
	Herbivore(float weight);
	static int nHerbivore;
	static int total_hFood;
	int getFood() const;
protected :
	float hFood;
};

/** @class Carnivore
  * Kelas yang merepresentasikan hewan karnivora.
  */
class Carnivore{
public:
	/** @brief Constructor.
	  * Membuat objek hewan karnivora dan mengincrement atribut nCarnivore
	  */
	Carnivore(float weight);
	int getFood() const;
	static int nCarnivore; 	/** Jumlah hewan karnivora */
	static int total_cFood;
protected:
	float cFood;
};

class Omnivore : public Herbivore, public Carnivore {
public:
	Omnivore(float weight);
	int getFood() const;
	static int nOmnivore;
	static int total_oFood;
protected :
	float oFood;
};

#endif