#include "Amphibia.h"
#include <string>
#include <iostream>
using namespace std;

Amphibia::Amphibia(string tax_name):Taxonomy(tax_name){
	
}
void Amphibia::showTaxName(){
	cout<<taxName<<endl;
}


