#ifndef PARSE_H
#define PARSE_H
#include "Zoo.h"
#include <fstream>
using namespace std;
	
/** @brief Function parseZoo mengembalikan matriks of char
  * @param row jumlah baris
  * @param col jumlah kolom
  * @param infile inputfile
  */  
char ** parseZoo(int row,int col,ifstream& infile);
/** @brief Procedure getRowCol mengambil nilai kolom dan baris dari file eksternal
  * @param row jumlah baris
  * @param col jumlah kolom
  * @param infile input file eksternal
  */  
void getRowCol(int& row, int& col, ifstream& infile);
/** @brief Procedure getEntry mengambil satu buah string dari file eksternal untuk mengisi Cage
  * @param s input stringnya
  * @param x absis lokasi
  * @param y ordinat lokasi
  * @param w berat hewan
  * @param an karakter penanda hewan
  */  
void getEntry(string s,int& x,int& y,int& w,char& an);
/** @brief Procedure getNum mengambil nilai n dari input file eksternal untuk mengisi banyak Cage pada region tertentu
  * @param n banyak sel habitat dalam satu Cage
  * @param infile input file eksternal
  */  
void getNum(int& n,ifstream& infile);
/** @brief Procedure getMatrix mengisi matriks of char
  * @param row jumlah baris
  * @param col jumlah kolom
  * @param infile input file
  */  
void getMatrix(char ** c,int row, int col, ifstream& infile);

#endif