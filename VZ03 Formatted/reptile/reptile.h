#ifndef REPTILE_H
#define REPTILE_H
#include "../taxonomy/taxonomy.h"

/** @class Reptile
  * Base class
  */
class Reptile : public Taxonomy{
public:
/** @brief method ShowName.
  * Menampilkan nama taksonomi.
  */  
  void ShowTaxName();    
};

#endif