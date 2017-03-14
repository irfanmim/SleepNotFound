#ifndef CAGELIST_H
#define CAGELIST_H
#include "../habitat/habitat.h"
#include "../cage/cage.h"
#include <vector>

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

