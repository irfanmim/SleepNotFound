#ifndef DRIVER_H
#define DRIVER_H
#include "../zoo/zoo.h"
#include <vector>
#include <fstream>
using namespace std;

class Driver{
public:
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
    /** @brief Method untuk menganimasikan zoo
    * I.S.: Kelas Driver belum memiliki method  menganimasikan zoo
      * F.S.: Kelas Driver sudah memiliki method  menganimasikan zoo
      * Perancang kelas: Marvin
    */
  void AnimateZoo();
  /** @brief Method untuk menampilkan makanan dalam zoo
    * I.S.: Kelas Driver belum memiliki method  menampilkan makanan dalam zoo
      * F.S.: Kelas Driver sudah memiliki method  menampilkan makanan dalam zoo
      * Perancang kelas: Marvin
    */
  void FoodZoo();
  /** @brief Method untuk membuat daftar di menu utama
    * I.S.: Kelas Driver belum memiliki method menginsiasi tampilan menu
      * F.S.: Kelas Driver sudah memiliki method menginsiasi tampilan menu
      * Perancang kelas: Marvin
    */
  void InitMenu();
  /** @brief Method untuk berpindah tempat ke koordinat tertentu
   * @param x absis
   * @param y ordinat
    * I.S.: Kelas Driver belum memiliki method untuk berpindah tempat ke koordinat tertentu
      * F.S.: Kelas Driver sudah memiliki method untuk berpindah tempat ke koordinat tertentu
      * Perancang kelas: Marvin
    */
  void GoToXY(int x,int y);
private:
  bool quit;
  int inp;
  int def_col;
  vector<string> menu;
  Zoo z;
};

#endif