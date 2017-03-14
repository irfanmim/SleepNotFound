#ifndef EXIT_H
#define EXIT_H
#include "Point.h"

/** @class Exit
  * Real class exit
  */
class Exit {
public:
	/** @brief Constructor.
	  * @param x absis lokasi
	  * @param y oridnat lokasi
	  * Konstruktor kelas exit
	  */  
	Exit(int x,int y);
	/** @brief Method render.
	  */
	void render();
	Point& getLoc();
private :
	Point loc;
};
#endif