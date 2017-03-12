#include <iostream>
#include "Peacock.h"
using namespace std;

Peacock :: Peacock () {
	taxonomy = "Aves";
	consumption = "Herbivora";
	habitat = "Darat";
	nama = "Burung Merak";
	clue.push_back("Satwa ini memiliki bulu ekor yang indah.");
	clue.push_back("Termasuk burung yang tidak bisa terbang.");
}

string Peacock :: getTaxonomy() const {return nama;}
string Peacock :: getConsumption() const { return consumption;}
string Peacock :: getHabitat() const {return habitat;}
string Peacock :: getNama() const {return nama;}
void Peacock :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
