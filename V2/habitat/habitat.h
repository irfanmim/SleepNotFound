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
    * Konstruktor kelas habitat
    */  
  Habitat(int x,int y,bool s);
/*  ~Habitat();
  Animal * getAnimal();
  void setAnimal(Animal * an);
  void resetAnimal();
  void wakeAnimal();
 */
  bool GetCageStatus() const;
  void SetCageStatus(bool s);
protected:
//  Animal * a;
  bool is_in_cage;
};

#endif
