#include "Facility.h"
#include <iostream>
using namespace std;

Facility::Facility(int x,int y) : loc(x, y){
	
	
}

Restaurant::Restaurant(int x,int y) : loc(x, y){
	
		
}
	
void Restaurant::render(){
	cout << "S";
}

Park::Park(int x,int y) : loc(x, y){
	
		
}
	
void Park::render(){
	cout << "P";
}

Road::Road(int x,int y): loc(x, y), visited(false){
	
}

bool Road::isVisited(){
	return visited;
}

void Road::setVisited(bool s){
	visited = s;
}


void Road::render(){
	if(visited){
		cout << "-";
	}else{
		cout << " ";
	}
}
Entrance::Entrance(int x,int y) : loc(x, y){
	
	
}

void Entrance::render(){
	cout << "E";
}

Exit::Exit(int x,int y) : loc(x, y){
	
	
}

void Exit::render(){
	cout << "B";
}