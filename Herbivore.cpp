#include <iostream>
#include "Herbivore.h"
using namespace std;

#define factor 0.5

int Herbivore :: nHerbivore = 0;
int Herbivore :: total_hFood = 0;

Herbivore::Herbivore(float weight) : hFood(weight * factor) {
	nHerbivore++;
	total_hFood += hFood;
}

