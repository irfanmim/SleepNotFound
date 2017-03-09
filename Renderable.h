#ifndef RENDERABLE_H
#define RENDERABLE_H

class Renderable{
public:
	Renderable();
	Renderable(string s);
	void render();
private:
	string s;
};

#endif