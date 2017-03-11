#include "Mammal.h"
#include <string>
#include <iostream>
using namespace std;

Mammal::Mammal(string tax_name):Taxonomy(tax_name){
	
}
void Mammal::showTaxName(){
	cout<<taxName<<endl;
}


