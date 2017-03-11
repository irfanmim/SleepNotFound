#ifndef WATER_ANIMAL_H
#define WATER_ANIMAL_H
#include "Animal.h"
#include "Consumption.h"

class Dolphin : public Animal, public Carnivore{
public :
	Dolphin(int x, int y, int weight);
	void interact();
};

class Shark : public Animal, public Carnivore{
public :
	Shark(int x, int y, int weight);
	void interact();
};

class Mantaray : public Animal, public Carnivore{
public :
	Mantaray(int x, int y, int weight);
	void interact();
};

class Whale : public Animal, public Carnivore{
public :
	Whale(int x, int y, int weight);
	void interact();
};

#endif