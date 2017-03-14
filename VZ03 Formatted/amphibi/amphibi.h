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
  * I.S.: Kelas amphibi belum memiliki method menampilkan nama taksonomi
	* F.S.: Kelas amphibi sudah memiliki method menampilkan nama taksonomi
	* Pembuat kelas: Marvin
  */  
  void ShowTaxName();    
};

#endif