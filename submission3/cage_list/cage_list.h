#ifndef CAGE_LIST_H
#define CAGE_LIST_H
#include "../cage/cage.h"
#include <vector>

/** @class CageList
  * Kelas yang merepresentasikan kumpulan kandang dalam zoo.
  */
class CageList{
public:
  /** @brief Method untuk menambahkan kandang pada CageList
    * @param c Kelas Cage yang ingin ditambahkan pada CageList
    */
  void AddCage(Cage c);
  /** @brief Method yang mengembalikan nilai Cage pada index ke i
    * @param i Nilai index
    */
  Cage& GetCage(int i);
  /** @brief Method yang mengembalikan banyaknya Cage didalam CageList
    */
  int GetSize();
  /** @brief Method yang mengembalikan index dari suatu Cage di dalam CageList
    * @param x Koordinat x
    * @param y Koordinat y
    * Search Cage berdasarkan koordinat dengan parameter int x dan int y 
    */
  int SearchByCoor(int x,int y);
  /** @brief Method mengecek apakah ada habitat yang overlap di antara cage
    */
  bool IsOverlap(const Cage& c);
private:
  vector<Cage> CageList;
};

#endif