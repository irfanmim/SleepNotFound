#ifndef TAXONOMY_H
#define TAXONOMY_H
#include <iostream>
using namespace std;

class Taxonomy{
	public:
		Taxonomy(string tax_name);
		virtual void showTaxName()=0;
	protected:
		const string taxName;
};

#endif
