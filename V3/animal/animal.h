#ifndef ANIMAL_H
#define ANIMAL_H
#include "../point/point.h"
#include <vector>
using namespace std;

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
	bool IsHabMatch(int hab_code);
	bool IsTamed() const;
	static int getNbAnimal();
	virtual void renderAnimal()=0;
	virtual void interact()=0;
	static int NbAnimal; /** Jumlah animal dalam zoo */
protected:
	Point loc; /** Lokasi setiap animal dalam matriks Zoo */
	int weight; /** Berat animal */
	bool tamed;
	vector<int> an_code;
};

#endif