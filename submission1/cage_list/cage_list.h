#ifndef CAGELIST_H
#define CAGELIST_H
#include "../habitat/habitat.h"
#include "../cage/cage.h"
#include <vector>

/** @class CageList
  * Kelas yang merepresentasikan kumpulan kandang dalam zoo.
  */
class CageList{
public:
  /** @brief Method untuk menambahkan kandang pada CageList
    * @param c Kelas Cage yang ingin ditambahkan pada CageList
    * I.S.: Kelas CageList belum memiliki method untuk menambahkan kandang pada CageList
    * F.S.: Kelas CageList sudah memiliki method untuk menambahkan kandang pada CageList
    * Perancang kelas: Marvin
    */
  void AddCage(Cage c);
  
  /** @brief Method yang mengembalikan nilai Cage pada index ke i
    * @param i Nilai index
    * I.S.: Kelas CageList belum memiliki method yang mengembalikan nilai Cage pada index ke i
    * F.S.: Kelas CageList sudah memiliki method yang mengembalikan nilai Cage pada index ke i
    * Perancang kelas: Marvin
    */
  Cage& GetCage(int i);
  
  /** @brief Method yang mengembalikan banyaknya Cage didalam CageList
    * I.S.: Kelas CageList belum memiliki method yang mengembalikan banyaknya Cage didalam CageList
    * F.S.: Kelas CageList sudah memiliki method yang mengembalikan banyaknya Cage didalam CageList
    * Perancang kelas: Marvin
    */
  int GetSize();
  
  /** @brief Method yang mengembalikan index dari suatu Cage di dalam CageList
    * Search Cage berdasarkan koordinat dengan parameter int x dan int y 
    * @param x Koordinat x
    * @param y Koordinat y
    * I.S.: Kelas CageList belum memiliki method yang mengembalikan index dari suatu Cage di dalam CageList
    * F.S.: Kelas CageList sudah memiliki method yang mengembalikan index dari suatu Cage di dalam CageList
    * Perancang kelas: Marvin
    */
  int SearchByCoor(int x,int y);
  /** @brief Method mengecek apakah ada habitat yang overlap di antara cage
    * I.S.: Kelas CageList belum memiliki method untuk mengecek apakah ada habitat yang overlap di antara cage
    * F.S.: Kelas CageList sudah memiliki method untuk mengecek apakah ada habitat yang overlap di antara cage
    * Perancang kelas: Marvin
    */
  bool IsOverlap(const Cage& c);

private:
  vector<Cage> cage_list;
};

#endif

