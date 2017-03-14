#ifndef CELL_H
#define CELL_H
#include "../point/point.h"
#include "../Renderable/Renderable.h"

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
  
  /** @brief Method untuk meRender peta
    */
  virtual void Render();
  
  /** @brief Method yang mengembalikan nilai koordinat x dari loc
    */
  int GetX();
  
  /** @brief Method yang mengembalikan nilai koordinat y dari loc
    */
  int GetY();
  
  /** @brief Method untuk mencetak loc
    */
  void PrintCoor();

protected:
  Point loc; /** Koordinat suatu Cell */
};

#endif
