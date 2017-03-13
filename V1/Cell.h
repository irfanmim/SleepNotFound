#ifndef CELL_H
#define CELL_H
#include "Point.h"
#include "Renderable.h"

/** @class Cell
  * Kelas yang merepresentasikan sel dalam matriks Zoo.
  */
class Cell:public Renderable{
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
	virtual void render();
	int getX();
	int getY();
	void printCoor();
protected:
	Point loc; /** Koordinat suatu Cell */
};

#endif