#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Mantaray : public Animal, public Carnivore{
public :
	Mantaray(int x, int y, int weight);
	void interact();
};