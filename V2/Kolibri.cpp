#include <iostream>
#include "Kolibri.h"
using namespace std;

Kolibri :: Kolibri () {
	taxonomy = "Aves";
	consumption = "Omnivora";
	habitat = "Udara";
	nama = "Kolibri";
	clue.push_back("Clue ke-n");
}

string Kolibri :: getTaxonomy() const {return nama;}
string Kolibri :: getConsumption() const { return consumption;}
string Kolibri :: getHabitat() const {return habitat;}
string Kolibri :: getNama() const {return nama;}
void Kolibri :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
