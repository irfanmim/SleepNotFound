#ifndef HABITAT_H
#define HABITAT_H
#include "Cell.h"

class Habitat: public Cell{
	Habitat();
	Habitat(const Habitat);
	~Habitat();
	Habitat& op=();
};

#endif
