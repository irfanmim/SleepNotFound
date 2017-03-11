#ifndef PISCES_H
#define PISCES_H
#include <string>
#include "Taxonomy.h"

using namespace std;
/** @class Pisces
  * Base class
  */
class Pisces : public Taxonomy{
	public:
	/** @brief Constructor.
	  * Konstruktor kelas Pisces
	  */  
		Pisces(string tax_name);
	/** @brief method showName.
	  * Menampilkan nama taksonomi.
	  */  
		void showTaxName();		
};
#endif
