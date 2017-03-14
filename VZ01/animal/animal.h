#ifndef ANIMAL_H
#define ANIMAL_H
#include "../point/point.h"

/** @class Animal
  * ABC Animal
  */
class Animal{
public:
    /** @brief Constructor.
      * Konstruktor kelas Animal
      * @param x Posisi koordinat x
      * @param y Posisi koordinat y
      */  
  Animal(int x, int y);

    /** @brief Method interaksi Animal.
      * Setiap Animal akan berinteraksi dengan cara yang berbeda-beda
      */  
  virtual void Interact()=0;

    /** @brief Method untuk mengembalikan jumlah objek Animal yang telah dibuat
      */
  int GetNbAnimal();

  /** Jumlah Animal dalam zoo */
  static int NbAnimal; 

protected:
  Point loc; /** Lokasi setiap Animal dalam matriks Zoo */
};

#endif
