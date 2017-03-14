#ifndef MAMMAL_H
#define MAMMAL_H
#include "../taxonomy/taxonomy.h"

/** @class Mammal
  * Base class
  */
class Mammal : public Taxonomy{
public:
/** @brief method showName.
  * Menampilkan nama taksonomi.
  */  
	void showTaxName();		
};


#endif