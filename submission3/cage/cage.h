#ifndef CAGE_H
#define CAGE_H
#include "../habitat/habitat.h"

/** @class Cage
  * Kelas yang merepresentasikan kandang dalam zoo.
  */
class Cage{
public:
  /** @brief Constructor berparameter.
    * Membuat objek cage dengan daftar animal dan habitat yang terdefinisi
    * @param AL List of animal yang berada dalam cage
    * @param HL List of habitat yang dilingkupi oleh cage
    * na = AL.size(), nh = HL.size()
    */
  Cage(Habitat ** hl,int n);
  /** @brief CopyConstructor.
    */
  Cage(const Cage& c);
    /** @brief Destructor.
    */
  ~Cage();
    /** @brief Operator=.
    */
  Cage& operator=(const Cage& c);
  /** @brief method IsCoorInCage.
    * @param x absis
    * @param y ordinat
    */
  bool IsCoorInCage(int x,int y);
  /** @brief method membuat animal bergerak
    */
  void WakeAllAnimal();
  /** @brief method menghasilkan habitat
    * @param i indeksdari habitat
    
    */
  Habitat * GetHabitat(int i) const;
  /** @brief method menghasilkan habitat dengan koordinat lokasi 
    * @param x absis
    * @param y ordinat
    */
  int GetHabByCoor(int x,int y) const;
  /** @brief method menghasilkan jumlah habitat
    */
  int GetNH() const;
  /** @brief method validasi cage
    */
  void Validate();
private:
  Habitat ** h; /** List of habitat yang dilingkupi */
  int na; /** Jumlah sel animal dalam cage */
  int nh; /** Jumlah habitat dalam cage */
};

#endif