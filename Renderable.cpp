#include "Renderable.h"
#include <iostream>
using namespace std;

Renderable::Renderable(){
	string temp = "";
	s = temp;
}

Renderable::Renderable(string s){
	this -> s = s;
}

void Renderable::render(){
	cout << s;
}

int main(){
	return 0;
}