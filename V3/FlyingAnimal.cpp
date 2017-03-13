#include "FlyingAnimal.h"
#include <iostream>
using namespace std;

Bat::Bat(int x, int y, int weight) : FlyingAnimal(x, y, weight), Carnivore(weight){}

void Bat::renderAnimal(){
	cout << "b";
}

void Bat::interact(){cout << "*Kelelawar bergelantung terbalik*" << endl;}

Cendrawasih :: Cendrawasih (int x, int y, int weight) : FlyingAnimal(x, y, weight), Omnivore(weight) {}

void Cendrawasih::renderAnimal(){
	cout << "c";
}

void Cendrawasih :: interact() {cout << "*Burung cendrawasih sangat indah, tidak heran kalau mereka terancam punah .__. *" << endl;}

Eagle :: Eagle (int x, int y, int weight) : FlyingAnimal(x, y, weight), Carnivore(weight){}

void Eagle::renderAnimal(){
	cout << "e";
}

void Eagle :: interact() {cout << "*Tatapan burung elang kelihatan tajam sekali*" << endl;}

Kolibri :: Kolibri (int x, int y, int weight) : FlyingAnimal(x, y, weight), Omnivore(weight){}

void Kolibri::renderAnimal(){
	cout << "k";
}

void Kolibri :: interact() {cout << "*Paruh kolibri sangat panjang, kerenn *" << endl;}