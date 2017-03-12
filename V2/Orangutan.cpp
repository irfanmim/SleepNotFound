#include <iostream>
#include "Orangutan.h"
using namespace std;

Orangutan :: Orangutan () {
	taxonomy = "Mamalia";
	consumption = "Orangutan";
	habitat = "Darat";
	nama = "Orangutan";
	clue.push_back("Hewan ini mirip dengan manusia.");
	clue.push_back("Biasanya bergelantungan di pepohonan.");
}

string Orangutan :: getTaxonomy() const {return nama;}
string Orangutan :: getConsumption() const { return consumption;}
string Orangutan :: getHabitat() const {return habitat;}
string Orangutan :: getNama() const {return nama;}
void Orangutan :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
