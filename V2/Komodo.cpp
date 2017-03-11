#include <iostream>
#include "Komodo.h"
using namespace std;

Komodo :: Komodo () {
	taxonomy = "Reptilia";
	consumption = "Karnivora";
	habitat = "Darat";
	nama = "Komodo";
	clue.push_back("Clue ke-n");
}

string Komodo :: getTaxonomy() const {return nama;}
string Komodo :: getConsumption() const { return consumption;}
string Komodo :: getHabitat() const {return habitat;}
string Komodo :: getNama() const {return nama;}
void Komodo :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
