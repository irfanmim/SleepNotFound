#ifndef CAGE_H
#define CAGE_H
#include "../habitat/habitat.h"
#include <vector>

/** @class Cage
  * Kelas yang merepresentasikan kandang dalam zoo.
  */
class Cage{
public:
  /** @brief Constructor berparameter.
    * Membuat objek cage dengan daftar Animal dan habitat yang terdefinisi
    * @param AL List of Animal yang berada dalam cage
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

  /** @brief Method yang mengembalikan boolean apakah suatu koordinat berada di dalam cage atau tidak
    * @param x Koordinat x
    * @param y Koordinat y
    */
  bool IsCoorInCage(int x,int y);
  
  /** @brief Method yang membuat semua Animal yang berada di dalam cage memanggil Interact
    */
  void WakeAllAnimal();
  
  /** @brief Method yang mengembalikan nilai Habitat pada index ke i
    * @param i Nilai index
    */
  Habitat * GetHabitat(int i) const;

private:
  Habitat ** h; /** List of habitat yang dilingkupi */
  int na; /** Jumlah sel Animal dalam cage */
  int nh; /** Jumlah habitat dalam cage */
};


#endif
