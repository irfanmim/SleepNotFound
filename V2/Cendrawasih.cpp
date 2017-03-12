#include <iostream>
#include "Cendrawasih.h"
using namespace std;

Cendrawasih :: Cendrawasih () {
	taxonomy = "Aves";
	consumption = "Omnivora";
	habitat = "Udara";
	nama = "Cendrawasih";
	clue.push_back("Burung khas Indonesia ini disebut sebagai \"The Bird of Paradise\" karena keindahannya.");
}

string Cendrawasih :: getTaxonomy() const {return nama;}
string Cendrawasih :: getConsumption() const { return consumption;}
string Cendrawasih :: getHabitat() const {return habitat;}
string Cendrawasih :: getNama() const {return nama;}
void Cendrawasih :: printClue() const {
	for (int i = 0; i < clue.size(); i++) {
		cout << (i+1) << ". " << clue[i] << endl;
	}
}
