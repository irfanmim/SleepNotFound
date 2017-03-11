#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Lion : public Animal, public Carnivore {
public :
	Lion(int x, int y, int weight);
	void interact();
};