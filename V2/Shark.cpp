#include <iostream>
#include "Shark.h"
using namespace std;

Shark :: Shark () {
	taxonomy = "Mamalia";
	consumption = "Karnivora";
	habitat = "Air";
	nama = "Ikan Hiu";
	clue.push_back("Clue ke-n");
}

string Shark :: getTaxonomy() const {return nama;}
string Shark :: getConsumption() const { return consumption;}
string Shark :: getHabitat() const {return habitat;}
string Shark :: getNama() const {return nama;}
void Shark :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
