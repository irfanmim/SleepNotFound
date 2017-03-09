#include "Renderable.h"
#include <iostream>
#include <string>
using namespace std;

Renderable::Renderable(){
	string temp = "";
	s = temp;
}

Renderable::Renderable(string temp){
	s = temp;
}

void Renderable::render(){
	cout << s;
}