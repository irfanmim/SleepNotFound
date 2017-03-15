#ifndef AMPHIBI_H
#define AMPHIBI_H
#include "../taxonomy/taxonomy.h"

/** @class amphibi
  * Base class
  */
class amphibi : public Taxonomy{
public:
/** @brief method showName.
  	* Menampilkan nama taksonomi.
  	* I.S.: Kelas amphibi belum memiliki method menampilkan nama taksonomi
	* F.S.: Kelas amphibi sudah memiliki method menampilkan nama taksonomi
	* Pembuat kelas: Marvin
  */  
  void ShowTaxName();    
};

#endif
