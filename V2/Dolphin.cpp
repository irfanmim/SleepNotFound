#include <iostream>
#include "Dolphin.h"
using namespace std;

Dolphin :: Dolphin () {
	taxonomy = "Mamalia";
	consumption = "Karnivora";
	habitat = "Air";
	nama = "Lumba-Lumba";
	clue.push_back("Hewan ini unik karena sering menjadi penyelamat manusia yang tenggelam di tengah laut.");
	clue.push_back("Hewan ini menyusui anaknya");
}

string Dolphin :: getTaxonomy() const {return nama;}
string Dolphin :: getConsumption() const { return consumption;}
string Dolphin :: getHabitat() const {return habitat;}
string Dolphin :: getNama() const {return nama;}
void Dolphin :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}