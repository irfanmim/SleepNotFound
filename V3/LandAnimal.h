#ifndef LAND_ANIMAL_H
#define LAND_ANIMAL_H
#include "Animal.h"
#include "Taxonomy.h"
#include "Consumption.h"

/** @class Tiger
  * Real class tiger
  */
class Tiger : public LandAnimal, public Carnivore, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas tiger
	  */  
	Tiger(int x, int y, int weight);
	/** @brief Method interaksi tiger
	  */
	void renderAnimal();
	void interact();
};

/** @class Peacock
  * Real class peacock
  */
class Peacock : public LandAnimal, public Herbivore, public Aves {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas peacock
	  */  
	Peacock(int x, int y, int weight);
	/** @brief Method interaksi peacock
	  */
	void renderAnimal();
	void interact();
};

/** @class Panda
  * Real class panda
  */
class Panda : public LandAnimal, public Herbivore, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas panda
	  */  
	Panda(int x, int y, int weight);
	/** @brief Method interaksi panda
	  */
	void interact();
	void renderAnimal();
};

/** @class Ostrich
  * Real class ostrich
  */
class Ostrich : public LandAnimal, public Omnivore, public Aves{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas ostrich
	  */  
	Ostrich(int x, int y, int weight);
	/** @brief Method interaksi ostrich
	  */
	void interact();
	void renderAnimal();
};

/** @class Orangutan
  * Real class orangutan
  */
class Orangutan : public LandAnimal, public Omnivore, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas orangutan
	  */  
	Orangutan(int x, int y, int weight);
	/** @brief Method interaksi orangutan
	  */
	void interact();
	void renderAnimal();
};

/** @class Lion
  * Real class lion
  */
class Lion : public LandAnimal, public Carnivore, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas lion
	  */  
	Lion(int x, int y, int weight);
	/** @brief Method interaksi lion
	  */
	void interact();
	void renderAnimal();
};

/** @class Komodo
  * Real class komodo
  */
class Komodo : public LandAnimal, public Carnivore, public Reptile{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas komodo
	  */  
	Komodo(int x, int y, int weight);
	/** @brief Method interaksi komodo
	  */
	void interact();
	void renderAnimal();
};

/** @class Kangaroo
  * Real class kangaroo
  */
class Kangaroo : public LandAnimal, public Herbivore, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas kangaroo
	  */  
	Kangaroo(int x, int y, int weight);
	/** @brief Method interaksi kangaroo
	  */
	void interact();
	void renderAnimal();
};

/** @class Hyena
  * Real class hyena
  */
class Hyena : public LandAnimal, public Carnivore, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas hyena
	  */  
	Hyena(int x, int y, int weight);
	/** @brief Method interaksi hyena
	  */
	void interact();
	void renderAnimal();
};

/** @class Gorilla
  * Real class gorilla
  */
class Gorilla : public LandAnimal, public Omnivore, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas gorilla
	  */  
	Gorilla(int x, int y, int weight);
	/** @brief Method interaksi gorilla
	  */
	void interact();
	void renderAnimal();
};

/** @class Coala
  * Real class coala
  */
class Coala : public LandAnimal, public Herbivore, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas coala
	  */  
	Coala(int x, int y, int weight);
	/** @brief Method interaksi coala
	  */
	void interact();
	void renderAnimal();
};

/** @class Chimpanzee
  * Real class chimpanzee
  */
class Chimpanzee : public LandAnimal, public Omnivore, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas chimpanzee
	  */  
	Chimpanzee(int x, int y, int weight);
	/** @brief Method interaksi chimpanzee
	  */
	void interact();
	void renderAnimal();
};

/** @class Cheetah
  * Real class cheetah
  */
class Cheetah : public LandAnimal, public Carnivore, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * @param weight berat badan
	  * Konstruktor kelas cheetah
	  */  
	Cheetah(int x, int y, int weight);
	/** @brief Method interaksi cheetah
	  */
	void interact();
	void renderAnimal();
};

#endif