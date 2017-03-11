#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Tiger : public Animal, public Carnivore {
public :
	Tiger(int x, int y, int weight);
	void interact();
};