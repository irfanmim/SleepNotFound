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
    * I.S.: Kelas Cage belum memiliki konstruktor
    * F.S.: Kelas Cage sudah memiliki konstruktor
    * Perancang kelas: Irfan
    */
  Cage(Habitat ** hl,int n);
  
  /** @brief CopyConstructor.
    * I.S.: Kelas Cage belum memiliki copy konstruktor
      * F.S.: Kelas Cage sudah memiliki copy konstruktor
      * Perancang kelas: Irfan
    */
  Cage(const Cage& c);
    
    /** @brief Destructor.
    * I.S.: Kelas Cage belum memiliki destruktor
      * F.S.: Kelas Cage sudah memiliki destruktor
      * Perancang kelas: Irfan
    */
  ~Cage();
    
    /** @brief Operator=.
    * I.S.: Kelas Cage belum memiliki operator=
      * F.S.: Kelas Cage sudah memiliki operator=
      * Perancang kelas: Irfan
    */
  Cage& operator=(const Cage& c);

  /** @brief Method yang mengembalikan boolean apakah suatu koordinat berada di dalam cage atau tidak
    * @param x Koordinat x
    * @param y Koordinat y
    * I.S.: Kelas Cage belum memiliki boolean apakah suatu koordinat berada di dalam cage atau tidak
      * F.S.: Kelas Cage sudah memiliki boolean apakah suatu koordinat berada di dalam cage atau tidak
      * Perancang kelas: Irfan
    */
  bool IsCoorInCage(int x,int y);
  
  /** @brief Method untuk mengembalikan nilai nh
    */
  int GetNH() const;

  /** @brief Method yang membuat semua Animal yang berada di dalam cage memanggil Interact
    * I.S.: Kelas Cage belum memiliki method yang membuat semua animal yang berada di dalam cage memanggil interact
      * F.S.: Kelas Cage sudah memiliki method yang membuat semua animal yang berada di dalam cage memanggil interact
      * Perancang kelas: Martin
    */
  void WakeAllAnimal();
  
  /** @brief Method yang mengembalikan nilai Habitat pada index ke i
    * @param i Nilai index
    * I.S.: Kelas Cage belum memiliki method yang mengembalikan nilai Habitat pada index ke i
      * F.S.: Kelas Cage sudah memiliki method yang mengembalikan nilai Habitat pada index ke i
      * Perancang kelas: Martin
    */
  Habitat * GetHabitat(int i) const;
  /** @brief Method yang memvalidasi cage, apakah cage layak atau tidak (tidak kelebihan ukuran yang ditentukan)
    * @param i Nilai index
    * I.S.: Kelas Cage belum memiliki method yang memvalidasi cage, apakah cage layak atau tidak
      * F.S.: Kelas Cage sudah memiliki method yang memvalidasi cage, apakah cage layak atau tidak
      * Perancang kelas: Martin
    */
  void Validate();
private:
  Habitat ** h; /** List of habitat yang dilingkupi */
  int na; /** Jumlah sel Animal dalam cage */
  int nh; /** Jumlah habitat dalam cage */
};


#endif
