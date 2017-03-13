#ifndef CELL_H
#define CELL_H
#include "Point.h"
#include "Renderable.h"

/** @class Cell
  * Kelas yang merepresentasikan sel dalam matriks Zoo.
  */
class Cell:public Renderable{
public:
	/** @brief Constructor.
	  * Membuat objek bertipe Cell dengan menginisialisasi koordinatnya menjadi (0,0)
	  */
	Cell();
	
	/** @brief Constructor.
	  * Membuat objek bertipe Cell dengan menginisialisasi koordinatnya menjadi (x,y)
	  * @param x absis dari koordinat Cell
	  * @param y ordinat dari koordinat Cell
	  */
	Cell(int x,int y);
	
	/** @brief Method untuk merender peta
	  */
	virtual void render();
	
	/** @brief Method yang mengembalikan nilai koordinat x dari loc
	  */
	int getX();
	
	/** @brief Method yang mengembalikan nilai koordinat y dari loc
	  */
	int getY();
	
	/** @brief Method untuk mencetak loc
	  */
	void printCoor();

protected:
	Point loc; /** Koordinat suatu Cell */
};

#endif