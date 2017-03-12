#ifndef CAGE_H
#define CAGE_H
#include "Habitat.h"

/** @class Cage
  * Kelas yang merepresentasikan kandang dalam zoo.
  */
class Cage{
public:
	/** @brief Constructor berparameter.
	  * Membuat objek cage dengan daftar animal dan habitat yang terdefinisi
	  * @param AL List of animal yang berada dalam cage
	  * @param HL List of habitat yang dilingkupi oleh cage
	  * na = AL.size(), nh = HL.size()
	  */
	Cage(Habitat ** hl,int n);
	/** @brief CopyConstructor.
	  */
	Cage(const Cage& c);
  	/** @brief Destructor.
	  */
	~Cage();
  	/** @brief Operator=.
	  */
	Cage& operator=(const Cage& c);
	void wakeAllAnimal();
private:
	Habitat ** h; /** List of habitat yang dilingkupi */
	int na; /** Jumlah sel animal dalam cage */
	int nh; /** Jumlah habitat dalam cage */
};

#endif