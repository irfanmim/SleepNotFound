#ifndef ZOO_H
#define ZOO_H
#include "../cell/cell.h"
#include "../habitat/habitat.h"
#include "../road/road.h"
#include "../cage_list/cage_list.h"
#include <fstream>
#include <vector>
using namespace std;

class Zoo{
public:
  /** @brief Constructor
    * @param infile file eksternal input
    * Konstruktor Zoo
    * I.S.: Kelas Zoo belum memiliki konstruktor
    * F.S.: Kelas Zoo belum memiliki konstruktor
    * Perancang kelas: Irfan
    */ 
  Zoo(ifstream& infile);
  /** @brief Function getMember mengambil isi Cell dari koordinat (i,j)
    * @param i absis lokasi
    * @param j ordinat lokasi
    * I.S.: Kelas Zoo belum memiliki method mengambil isi Cell dari koordinat (i,j)
    * F.S.: Kelas Zoo belum memiliki method mengambil isi Cell dari koordinat (i,j)
    * Perancang kelas: Irfan
    */
  Cell * GetMember(int i,int j);
  /** @brief Procedure setMember men set pada koordinat (i,j) isi Cellnya apa
    * @param i absis lokasi
    * @param j ordinat lokasi
    * @param c pointer to Cell
    * I.S.: Kelas Zoo belum memiliki method men set pada koordinat (i,j) isi Cellnya apa
    * F.S.: Kelas Zoo belum memiliki method men set pada koordinat (i,j) isi Cellnya apa
    * Perancang kelas: Irfan
    */
  void setMember(int i,int j,Cell * c);
  /** @brief Procedure intialize menginisiasi terbentuknya Cage dengan input file eksternal
    * @param row jumlah baris
    * @param col jumlah kolom
    * @param infile file eksternal input 
    * I.S.: Kelas Zoo belum memiliki method menginisiasi terbentuknya Cage dengan input file eksternal
    * F.S.: Kelas Zoo belum memiliki method menginisiasi terbentuknya Cage dengan input file eksternal
    * Perancang kelas: Irfan
    */
  void Initialize(int row,int col,ifstream& infile);
  /** @brief Function ParseCage mengembalikan array of pointer to Habitat
    * @param nh banyaknya sel habitat dalam satu Cage
    * @param infile file eksternal input
    * I.S.: Kelas Zoo belum memiliki method mengembalikan array of pointer to Habitat
    * F.S.: Kelas Zoo belum memiliki method mengembalikan array of pointer to Habitat
    * Perancang kelas: Irfan
    */
  Habitat ** ParseCage(int& nh,ifstream& infile);
  /** @brief Method mengembalikan nilai Road dimana tempat exit
    */
  Road * getExit();
  /** @brief Procedure intializeCage menginisiasi terbentuknya Cage dengan input file eksternal
    * @param infile file eksternal input 
    */
  void InitializeCage(ifstream& infile);
  /** @brief Function boolean IsInPath mengembalikan true jika (x,y) merupakan Road
    * @param x absis dari lokasi
    * @param y ordinat dari lokasi
    */
  bool isInPath(int x,int y);
  
  void Show();
  /** @brief Procedure Tour melakukan Tour keliling Zoo
  */
  void Tour();
  /** @brief Function GetWidth mengembalikan jumlah kolom dari Zoo
  */
  int GetHeight() const;
  /** @brief Function GetWidth mengembalikan jumlah baris dari Zoo
  */
  int GetWidth() const;
  /** @brief Proedure ClearPath menghapus semua path yang sudah dilalui sehingga seperti semula
    */
  void ClearPath();
  /** @brief Menampilkan makanan pada Zoo
    */
  void ShowFood();
  /** @brief Menggerakkan animal pada Zoo
    */
  void MoveAnimal();
  /** @brief Melakukan looping MoveAnimal berulang-ulang sehingga dapat terlihat gerakannya
    */
  void Animate();
  /** @brief Menampilkan kelas Zoo berdasarkan
    * @param a batas atas
    * @param b batas bawah 
    * @param c batas kiri
    * @param d batas kanan
    */
  void ShowByEdge(int a,int b,int c,int d);
  /** @brief Destructor kelas Zoo
    */
  ~Zoo();
private:
  int width;
  int height;
  Cell *** member;
  vector<Road *> ent;
  Road * ext;
  vector<Road *> path;
  CageList cl;
};

bool SearchInVector(const vector<Habitat *>& v,Habitat * h);

#endif