#ifndef FACILITY_H
#define FACILITY_H
#include "Cell.h"

class Facility: public Cell{
public:
	Facility(int x,int y);
};

class Park: public Facility{
public:
	Park(int x,int y);
	void render();
};

class Restaurant: public Facility{
public:
	Restaurant(int x,int y);
	void render();
};

class Road: public Facility{
public:
	Road(int x,int y);
	virtual void render();
};

class Entrance: public Road{
public : 
	Entrance(int x,int y);
	void render();
};

class Exit: public Road{
public:
	Exit(int x,int y);
	void render();
};

#endif