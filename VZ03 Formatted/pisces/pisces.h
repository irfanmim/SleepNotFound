#ifndef PISCES_H
#define PISCES_H
#include "../taxonomy/taxonomy.h"

/** @class Pisces
  * Base class
  */
class Pisces : public Taxonomy{
public:
/** @brief method ShowName.
  * Menampilkan nama taksonomi.
  */  
  void ShowTaxName();    
};

#endif