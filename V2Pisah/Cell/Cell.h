#ifndef CELL_H
#define CELL_H
#include "../Point/Point.h"

/** @class Cell
  * Kelas yang merepresentasikan sel dalam matriks Zoo.
  */
class Cell {
	/** @brief Constructor.
	  * Membuat objek bertipe Cell dengan menginisialisasi koordinatnya menjadi (0,0)
	  */
public:
	Cell();
	/** @brief Constructor.
	  * Membuat objek bertipe Cell dengan menginisialisasi koordinatnya menjadi (x,y)
	  * @param x absis dari koordinat Cell
	  * @param y ordinat dari koordinat Cell
	  */
	Cell(int x,int y);
	void render();
	Point& getLoc();
	void printCoor();
	void setAtr(char c);
	void setAnimalExist();
	bool isAnimalExist();
	void setHabitat();
	void setVisited(bool status);
	void inCage();
	bool isVisited();
	void wakeAnimal();
	void setAnimalchar(char ch);
	char getAnimalchar();
	int getX();
	int getY();
protected:
	Point loc; /** Koordinat suatu Cell */
	char animalchar;
	bool restaurant;
	bool road ;        
	bool park ;
	bool entrance ;
	bool exit ;
	bool animal ;
	bool airhabitat ;
	bool waterhabitat ;
	bool landhabitat ;
	bool isInCage;
	bool isHabitat;
	bool road_visited;
};

#endif
