#ifndef ANIMAL_H
#define ANIMAL_H
#include "../Point/Point.h"

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
	void addWeight(int w);
protected:
	Point loc; /** Lokasi setiap animal dalam matriks Zoo */
	int weight; /** Berat animal */
};
#endif
