#ifndef RENDERABLE_H
#define RENDERABLE_H
#include <string>
using namespace std;

/** @class Renderable
  * Kelas ABC untuk mewariskan fungsi render.
  */
class Renderable{
public:

	/** @brief Pure Virtual Function render
	  */
	virtual void render()=0;
};

#endif