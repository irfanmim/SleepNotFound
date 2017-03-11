#ifndef OMNIVORE_H
#define OMNIVORE_H
#include "Herbivore.h"
#include "Carnivore.h"

class Omnivore : public Herbivore, public Carnivore {
public:
	Omnivore(float weight);
	static int nOmnivore;
	static int total_oFood;
	int getFood() const;
protected :
	float oFood;
};

#endif