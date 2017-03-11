#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Gorilla : public Animal, public Omnivore {
public :
	Gorilla(int x, int y, int weight);
	void interact();
};