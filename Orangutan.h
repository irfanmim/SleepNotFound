#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Orangutan : public Animal, public Omnivore {
public :
	Orangutan(int x, int y, int weight);
	void interact();
};