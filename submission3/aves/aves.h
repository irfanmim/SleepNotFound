#ifndef AVES_H
#define AVES_H
#include "../taxonomy/taxonomy.h"

/** @class Aves
  * Base class
  */
class Aves : public Taxonomy{
public:
/** @brief method ShowName.
  * Menampilkan nama taksonomi.
  */  
  void ShowTaxName();    
};

#endif