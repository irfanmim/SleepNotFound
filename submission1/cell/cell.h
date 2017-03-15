#ifndef CELL_H
#define CELL_H
#include "../point/point.h"
#include "../renderable/renderable.h"

/** @class Cell
  * Kelas yang merepresentasikan sel dalam matriks Zoo.
  */
class Cell:public Renderable{
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
    * I.S.: Kelas Cell belum memiliki konstruktor dengan parameter (x,y)
    * F.S.: Kelas Cell sudah memiliki konstruktor dengan parameter (x,y)
    * Perancang kelas: Marvin
    */
  Cell(int x,int y);
  
  /** @brief Method untuk meRender peta
    * I.S.: Kelas Cell belum memiliki method untuk render
    * F.S.: Kelas Cell sudah memiliki method untuk render
    * Perancang kelas: Marvin
    */
  virtual void Render();
  
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
  
  /** @brief Method untuk mencetak loc
    * I.S.: Kelas Cell belum memiliki method untuk mencetak loc
    * F.S.: Kelas Cell sudah memiliki method untuk mencetak loc
    * Perancang kelas: Marvin 
    */
  void PrintCoor();

protected:
  Point loc; /** Koordinat suatu Cell */
};

#endif
