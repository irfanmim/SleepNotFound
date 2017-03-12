#include <iostream>
#include "Lion.h"
using namespace std;

Lion :: Lion () {
	taxonomy = "Mamalia";
	consumption = "Karnivora";
	habitat = "Darat";
	nama = "Singa";
	clue.push_back("Hewan ini mempunyai keganasan yang tinggi.");
	clue.push_back("Sehingga tidak heran hewan ini mendapat sebutan Raja Hutan");
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
