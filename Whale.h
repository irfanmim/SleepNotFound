#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Whale : public Animal, public Carnivore{
public :
	Whale(int x, int y, int weight);
	void interact();
};