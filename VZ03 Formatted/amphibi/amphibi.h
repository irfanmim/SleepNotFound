#ifndef AMPHIBI_H
#define AMPHIBI_H
#include "../taxonomy/taxonomy.h"

/** @class Amphibi
  * Base class
  */
class Amphibi : public Taxonomy{
public:
/** @brief method ShowName.
  * Menampilkan nama taksonomi.
  */  
  void ShowTaxName();    
};

#endif