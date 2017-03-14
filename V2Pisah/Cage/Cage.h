#ifndef CAGE_H
#define CAGE_H
#include "../Habitat/Habitat.h"
#include "../CageList/CageList.h"
#include <vector>

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
	Cage(Cell * hl,int n);
	/** @brief CopyConstructor.
	  */
	Cage(const Cage& ca);
  	/** @brief Destructor.
	  */
	~Cage();
  	/** @brief Operator=.
	  */
	Cage& operator=(const Cage& ca);
	bool isCoorInCage(int x,int y);
	void wakeAllAnimal();
	Cell * getCells() const;
	int getHabByCoor(int x,int y) const;
	int getNH() const;
	void moveAllAnimal();
private:
	//Habitat ** h; /** List of habitat yang dilingkupi */
	int na; /** Jumlah sel animal dalam cage */
	int nh; /** Jumlah habitat dalam cage */
	Cell * c;
	Animal * a;
};

class CageList{
public:
	void addCage(Cage c);
	Cage& getCage(int i);
	int getSize();
	int searchByCoor(int x,int y);
private:
	vector<Cage> cagelist;
};
#endif
