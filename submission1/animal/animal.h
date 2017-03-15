#ifndef ANIMAL_H
#define ANIMAL_H
#include "../point/point.h"
#include <vector>
using namespace std;

/** @class Animal
  * ABC Animal
  */
class Animal{
public:
    /** @brief Constructor.
      * Konstruktor kelas Animal
      * @param x Posisi koordinat x
      * @param y Posisi koordinat y
      * I.S.: Kelas Animal belum dikonstruksi
      * F.S.: Kelas Animal sudah dikonstruksi
      * Perancang kelas: Marvin
      */  
  Animal(int x, int y);

    /** @brief Method interaksi Animal.
      * Setiap Animal akan berinteraksi dengan cara yang berbeda-beda
      * I.S.: Kelas Animal belum memiliki method
      * F.S.: Kelas abstract Animal sudah memiliki method interact yang pure virtual 
      * Perancang kelas: Marvin
      */  
  virtual void Interact()=0;

    /** @brief Method untuk mengembalikan jumlah objek Animal yang telah dibuat
      * I.S.: Kelas Animal belum memiliki atribut
      * F.S.: Kelas Animal sudah memiliki atribut jumlah animal
      * Perancang kelas: Marvin
      */
  int GetNbAnimal();

  /** Jumlah Animal dalam zoo */
  static int NbAnimal; 
  /** @brief Method akan menghasilkan true jika habitat tersebut match dengan animal 
      * I.S.: Kelas Animal belum memiliki method yang akan menghasilkan true jika habitat tersebut match dengan animal 
      * F.S.: Kelas Animal sudah memiliki method yang akan menghasilkan true jika habitat tersebut match dengan animal 
      * Perancang kelas: Marvin
      */
  bool IsHabMatch(int hab_code);

protected:
  Point loc; /** Lokasi setiap Animal dalam matriks Zoo */
  vector<int> an_code;
};

#endif
