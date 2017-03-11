#include <iostream>
#include "Kangaroo.h"
using namespace std;

Kangaroo :: Kangaroo () {
	taxonomy = "Mamalia";
	consumption = "Herbivora";
	habitat = "Darat";
	nama = "Kangguru";
	clue.push_back("Clue ke-n");
}

string Kangaroo :: getTaxonomy() const {return nama;}
string Kangaroo :: getConsumption() const { return consumption;}
string Kangaroo :: getHabitat() const {return habitat;}
string Kangaroo :: getNama() const {return nama;}
void Kangaroo :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
