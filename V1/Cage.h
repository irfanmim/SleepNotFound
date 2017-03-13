#ifndef CAGE_H
#define CAGE_H
#include "Habitat.h"
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

	/** @brief Method yang mengembalikan boolean apakah suatu koordinat berada di dalam cage atau tidak
	  * @param x Koordinat x
	  * @param y Koordinat y
	  */
	bool isCoorInCage(int x,int y);
	
	/** @brief Method yang membuat semua animal yang berada di dalam cage memanggil interact
	  */
	void wakeAllAnimal();
	
	/** @brief Method yang mengembalikan nilai Habitat pada index ke i
	  * @param i Nilai index
	  */
	Habitat * getHabitat(int i) const;

private:
	Habitat ** h; /** List of habitat yang dilingkupi */
	int na; /** Jumlah sel animal dalam cage */
	int nh; /** Jumlah habitat dalam cage */
};


/** @class CageList
  * Kelas yang merepresentasikan kumpulan kandang dalam zoo.
  */
class CageList{
public:
	/** @brief Method untuk menambahkan kandang pada CageList
	  * @param c Kelas Cage yang ingin ditambahkan pada CageList
	  */
	void addCage(Cage c);
	
	/** @brief Method yang mengembalikan nilai Cage pada index ke i
	  * @param i Nilai index
	  */
	Cage& getCage(int i);
	
	/** @brief Method yang mengembalikan banyaknya Cage didalam CageList
	  */
	int getSize();
	
	/** @brief Method yang mengembalikan index dari suatu Cage di dalam CageList
	  * Search Cage berdasarkan koordinat dengan parameter int x dan int y 
	  * @param x Koordinat x
	  * @param y Koordinat y
	  */
	int searchByCoor(int x,int y);

private:
	vector<Cage> cagelist;
};
#endif