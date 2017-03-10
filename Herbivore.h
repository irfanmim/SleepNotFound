#ifndef HERBIVORE_H
#define HERBIVORE_H

class Herbivore{
	public:
		Herbivore(int weight);
		static int nHerbivore;
		static int total_hFood;
	protected :
		int hFood;
};

#endif