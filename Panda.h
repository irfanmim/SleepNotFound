#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Panda : public Animal, public Herbivore {
public :
	Panda(int x, int y, int weight);
	void interact();
};