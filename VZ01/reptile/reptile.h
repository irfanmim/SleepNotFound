#ifndef REPTILE_H
#define REPTILE_H
#include "../Taxonomy/Taxonomy.h"

/** @class Reptile
  * Base class
  */
class Reptile : public Taxonomy{
public:
/** @brief method showName.
  * Menampilkan nama taksonomi.
  */  
	void showTaxName();		
};

#endif