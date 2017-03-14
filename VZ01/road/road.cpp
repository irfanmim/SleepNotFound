#include "Road.h"
#include <iostream>
using namespace std;

Road::Road(int x,int y):Facility(x,y),visited(false),IsHere(false){
	
}

bool Road::isVisited(){
	return visited;
}

void Road::setVisited(bool s){
	visited = s;
}

void Road::setIsHere(bool s){
	IsHere = s;
}

void Road::render(){
	if(visited){
		cout << "-";
	}else{
		if(!IsHere){
			cout << " ";
		}else{
			cout << "@";
		}
	}
}