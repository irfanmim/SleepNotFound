#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Kangaroo : public Animal, public Herbivore {
public :
	Kangaroo(int x, int y, int weight);
	void interact();
};