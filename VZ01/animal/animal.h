#ifndef ANIMAL_H
#define ANIMAL_H
#include "../point/point.h"

/** @class Animal
  * ABC animal
  */
class Animal{
public:
    /** @brief Constructor.
      * Konstruktor kelas animal
      * @param x Posisi koordinat x
      * @param y Posisi koordinat y
      */  
  Animal(int x, int y);

    /** @brief Method interaksi animal.
      * Setiap animal akan berinteraksi dengan cara yang berbeda-beda
      */  
  virtual void Interact()=0;

    /** @brief Method untuk mengembalikan jumlah objek animal yang telah dibuat
      */
  int GetNbAnimal();

  /** Jumlah animal dalam zoo */
  static int NbAnimal; 

protected:
  Point loc; /** Lokasi setiap animal dalam matriks Zoo */
};

#endif
