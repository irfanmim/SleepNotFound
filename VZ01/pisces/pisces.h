#ifndef PISCES_H
#define PISCES_H
#include "../Taxonomy/Taxonomy.h"

/** @class Pisces
  * Base class
  */
class Pisces : public Taxonomy{
public:
/** @brief method showName.
  * Menampilkan nama taksonomi.
  */  
	void showTaxName();		
};

#endif