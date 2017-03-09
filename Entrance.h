#ifndef ENTRANCE_H
#define ENTRANCE_H
#include "Road.h"

/** @class Entrance
  * Kelas yang menyatakan lokasi masuk turis
  * Turunan khusus dari jalan
  */
class Entrance: public Road{
	public : 
	/** @brief Constructor.
	  * Membuat objek entrance dan menginisialisasi lokasinya
	  */
		Entrance();
};

#endif