#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Shark : public Animal, public Carnivore{
public :
	Shark(int x, int y, int weight);
	void interact();
};