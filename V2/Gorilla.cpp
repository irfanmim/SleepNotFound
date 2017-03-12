#include <iostream>
#include "Gorilla.h"
using namespace std;

Gorilla :: Gorilla () {
	taxonomy = "Mamalia";
	consumption = "Omnivora";
	habitat = "Darat";
	nama = "Gorila";
	clue.push_back("Hewan ini termasuk kera besar dan ada filmnya juga.");
	clue.push_back("Haha");
}

string Gorilla :: getTaxonomy() const {return nama;}
string Gorilla :: getConsumption() const { return consumption;}
string Gorilla :: getHabitat() const {return habitat;}
string Gorilla :: getNama() const {return nama;}
void Gorilla :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
