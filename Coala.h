#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Coala : public Animal, public Herbivore {
public :
	Coala(int x, int y, int weight);
	void interact();
};