#ifndef HABITAT_H
#define HABITAT_H
#include "../cell/cell.h"
#include "../animal/animal.h"

/** @class Habitat
  * ABC habitat
  */
class Habitat{
public:
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y oridnat lokasi
    * @param s boolean yang merepresentasikan habitat didalam cage atau tidak
    * Konstruktor kelas habitat
    */   
  Habitat(int x,int y,bool s);
  /** @brief Method yang mengembalikan nilai IsInCage
    */
  bool GetCageStatus() const;
  /** @brief Methot untuk merubah nilai IsInCage menjadi s
    * @param s Boolean IsInCage baru
    */
  void SetCageStatus(bool s);
protected:
//  Animal * a;
  bool is_in_cage;
};

#endif
