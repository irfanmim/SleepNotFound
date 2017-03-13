#include "Facility.h"
#include <iostream>
using namespace std;

Facility::Facility(int x,int y):Cell(x,y){

}

Restaurant::Restaurant(int x,int y):Facility(x,y){
	
}
	
void Restaurant::render(){
	cout << "S";
}

Park::Park(int x,int y):Facility(x,y){
	
}
	
void Park::render(){
	cout << "P";
}

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

Entrance::Entrance(int x,int y):Road(x,y){

}

void Entrance::render(){
	cout << "E";
}

Exit::Exit(int x,int y):Road(x,y){
	
}

void Exit::render(){
	cout << "B";
}