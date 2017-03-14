#ifndef CELL_H
#define CELL_H
#include "../point/point.h"

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
	void Render();
	Point& GetLoc();
	void PrintCoor();
	void SetAtr(char c);
	void SetAnimalExist(bool status);
	bool IsAnimalExist();
	void SetHabitat();
	void SetVisited(bool status);
	void InCage();
	bool IsVisited();
	void WakeAnimal();
	void SetAnimalChar(char ch);
	char GetAnimalChar();
	void SetMoving(bool status);
	bool IsMoving();
	int GetX();
	int GetY();
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
	bool moving;
};

#endif
