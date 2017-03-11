#include <iostream>
#include "Lion.h"
using namespace std;

Lion :: Lion () {
	taxonomy = "Mamalia";
	consumption = "Karnivora";
	habitat = "Darat";
	nama = "Singa";
	clue.push_back("Clue ke-n");
}

string Lion :: getTaxonomy() const {return nama;}
string Lion :: getConsumption() const { return consumption;}
string Lion :: getHabitat() const {return habitat;}
string Lion :: getNama() const {return nama;}
void Lion :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
