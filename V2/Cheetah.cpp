#include <iostream>
#include "Cheetah.h"
using namespace std;

Cheetah :: Cheetah () {
	taxonomy = "Mamalia";
	consumption = "Karnivora";
	habitat = "Darat";
	nama = "Cheetah";
	clue.push_back("Clue ke-n");
}

string Cheetah :: getTaxonomy() const {return nama;}
string Cheetah :: getConsumption() const { return consumption;}
string Cheetah :: getHabitat() const {return habitat;}
string Cheetah :: getNama() const {return nama;}
void Cheetah :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
