#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Peacock : public Animal, public Herbivore {
public :
	Peacock(int x, int y, int weight);
	void interact();
};