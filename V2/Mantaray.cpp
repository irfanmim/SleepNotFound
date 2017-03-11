#include <iostream>
#include "Mantaray.h"
using namespace std;

Mantaray :: Mantaray () {
	taxonomy = "Pisces";
	consumption = "Karnivora";
	habitat = "Air";
	nama = "Ikan Pari";
	clue.push_back("Clue ke-n");
}

string Mantaray :: getTaxonomy() const {return nama;}
string Mantaray :: getConsumption() const { return consumption;}
string Mantaray :: getHabitat() const {return habitat;}
string Mantaray :: getNama() const {return nama;}
void Mantaray :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
