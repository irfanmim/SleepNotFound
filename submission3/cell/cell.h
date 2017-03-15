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
    */
  Cell();
  /** @brief Constructor.
    * Membuat objek bertipe Cell dengan menginisialisasi koordinatnya menjadi (x,y)
    * @param x absis dari koordinat Cell
    * @param y ordinat dari koordinat Cell
    */
  Cell(int x,int y);
 /** @brief Method mengeluarkan render animal
    */
  virtual void Render();
  /** @brief Method mengembalikan nilai x
    */
  int GetX();
  /** @brief Method mengembalikan nilai y
    */
  int GetY();
  /** @brief Method mengembalikan koordinat
    */
  void PrintCoor();
protected:
  Point loc; /** Koordinat suatu Cell */
};

#endif