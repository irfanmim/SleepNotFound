#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"

class Chimpanzee : public Animal, public Omnivore {
public :
	Chimpanzee(int x, int y, int weight);
	void interact();
};