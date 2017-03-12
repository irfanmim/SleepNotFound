#ifndef LAND_ANIMAL_H
#define LAND_ANIMAL_H
#include "Animal.h"
#include "Taxonomy.h"

/** @class Tiger
  * Real class tiger
  */
class Tiger : public LandAnimal, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas tiger
	  */  
	Tiger(int x, int y);
	/** @brief Method interaksi tiger
	  */
	void interact();
};

/** @class Peacock
  * Real class peacock
  */
class Peacock : public LandAnimal, public Aves {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas peacock
	  */  
	Peacock(int x, int y);
	/** @brief Method interaksi peacock
	  */
	void interact();
};

/** @class Panda
  * Real class panda
  */
class Panda : public LandAnimal, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas panda
	  */  
	Panda(int x, int y);
	/** @brief Method interaksi panda
	  */
	void interact();
};

/** @class Ostrich
  * Real class ostrich
  */
class Ostrich : public LandAnimal, public Aves{
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas ostrich
	  */  
	Ostrich(int x, int y);
	/** @brief Method interaksi ostrich
	  */
	void interact();
};

/** @class Orangutan
  * Real class orangutan
  */
class Orangutan : public LandAnimal, public Mammal {
public :
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y ordinat lokasi
	  * Konstruktor kelas orangutan
	  */  
	Orangutan(int x, int y);
	/** @brief Method interaksi orangutan
	  */
	void interact();
};

/** @class Lion
  * Real class lion
  */
class Lion : public LandAnimal, public Mammal {
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
};

#endif
