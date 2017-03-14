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
    */  
  Driver(ifstream& infile);

  /** @brief Method untuk menampilkan menu
    */
  void DisplayMenu();
  
  /** @brief Method untuk menampilkan zoo
    */
  void ShowZoo();
  
  /** @brief Method untuk Tour di dalam zoo
    */
  void TourZoo();
  
  /** @brief Method untuk membuat daftar di menu utama
    */
  void InitMenu();

private:
  bool quit;
  int inp;
  vector<string> menu;
  Zoo z;
};

#endif