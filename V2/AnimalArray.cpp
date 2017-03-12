#include "AnimalArray.h"
#include <iostream>
#include <fstream>
using namespace std;

AnimalArray::AnimalArray() : size(10) {
	vector<string> Temp;
	string line;
	ifstream infile("AnimalArray.txt");
	
	if (infile.is_open()) {
		while(getline(infile, line)) {
			Temp.push_back(line);
		}
		while(arr.size() < size) {
			randidx = rand() % Temp.size();
			data.push_back(Temp[randidx]);
			Temp.erase(randidx);
		}
		infile.close();
	}
	else {cout << "Tidak dapat membuka file " << endl;}
}

AnimalArray::AnimalArray(int size) : size(size) {
 	vector<string> Temp;
	string line;
	ifstream infile("AnimalArray.txt");
	
	if (infile.is_open()) {
		while(getline(infile, line)) {
			Temp.push_back(line);
		}
		while(arr.size() < size) {
			randidx = rand() % Temp.size();
			data.push_back(Temp[randidx]);
			Temp.erase(randidx);
		}
		infile.close();
	}
	else {cout << "Tidak dapat membuka file " << endl;}
}

vector<string> AnimalArray::getData() const {return data;}
	