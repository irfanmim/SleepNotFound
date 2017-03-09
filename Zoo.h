#ifndef ZOO_H
#define ZOO_H
#include "Cell.h"
#include "Road.h"

class Zoo{
	private:
		int width;
		int height;
		Cell *** area;
		Road * path;
};

#endif