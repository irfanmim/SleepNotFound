#include <iostream>
#include "Tiger.h"
using namespace std;

Tiger :: Tiger () {
	taxonomy = "Mamalia";
	consumption = "Karnivora";
	habitat = "Darat";
	nama = "Harimau";
	clue.push_back("Hewan ini mempunyai kemiripan dengan Raja Hutan");
	clue.push_back("Hewan ini tanpa surai.");
}

string Tiger :: getTaxonomy() const {return nama;}
string Tiger :: getConsumption() const { return consumption;}
string Tiger :: getHabitat() const {return habitat;}
string Tiger :: getNama() const {return nama;}
void Tiger :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
