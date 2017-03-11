#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Cendrawasih : public Animal, public Omnivore{
public :
	Cendrawasih(int x, int y, int weight);
	void interact();
};