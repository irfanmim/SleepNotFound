#ifndef HABITAT_H
#define HABITAT_H
#include "Cell.h"

class Habitat: public Cell{
public:
	Habitat(int x,int y);
};

class WaterHabitat: public Habitat{
public:
	WaterHabitat(int x,int y);
	void render();
};

/** @class AirHabitat
  * Salah satu jenis habitat
  */
class AirHabitat: public Habitat{
public:
	AirHabitat(int x,int y);
	void render();
};

class LandHabitat: public Habitat{
public:
	LandHabitat(int x,int y);
	void render();
};

#endif