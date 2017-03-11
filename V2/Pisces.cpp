#include "Pisces.h"
#include <string>
#include <iostream>
using namespace std;

Pisces::Pisces(string tax_name):Taxonomy(tax_name){
	
}
void Pisces::showTaxName(){
	cout<<taxName<<endl;
}


