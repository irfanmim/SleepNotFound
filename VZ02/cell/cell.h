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
  /** @brief Constructor.
    * Membuat objek bertipe Cell dengan menginisialisasi koordinatnya menjadi (0,0)
    * I.S.: Kelas Cell belum memiliki konstruktor
    * F.S.: Kelas Cell sudah memiliki konstruktor
    * Perancang kelas: Marvin
    */
	Cell();
	/** @brief Constructor.
	  * Membuat objek bertipe Cell dengan menginisialisasi koordinatnya menjadi (x,y)
	  * @param x absis dari koordinat Cell
	  * @param y ordinat dari koordinat Cell
	  */
	Cell(int x,int y);
  /** @brief Method untuk meRender peta
    * I.S.: Kelas Cell belum memiliki method untuk render
    * F.S.: Kelas Cell sudah memiliki method untuk render
    * Perancang kelas: Marvin
    */
	void Render();
	/** @brief Method untuk mendapatkan location dan mengembalikan Point
	  */
	Point& GetLoc();
  /** @brief Method untuk mencetak loc
    * I.S.: Kelas Cell belum memiliki method untuk mencetak loc
    * F.S.: Kelas Cell sudah memiliki method untuk mencetak loc
    * Perancang kelas: Marvin 
    */
	void PrintCoor();
	/** @brief Method untuk set atribut menjadi c
	  * @param c Char c yang ingin di set
	  */
	void SetAtr(char c);
	/** @brief Method untuk set boolean terdapat animal
	  * @param status Boolean yang ingin di set
	  */
	void SetAnimalExist(bool status);
	/** @brief Method untuk mengembalikan nilai boolean animal
	  */
	bool IsAnimalExist();
	/** @brief Method untuk set habitat
	  */
	void SetHabitat();
	/** @brief Method untuk set status visited
	  * @param status Boolean yang ingin di set
	  */
	void SetVisited(bool status);
	/** @brief Method untuk set isInCage true
	  */
	void InCage();
	/** @brief Method untuk mengembalikan isvisited
	  */
	bool IsVisited();
	/** @brief Method wake semua animal
	  */
	void WakeAnimal();
	/** @brief Method untuk set animal char menjadi ch
	  * @param ch Char ch yang ingin di set
	  */
	void SetAnimalChar(char ch);
	/** @brief Method untuk mengembalikan animal char
	  */
	char GetAnimalChar();
	/** @brief Method untuk set atribut setmoving
	  * @param status Boolean yang akan di set
	  */
	void SetMoving(bool status);
	/** @brief Method untuk mengembalikan nilai boolean
	  */
	bool IsMoving();
  /** @brief Method yang mengembalikan nilai koordinat x dari loc
    * I.S.: Kelas Cell belum memiliki method untuk mengembalikan nilai koordinat x dari loc
    * F.S.: Kelas Cell sudah memiliki method untuk mengembalikan nilai koordinat x dari loc
    * Perancang kelas: Marvin
    */
	int GetX();
  /** @brief Method yang mengembalikan nilai koordinat y dari loc
    * I.S.: Kelas Cell belum memiliki method untuk mengembalikan nilai koordinat y dari loc
    * F.S.: Kelas Cell sudah memiliki method untuk mengembalikan nilai koordinat y dari loc
    * Perancang kelas: Marvin
    */
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
