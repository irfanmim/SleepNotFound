#include "kolibri.h"
#include <iostream>
using namespace std;

Kolibri :: Kolibri (int x, int y) : FlyingAnimal(x, y) {}

void Kolibri :: Interact() {cout << "*Paruh kolibri sangat panjang, kerenn *" << endl;}