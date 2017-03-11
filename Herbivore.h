#ifndef HERBIVORE_H
#define HERBIVORE_H

class Herbivore{
	public:
		Herbivore(float weight);
		static int nHerbivore;
		static int total_hFood;
		int getFood() const;
	protected :
		float hFood;
};

#endif