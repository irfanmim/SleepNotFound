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

  Road * getExit();
  
  void InitializeCage(ifstream& infile);
  
  bool isInPath(int x,int y);
  
  void Show();
  
  void Tour();
  
  int GetHeight() const;
  
  int GetWidth() const;
  
  void ClearPath();
  
  void ShowFood();
  
  void MoveAnimal();
  
  void Animate();
  
  void ShowByEdge(int a,int b,int c,int d);
  
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