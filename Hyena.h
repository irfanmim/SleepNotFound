#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Hyena : public Animal, public Carnivore{
public :
	Hyena(int x, int y, int weight);
	void interact();
};