#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Bat : public Animal, public Carnivore{
public :
	Bat(int x, int y, int weight);
	void interact();
};