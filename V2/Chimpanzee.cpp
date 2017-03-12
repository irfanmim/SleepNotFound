#include <iostream>
#include "Chimpanzee.h"
using namespace std;

Chimpanzee :: Chimpanzee () {
	taxonomy = "Mamalia";
	consumption = "Omnivora";
	habitat = "Darat";
	nama = "Chimpanzee";
	clue.push_back("Primata ini sering dianggap sebagai hewan paling cerdas di darat.");
	clue.push_back("Dan mirip dengan manusia.");
}

string Chimpanzee :: getTaxonomy() const {return nama;}
string Chimpanzee :: getConsumption() const { return consumption;}
string Chimpanzee :: getHabitat() const {return habitat;}
string Chimpanzee :: getNama() const {return nama;}
void Chimpanzee :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
