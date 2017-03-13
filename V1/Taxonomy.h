#ifndef TAXONOMY_H
#define TAXONOMY_H

/** @class Taxonomy
  * Abstract Base Class (ABC)
  */
class Taxonomy{
public:
	virtual void showTaxName()=0;
};

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

/** @class Aves
  * Base class
  */
class Aves : public Taxonomy{
public:
/** @brief method showName.
  * Menampilkan nama taksonomi.
  */  
	void showTaxName();		
};

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
