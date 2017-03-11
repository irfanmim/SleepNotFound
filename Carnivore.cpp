#include <iostream>
#include "Carnivore.h"
using namespace std;

#define factor 0.5

int Carnivore :: nCarnivore = 0;
int Carnivore::  total_cFood = 0;
Carnivore :: Carnivore(float weight) : cFood(weight * factor) {
	nCarnivore++;
	total_cFood += cFood;
}
