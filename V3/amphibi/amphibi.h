#ifndef AMPHIBI_H
#define AMPHIBI_H
#include "../taxonomy/taxonomy.h"

/** @class Amphibia
  * Base class
  */
class Amphibi : public Taxonomy{
public:
/** @brief method showName.
  * Menampilkan nama taksonomi.
  */  
	void showTaxName();		
};

#endif