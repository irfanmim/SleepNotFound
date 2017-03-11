#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Kolibri : public Animal, public Omnivore{
public :
	Kolibri(int x, int y, int weight);
	void interact();
};