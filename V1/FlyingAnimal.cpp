#include "FlyingAnimal.h"
#include <iostream>
using namespace std;

Bat::Bat(int x, int y) : FlyingAnimal(x, y){}

void Bat::interact(){cout << "*Kelelawar bergelantung terbalik*" << endl;}

Cendrawasih :: Cendrawasih (int x, int y) : FlyingAnimal(x, y){}

void Cendrawasih :: interact() {cout << "*Burung cendrawasih sangat indah, tidak heran kalau mereka terancam punah .__. *" << endl;}

Eagle :: Eagle (int x, int y) : FlyingAnimal(x, y){}

void Eagle :: interact() {cout << "*Tatapan burung elang kelihatan tajam sekali*" << endl;}

Kolibri :: Kolibri (int x, int y) : FlyingAnimal(x, y){}

void Kolibri :: interact() {cout << "*Paruh kolibri sangat panjang, kerenn *" << endl;}