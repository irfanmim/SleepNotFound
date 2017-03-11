#ifndef LAND_ANIMAL_H
#define LAND_ANIMAL_H
#include "Animal.h"
#include "Consumption.h"

class Tiger : public Animal, public Carnivore {
public :
	Tiger(int x, int y, int weight);
	void interact();
};

class Peacock : public Animal, public Herbivore {
public :
	Peacock(int x, int y, int weight);
	void interact();
};

class Panda : public Animal, public Herbivore {
public :
	Panda(int x, int y, int weight);
	void interact();
};

class Ostrich : public Animal, public Omnivore{
public :
	Ostrich(int x, int y, int weight);
	void interact();
};

class Orangutan : public Animal, public Omnivore {
public :
	Orangutan(int x, int y, int weight);
	void interact();
};

class Lion : public Animal, public Carnivore {
public :
	Lion(int x, int y, int weight);
	void interact();
};

class Komodo : public Animal, public Carnivore{
public :
	Komodo(int x, int y, int weight);
	void interact();
};

class Kangaroo : public Animal, public Herbivore {
public :
	Kangaroo(int x, int y, int weight);
	void interact();
};

class Hyena : public Animal, public Carnivore{
public :
	Hyena(int x, int y, int weight);
	void interact();
};

class Gorilla : public Animal, public Omnivore {
public :
	Gorilla(int x, int y, int weight);
	void interact();
};

class Coala : public Animal, public Herbivore {
public :
	Coala(int x, int y, int weight);
	void interact();
};

class Chimpanzee : public Animal, public Omnivore {
public :
	Chimpanzee(int x, int y, int weight);
	void interact();
};

class Cheetah : public Animal, public Carnivore {
public :
	Cheetah(int x, int y, int weight);
	void interact();
};

#endif