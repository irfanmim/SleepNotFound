#ifndef ZOO_H
#define ZOO_H
#include "Cell.h"
#define DEF_WIDTH 35
#define DEF_HEIGHT 25

class Zoo{
public:
	Zoo();
	Zoo(int w,int h);
	void initialize(char ** c,int row,int col);
	void show();
	~Zoo();
private:
	int width;
	int height;
	Cell *** member;
};

#endif