#include <iostream>
#include "Gorilla.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

Gorilla :: Gorilla (int x, int y, int weight) : Animal(x, y, weight), Omnivore(weight) {
	;
}

void Gorilla :: interact() {cout << "*Gorilla menggedor kandang dan berusaha menerkam kamu*" << endl;}