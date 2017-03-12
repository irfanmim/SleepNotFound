#include <iostream>
#include "Coala.h"
using namespace std;

Coala :: Coala () {
	taxonomy = "Mamalia";
	consumption = "Herbivora";
	habitat = "Darat";
	nama = "Koala";
	clue.push_back("Identik dengan Australia.");
	clue.push_back("Hewan ini biasanya memakan daun eucalyptus.");
}

string Coala :: getTaxonomy() const {return nama;}
string Coala :: getConsumption() const { return consumption;}
string Coala :: getHabitat() const {return habitat;}
string Coala :: getNama() const {return nama;}
void Coala :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
