#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Komodo : public Animal, public Carnivore{
public :
	Komodo(int x, int y, int weight);
	void interact();
};