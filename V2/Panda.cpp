#include <iostream>
#include "Panda.h"
using namespace std;

Panda :: Panda () {
	taxonomy = "Mamalia";
	consumption = "Herbivora";
	habitat = "Darat";
	nama = "Panda";
	clue.push_back("Satwa ini berbulu hitam dan putih");
	clue.push_back("Wajahnya yang imut kadang membuat orang merasa iba.");
}

string Panda :: getTaxonomy() const {return nama;}
string Panda :: getConsumption() const { return consumption;}
string Panda :: getHabitat() const {return habitat;}
string Panda :: getNama() const {return nama;}
void Panda :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
