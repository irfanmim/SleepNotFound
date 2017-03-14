#ifndef HABITAT_H
#define HABITAT_H
#include "../cell/cell.h"
#include "../animal/animal.h"

/** @class Habitat
  * ABC habitat
  */
class Habitat: public Cell{
public:
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y oridnat lokasi
    * Konstruktor kelas habitat
    */  
  Habitat(int x,int y,bool s);
  ~Habitat();
  Animal * GetAnimal();
  void SetAnimal(Animal * an);
  void ResetAnimal();
  void WakeAnimal();
  bool GetCageStatus() const;
  void SetCageStatus(bool s);
  int GetHabCode() const;
protected:
  Animal * a;
  bool is_in_cage;
  int hab_code;
};

#endif