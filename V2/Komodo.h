#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Komodo {
public :
	Komodo();
	string getTaxonomy() const;
	string getConsumption() const;
	string getHabitat() const;
	string getNama() const;
	void printClue() const;
private :
	string taxonomy;
	string consumption;  
	string habitat;
	string nama;
	vector<string> clue;;
};