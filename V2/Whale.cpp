#include <iostream>
#include "Whale.h"
using namespace std;

Whale :: Whale () {
	taxonomy = "Mamalia";
	consumption = "Karnivora";
	habitat = "Air";
	nama = "Ikan Paus";
	clue.push_back("Clue ke-n");
}

string Whale :: getTaxonomy() const {return nama;}
string Whale :: getConsumption() const { return consumption;}
string Whale :: getHabitat() const {return habitat;}
string Whale :: getNama() const {return nama;}
void Whale :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
