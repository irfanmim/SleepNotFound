#ifndef REPTILE_H
#define REPTILE_H
#include <string>
#include "Taxonomy.h"

using namespace std;
/** @class Reptile
  * Base class
  */
class Reptile : public Taxonomy{
	public:
	/** @brief Constructor.
	  * Konstruktor kelas Reptile
	  */  
		Reptile(string tax_name);
	/** @brief method showName.
	  * Menampilkan nama taksonomi.
	  */  
		void showTaxName();		
};
#endif
