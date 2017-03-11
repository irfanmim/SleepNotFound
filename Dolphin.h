#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Dolphin : public Animal, public Carnivore{
public :
	Dolphin(int x, int y, int weight);
	void interact();
};