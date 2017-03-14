#ifndef HABITAT_H
#define HABITAT_H
#include "../cell/cell.h"
#include "../animal/animal.h"

/** @class Habitat
  * ABC habitat
  */
class Habitat: public Cell{
public:
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y oridnat lokasi
	  * Konstruktor kelas habitat
	  */  
	Habitat(int x,int y,bool s);
	~Habitat();
	Animal * getAnimal();
	void setAnimal(Animal * an);
	void resetAnimal();
	void wakeAnimal();
	bool getCageStatus() const;
	void setCageStatus(bool s);
	int GetHabCode() const;
protected:
	Animal * a;
	bool isInCage;
	int hab_code;
};

#endif