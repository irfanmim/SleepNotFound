#ifndef ZOO_H
#define ZOO_H
#include "Cell.h"
#include "Habitat.h"
#include "Facility.h"
#include "Cage.h"
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
	/** @brief Procedure getRowCol mengambil nilai kolom dan baris dari file eksternal
	  * @param i jumlah baris
	  * @param j jumlah kolom
	  */
	/** @brief Procedure initialize menginisialisasi Zoo berdasar nilai kolom dan baris dari file eksternal
		* @param row jumlah baris
		* @param col jumlah kolom
		* @param infile input file eksternal
		*/
	void initialize(int row,int col,ifstream& infile);
	/** @brief Procedure show menampilkan Zoo ke layar
	  */
	void show();
	/** @brief Function getMember mengambil isi Cell dari koordinat (i,j)
	  * @param i absis lokasi
	  * @param j ordinat lokasi
	  */
	Cell * getMember(int i,int j);
	/** @brief Procedure setMember men set pada koordinat (i,j) isi Cellnya apa
	  * @param i absis lokasi
	  * @param j ordinat lokasi
	  * @param c pointer to Cell
	  */
	void setMember(int i,int j,Cell * c);
	/** @brief Function parseCage mengembalikan array of pointer to Habitat
	  * @param nh banyaknya sel habitat dalam satu Cage
	  * @param infile file eksternal input
	  */
	Habitat ** parseCage(int& nh,ifstream& infile);
	/** @brief Function getExit mengembalikan Road tempat keluar (Exit)
	  */
	Road * getExit();
	/** @brief Procedure intializeCage menginisiasi terbentuknya Cage dengan input file eksternal
	  * @param infile file eksternal input 
	  */
	void initializeCage(ifstream& infile);
	/** @brief Function boolean isInPath mengembalikan true jika (x,y) merupakan Road
	  * @param x absis dari lokasi
	  * @param y ordinat dari lokasi
	  */
	bool isInPath(int x,int y);
	/** @brief Procedure tour melakukan tour keliling Zoo
	*/
	void tour();
	/** @brief Function getWidth mengembalikan jumlah kolom dari Zoo
	*/
	int getHeight() const;
	/** @brief Function getWidth mengembalikan jumlah baris dari Zoo
	*/
	int getWidth() const;
	/** @brief Proedure clearPath menghapus semua path yang sudah dilalui sehingga seperti semula
	  */
	void clearPath();
	/** @brief Destructor kelas Zoo
	  */
	~Zoo();
private:
	int width;/*jumlah kolom dari Zoo*/
	int height;/*jumlah baris dari Zo*/
	Cell *** member; /*Matriks berisi pointer to Cell*/
	vector<Road *> ent; /*kumplan dari Entrance yang ada*/
	Road * ext; /*Exit road pada Zoo*/
	vector<Road *> path; /*kumpulan dari path  yang ada*/
	CageList cl; /*list of Cage*/
};

#endif