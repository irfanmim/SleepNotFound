#include "Aves.h"
#include <string>
#include <iostream>
using namespace std;

Aves::Aves(string tax_name):Taxonomy(tax_name){
	
}
void Aves::showTaxName(){
	cout<<taxName<<endl;
}


