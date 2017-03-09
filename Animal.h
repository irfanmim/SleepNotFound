#ifndef ANIMAL_H
#define ANIMAL_H

/** @class Animal
  * ABC animal
  */
class Animal{
	public:
	/** @brief Constructor.
	  * Konstruktor kelas animal
	  */  
		Animal();
	/** @brief Method interaksi animal.
	  * Setiap animal akan berinteraksi dengan cara yang berbeda-beda
	  */	
		virtual void interact()=0;
	protected:
	/** @brief Lokasi setiap animal dalam matriks Zoo.
	  */
		Point loc;
};

#endif