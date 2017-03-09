#ifndef CELL_H
#define CELL_H
#include "Point.h"

/** @class Cell
  * Kelas yang merepresentasikan sel dalam matriks zoo.
  */
class Cell{
	/** @brief Constructor.
	  * Membuat objek cage dengan mengalokasi daftar habitat dan daftar animal
	  * serta menginisialisasi jumlah masing-masing dengan 0
	  */
	Cell();
	protected:
		Point loc; /** Indeks sel dalam matriks zoo */
};

#endif