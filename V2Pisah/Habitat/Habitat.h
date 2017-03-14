#ifndef HABITAT_H
#define HABITAT_H
#include "../Cell/Cell.h"
#include "../Animal/Animal.h"

/** @class Habitat
  * ABC habitat
  */
class Habitat{
public:
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y oridnat lokasi
	  * Konstruktor kelas habitat
	  */  
	Habitat(int x,int y,bool s);
/*	~Habitat();
	Animal * getAnimal();
	void setAnimal(Animal * an);
	void resetAnimal();
	void wakeAnimal();
 */
	bool getCageStatus() const;
	void setCageStatus(bool s);
protected:
//	Animal * a;
	bool isInCage;
};

#endif
