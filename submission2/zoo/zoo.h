#ifndef ZOO_H
#define ZOO_H
#include "../cell/cell.h"
#include "../habitat/habitat.h"
#include "../cage/cage.h"
#include "../cage_list/cage_list.h"
#include <fstream>
#include <vector>
using namespace std;

#define DEF_WIDTH 35
#define DEF_HEIGHT 25

/*
 * @class Zoo
 * Real class Zoo
*/
class Zoo{
public:
  /** @brief Constructor
    * @param infile file eksternal input
    * Konstruktor Zoo
    */
	Zoo(ifstream& infile);
  /** @brief Procedure Initialize menginisialisasi Zoo berdasar nilai kolom dan baris dari file eksternal
    * @param row jumlah baris
    * @param col jumlah kolom
    * @param infile input file eksternal
    */
	void Initialize(int row,int col,ifstream& infile);
	/** @brief Method untuk menampilkan zoo
	  */
	void Show();
  /** @brief Function GetMember mengambil isi Cell dari koordinat (i,j)
    * @param i absis lokasi
    * @param j ordinat lokasi
    */
	Cell * GetMember(int i,int j);
  /** @brief Procedure SetMember men set pada koordinat (i,j) isi Cellnya apa
    * @param i absis lokasi
    * @param j ordinat lokasi
    * @param c pointer to Cell
    */
	void SetMember(int i,int j,Cell * c);
  /** @brief Function ParseCage mengembalikan array of pointer to Habitat
    * @param nh banyaknya sel habitat dalam satu Cage
    * @param infile file eksternal input
    */
	Cell * ParseCage(int& nh,ifstream& infile);

	Cell * GetExit();
  /** @brief Procedure intializeCage menginisiasi terbentuknya Cage dengan input file eksternal
    * @param infile file eksternal input 
    */
	void InitializeCage(ifstream& infile);
  /** @brief Function boolean IsInPath mengembalikan true jika (x,y) merupakan Road
    * @param x absis dari lokasi
    * @param y ordinat dari lokasi
    */
	bool IsInPath(int x, int y);
  /** @brief Function GetWidth mengembalikan jumlah kolom dari Zoo
  */
	int GetHeight() const;
  /** @brief Function GetWidth mengembalikan jumlah baris dari Zoo
  */
	int GetWidth() const;
  /** @brief Proedure ClearPath menghapus semua path yang sudah dilalui sehingga seperti semula
    */
	void ClearPath();
  /** @brief Procedure Tour melakukan Tour keliling Zoo
  */	
	void Tour();
	/** @brief Method untuk showfood
	  */
	void ShowFood();
  /** @brief Destructor kelas Zoo
    */
	~Zoo();
	/** @brief Method untuk menggerakkan animal
	  */
	void MoveAnimal();

  void ShowByEdge(int a,int b,int c,int d);
	
private:
	int width;
	int height;
	Cell *** member;
	Cell * ext;
	vector<Cell *> path;
	vector<Cell *> arrent;
	CageList cl;
};


bool SearchInVector(const vector<Cell *>& v,Cell * h);

#endif
