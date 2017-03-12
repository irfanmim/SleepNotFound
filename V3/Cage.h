#ifndef CAGE_H
#define CAGE_H
#include "Habitat.h"
#include "Animal.h"

/** @class Cage
  * Kelas yang merepresentasikan kandang dalam zoo.
  */
class Cage{
	/** @brief Constructor.
	  * Membuat objek cage dengan mengalokasi daftar habitat dan daftar animal
	  * serta menginisialisasi jumlah masing-masing dengan 0
	  */
	  Cage();
	/** @brief Constructor berparameter.
	  * Membuat objek cage dengan daftar animal dan habitat yang terdefinisi
	  * @param AL List of animal yang berada dalam cage
	  * @param HL List of habitat yang dilingkupi oleh cage
	  * na = AL.size(), nh = HL.size()
	  */
	  Cage(Animal AL[], Habitat HL[]);
	/** @brief CopyConstructor.
	  */
	  Cage(const Cage& c);
  	/** @brief Destructor.
	  */
	  ~Cage();
  	/** @brief Operator=.
	  */
	  Cage& operator= (Cage& c);
	private:
		Habitat * h; /** List of habitat yang dilingkupi */
		Animal * a; /** List of animal yang berada dalam cage */
		int na; /** Jumlah sel animal dalam cage */
		int nh; /** Jumlah habitat dalam cage */
};

#endif