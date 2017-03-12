#include <iostream>
#include "Mantaray.h"
using namespace std;

Mantaray :: Mantaray () {
	taxonomy = "Pisces";
	consumption = "Karnivora";
	habitat = "Air";
	nama = "Ikan Pari";
	clue.push_back("Ikan ini memiliki bentuk yang unik.");
	clue.push_back("Bentuknya yang gepeng dan ekornya yang panjang beracun menjadi ciri khasnya.");
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
