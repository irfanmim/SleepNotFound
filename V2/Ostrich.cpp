#include <iostream>
#include "Ostrich.h"
using namespace std;

Ostrich :: Ostrich () {
	taxonomy = "Mamalia";
	consumption = "Omnivora";
	habitat = "Darat";
	nama = "Burung Unta";
	clue.push_back("Hewan ini hidup di daerah kering dan identik dengan padang pasir.");
	clue.push_back("Identik dengan padang pasir.");
}

string Ostrich :: getTaxonomy() const {return nama;}
string Ostrich :: getConsumption() const { return consumption;}
string Ostrich :: getHabitat() const {return habitat;}
string Ostrich :: getNama() const {return nama;}
void Ostrich :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
