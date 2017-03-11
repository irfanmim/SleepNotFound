#ifndef AVES_H
#define AVES_H
#include <string>
#include "Taxonomy.h"

using namespace std;
/** @class Aves
  * Base class
  */
class Aves : public Taxonomy{
	public:
	/** @brief Constructor.
	  * Konstruktor kelas Aves
	  */  
		Aves(string tax_name);
	/** @brief method showName.
	  * Menampilkan nama taksonomi.
	  */  
		void showTaxName();		
};
#endif
