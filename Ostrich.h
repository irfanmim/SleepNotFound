#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Ostrich : public Animal, public Omnivore{
public :
	Ostrich(int x, int y, int weight);
	void interact();
};