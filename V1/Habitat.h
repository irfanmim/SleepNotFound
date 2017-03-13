#ifndef HABITAT_H
#define HABITAT_H
#include "Cell.h"
#include "Animal.h"

/** @class Habitat
  * ABC habitat
  */
class Habitat: public Cell{
public:
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y oridnat lokasi
	  * @param s boolean yang merepresentasikan habitat didalam cage atau tidak
	  * Konstruktor kelas habitat
	  */  
	Habitat(int x,int y,bool s);

  	/** @brief Destructor.
	  */
	~Habitat();
	
	/** @brief Method yang mengembalikan nilai pointer to Animal
	  */
	Animal * getAnimal();
	
	/** @brief Method yang mengembalikan nilai a
	  */
	void setAnimal(Animal * an);
	
	/** @brief Method yang membuat nilai a menjadi NULL
	  */
	void resetAnimal();
	
	/** @brief Method yang membuat animel menjalankan interactnya
	  */ 
	void wakeAnimal();
	
	/** @brief Method yang mengembalikan nilai isincage
	  */
	bool getCageStatus() const;
	
	/** @brief Methot untuk merubah nilai isincage menjadi s
	  * @param s Boolean isincage baru
	  */
	void setCageStatus(bool s);

protected:
	Animal * a;
	bool isInCage;
};

/** @class WaterHabitat
  * Base class waterhabitat
  */
class WaterHabitat: public Habitat{
public:
	/** @brief WaterHabitat
	  * @param x absis lokasi
	  * @param y oridnat lokasi
	  * @param s boolean yang merepresentasikan habitat didalam cage atau tidak
	  * Konstruktor waterhabitat
	  */
	WaterHabitat(int x,int y,bool s);
	/** @brief Method render.
	  */
	void render();
};

/** @class AirHabitat
  * Base class waterhabitat
  */
class AirHabitat: public Habitat{
public:
	/** @class AirHabitat
	  * @param x absis lokasi
	  * @param y oridnat lokasi
	  * @param s boolean yang merepresentasikan habitat didalam cage atau tidak
	  * Konstruktor airhabitat
	  */
	AirHabitat(int x,int y,bool s);
	/** @brief Method render.
	  */
	void render();
};

/** @class LandHabitat
  * Base class landhabitat
  */
class LandHabitat: public Habitat{
public:
	/** @class LandHabitat
	  * @param x absis lokasi
	  * @param y oridnat lokasi
	  * @param s boolean yang merepresentasikan habitat didalam cage atau tidak
	  * Konstruktor landhabitat
	  */
	LandHabitat(int x,int y,bool s);
	/** @brief Method render.
	  */
	void render();
};

#endif
