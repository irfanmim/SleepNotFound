#ifndef ANIMALARRAY_H
#define ANIMALARRAY_H

#include <string>
#include <vector>

using namespace std;


Class AnimalArray {
public :
	AnimalArray();
	AnimalArray(int size);
//	AnimalArray(const AnimalArray& AA);
//	~AnimalArray();
// 	AnimalArray& operator=(const AnimalArary& AA);
	vector<string> getData() const;

private :
	vector<string> data;
	int const size;
};

#endif