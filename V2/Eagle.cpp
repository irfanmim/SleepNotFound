#include <iostream>
#include "Eagle.h"
using namespace std;

Eagle :: Eagle () {
	taxonomy = "Aves";
	consumption = "Karnivora";
	habitat = "Udara";
	nama = "Elang";
	clue.push_back("Hewan ini merupakan salah satu burung paling ditakuti di udara.");
	clue.push_back("Biasanya memangsa hewan-hewan darat kecil.");
}

string Eagle :: getTaxonomy() const {return nama;}
string Eagle :: getConsumption() const { return consumption;}
string Eagle :: getHabitat() const {return habitat;}
string Eagle :: getNama() const {return nama;}
void Eagle :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
