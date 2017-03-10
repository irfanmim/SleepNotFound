#ifndef OMNIVORE_H
#define OMNIVORE_H
#include "Herbivore.h"
#include "Carnivore.h"

class Omnivore : public Herbivore, public Carnivore {
public:
	Omnivore(int weight);
	static int nOmnivore;
	static int total_oFood;
protected :
	int oFood;
};

#endif