#include <iostream>
#include "Hyena.h"
using namespace std;

Hyena :: Hyena () {
	taxonomy = "Mamalia";
	consumption = "Omnivora";
	habitat = "Darat";
	nama = "Hyena";
	clue.push_back("Satwa yang satu ini berukuran kecil");
	clue.push_back("Namun cukup ganas dan berbahaya, serta lincah mencari mangsa");
}

string Hyena :: getTaxonomy() const {return nama;}
string Hyena :: getConsumption() const { return consumption;}
string Hyena :: getHabitat() const {return habitat;}
string Hyena :: getNama() const {return nama;}
void Hyena :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
