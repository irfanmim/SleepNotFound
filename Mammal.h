#ifndef MAMMAL_H
#define MAMMAL_H
#include <string>
#include "Taxonomy.h"

using namespace std;
/** @class Mammal
  * Base class
  */
class Mammal : public Taxonomy{
	public:
	/** @brief Constructor.
	  * Konstruktor kelas Mammal
	  */  
		Mammal(string tax_name);
	/** @brief method showName.
	  * Menampilkan nama taksonomi.
	  */  
		void showTaxName();		
};
#endif
