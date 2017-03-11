#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Eagle : public Animal, public Carnivore{
public :
	Eagle(int x, int y, int weight);
	void interact();
};