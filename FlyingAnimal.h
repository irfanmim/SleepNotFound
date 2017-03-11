#ifndef FLYING_ANIMAL_H
#define FLYING_ANIMAL_H
#include "Animal.h"
#include "Consumption.h"

class Bat : public Animal, public Carnivore{
public :
	Bat(int x, int y, int weight);
	void interact();
};

class Cendrawasih : public Animal, public Omnivore{
public :
	Cendrawasih(int x, int y, int weight);
	void interact();
};

class Eagle : public Animal, public Carnivore{
public :
	Eagle(int x, int y, int weight);
	void interact();
};

class Kolibri : public Animal, public Omnivore{
public :
	Kolibri(int x, int y, int weight);
	void interact();
};

#endif