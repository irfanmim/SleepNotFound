#include <iostream>
#include "Cendrawasih.h"
#include "Animal.h"
#include "Omnivore.h"
#include "Herbivore.h"
#include "Carnivore.h"
using namespace std;

Cendrawasih :: Cendrawasih (int x, int y, int weight) : Animal(x, y, weight), Omnivore(weight) {
	;
}

void Cendrawasih :: interact() {cout << "*Burung cendrawasih sangat indah, tidak heran kalau mereka terancam punah .__. *" << endl;}