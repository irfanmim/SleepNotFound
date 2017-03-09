#ifndef EXIT_H
#define EXIT_H
#include "Road.h"

/** @class Exit
  * Kelas yang menyatakan lokasi keluar turis
  * Turunan khusus dari jalan
  */
class Exit: public Road{
	/** @brief Constructor.
	  * Membuat objek entrance dan menginisialisasi lokasinya
	  */
	  Exit();
};

#endif