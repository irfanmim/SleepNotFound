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
      /** @brief Destructor.
    */
  ~Habitat();
  /** @brief Method yang mengembalikan nilai pointer to Animal
    */
  Animal * GetAnimal();
/** @brief Method yang mengembalikan nilai a
    */
  void SetAnimal(Animal * an);
  /** @brief Method yang membuat nilai a menjadi NULL
    */
  void ResetAnimal();
  /** @brief Method yang membuat animel menjalankan Interactnya
    */
  void WakeAnimal();
    /** @brief Method yang mengembalikan nilai IsInCage
    */
  bool GetCageStatus() const;
  /** @brief Methot untuk merubah nilai IsInCage menjadi s
    * @param s Boolean IsInCage baru
    */
  void SetCageStatus(bool s);
  /** @brief Methot untuk mengambil nilai kode habitat
    * @param s Boolean IsInCage baru
    */
  int GetHabCode() const;
protected:
  Animal * a;
  bool is_in_cage;
  int hab_code;
};

#endif