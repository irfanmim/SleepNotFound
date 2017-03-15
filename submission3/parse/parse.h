#ifndef PARSE_H
#define PARSE_H
#include <fstream>
using namespace std;

/** @brief Function ParseZoo mengembalikan matriks of char
  * @param row jumlah baris
  * @param col jumlah kolom
  * @param infile inputfile
  */  
char ** ParseZoo(int row,int col,ifstream& infile);

/** @brief Procedure GetRowCol mengambil nilai kolom dan baris dari file eksternal
  * @param row jumlah baris
  * @param col jumlah kolom
  * @param infile input file eksternal
  */  
void GetRowCol(int& row, int& col, ifstream& infile);

/** @brief Procedure GetEntry mengambil satu buah string dari file eksternal untuk mengisi Cage
  * @param s input stringnya
  * @param x absis lokasi
  * @param y ordinat lokasi
  * @param w berat hewan
  * @param an karakter penanda hewan
  */  
void GetEntry(string s,int& x,int& y,int& w,char& an);

/** @brief Procedure GetNum mengambil nilai n dari input file eksternal untuk mengisi banyak Cage pada region tertentu
  * @param n banyak sel habitat dalam satu Cage
  * @param infile input file eksternal
  */ 
void GetNum(int& n,ifstream& infile);

/** @brief Procedure GetMatrix mengisi matriks of char
  * @param row jumlah baris
  * @param col jumlah kolom
  * @param infile input file
  */ 
void GetMatrix(char ** c,int row, int col, ifstream& infile);

#endif