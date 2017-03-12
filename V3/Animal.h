#ifndef ANIMAL_H
#define ANIMAL_H
#include "Point.h"

/** @class Animal
  * ABC animal
  */
class Animal{
public:
/** @brief Constructor.
  * Konstruktor kelas animal
  */  
	Animal(int x, int y, int w);
/** @brief Method interaksi animal.
  * Setiap animal akan berinteraksi dengan cara yang berbeda-beda
  */	
	int getWeight() const;
	virtual void interact()=0;
	int getNbAnimal();
	static int NbAnimal; /** Jumlah animal dalam zoo */
protected:
	Point loc; /** Lokasi setiap animal dalam matriks Zoo */
	int weight; /** Berat animal */
};

class FlyingAnimal : public Animal{
public:
	FlyingAnimal(int x,int y,int w);
};

class LandAnimal : public Animal{
public:
	LandAnimal(int x,int y,int w);
};

class WaterAnimal : public Animal{
public:
	WaterAnimal(int x,int y,int w);
};

#endif