#ifndef AMPHIBIA_H
#define AMPHIBIA_H
#include <string>
#include "Taxonomy.h"

using namespace std;
/** @class Amphibia
  * Base class
  */
class Amphibia : public Taxonomy{
	public:
	/** @brief Constructor.
	  * Konstruktor kelas Amphibia
	  */  
		Amphibia(string tax_name);
	/** @brief method showName.
	  * Menampilkan nama taksonomi.
	  */  
		void showTaxName();		
};
#endif
