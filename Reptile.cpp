#include "Reptile.h"
#include <string>
#include <iostream>
using namespace std;

Reptile::Reptile(string tax_name):Taxonomy(tax_name){
	
}
void Reptile::showTaxName(){
	cout<<taxName<<endl;
}


