#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Cheetah : public Animal, public Carnivore {
public :
	Cheetah(int x, int y, int weight);
	void interact();
};