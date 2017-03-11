#include <iostream>
#include "Bat.h"
using namespace std;

Bat :: Bat () {
	taxonomy = "Mamalia";
	consumption = "Karnivora";
	habitat = "Udara";
	nama = "Kelelawar";
	clue.push_back("Clue ke-n");
}

string Bat :: getTaxonomy() const {return nama;}
string Bat :: getConsumption() const { return consumption;}
string Bat :: getHabitat() const {return habitat;}
string Bat :: getNama() const {return nama;}
void Bat :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
