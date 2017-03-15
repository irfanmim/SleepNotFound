#ifndef DRIVER_H
#define DRIVER_H
#include "../zoo/zoo.h"
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

/** @class Driver
  * Kelas yang mengatur keberjalanan fungsi didalam menu utama.
  */
class Driver{
public:
  /** @brief Constructor berparameter.
    * Membuat objek Driver dengan parameter suatu file eksternal
    * @param infile Sebuah konfigurasi file eksternal
    * I.S.: Kelas Driver belum dikonstruksi
      * F.S.: Kelas Driver sudah dikonstruksi
      * Perancang kelas: Marvin
    */  
  Driver(ifstream& infile);
   /** @brief Method untuk menampilkan menu
    * I.S.: Kelas Driver belum memiliki method tampilkan menu
      * F.S.: Kelas Driver sudah memiliki method tampilkan menu
      * Perancang kelas: Marvin
    */
  void DisplayMenu();
   /** @brief Method untuk menampilkan zoo
    * I.S.: Kelas Driver belum memiliki method tampilkan zoo
      * F.S.: Kelas Driver sudah memiliki method tampilkan zoo
      * Perancang kelas: Marvin
    */
  void ShowZoo();
   /** @brief Method untuk Tour di dalam zoo
    * I.S.: Kelas Driver belum memiliki method melakukan tour di zoo
      * F.S.: Kelas Driver sudah memiliki method melakukan tour di zoo
      * Perancang kelas: Marvin
    */
  void TourZoo();
   /** @brief Method untuk membuat daftar di menu utama
    * I.S.: Kelas Driver belum memiliki method menginsiasi tampilan menu
      * F.S.: Kelas Driver sudah memiliki method menginsiasi tampilan menu
      * Perancang kelas: Marvin
    */
  void InitMenu();
private:
  bool quit;
  int inp;
  vector<string> menu;
  Zoo z;
};

#endif
