#ifndef ANIMAL_H
#define ANIMAL_H
#include "../point/point.h"
#include <vector>
using namespace std;

/** @class Animal
  * ABC animal
  */
class Animal{
public:
/** @brief Constructor.
  * Konstruktor kelas animal
  * I.S.: Kelas Animal belum dikonstruksi
      * F.S.: Kelas Animal sudah dikonstruksi
      * Perancang kelas: Marvin
  */  
  Animal(int x, int y, int w);
/** @brief Method interaksi animal.
  * Setiap animal akan berinteraksi dengan cara yang berbeda-beda
  * I.S.: Kelas Animal belum memiliki method untuk mendapatkan berat badan
  * F.S.: Kelas Animal sudah memiliki method untuk mendapatkan berat badan
  * Perancang kelas: Marvin
  */  
  int GetWeight() const;
  /** @brief Method akan menghasilkan true jika habitat tersebut match dengan animal
    * @param hab_code kode habitat 
    * I.S.: Kelas Animal belum memiliki method yang akan menghasilkan true jika habitat tersebut match dengan animal 
    * F.S.: Kelas Animal sudah memiliki method yang akan menghasilkan true jika habitat tersebut match dengan animal 
    * Perancang kelas: Marvin
    */
  bool IsHabMatch(int hab_code);
  /** @brief Method akan menghasilkan true jika hewan tersebut jinak
      * I.S.: Kelas Animal belum memiliki method yang akan menghasilkan true jika hewan tersebut jinak
      * F.S.: Kelas Animal sudah memiliki method yang akan menghasilkan true jika hewan tersebut jinak
      * Perancang kelas: Marvin
      */
  bool IsTamed() const;
  /** @brief Method untuk mengembalikan jumlah objek Animal yang telah dibuat
      * I.S.: Kelas Animal belum memiliki atribut
      * F.S.: Kelas Animal sudah memiliki atribut jumlah animal
      * Perancang kelas: Marvin
      */
  static int GetNbAnimal();
  /** @brief Method untuk mengembalikan jumlah objek Animal yang telah dibuat
      * I.S.: Kelas Animal belum memiliki atribut
      * F.S.: Kelas Animal sudah memiliki atribut jumlah animal
      * Perancang kelas: Marvin
      */
  virtual void RenderAnimal()=0;
  /** @brief Method untuk mengembalikan jumlah objek Animal yang telah dibuat
      * I.S.: Kelas Animal belum memiliki atribut
      * F.S.: Kelas Animal sudah memiliki atribut jumlah animal
      * Perancang kelas: Marvin
      */
  virtual void Interact()=0;
  static int NbAnimal; /** Jumlah animal dalam zoo */
protected:
  Point loc; /** Lokasi setiap animal dalam matriks Zoo */
  int weight; /** Berat animal */
  bool tamed;
  vector<int> an_code;
};

#endif