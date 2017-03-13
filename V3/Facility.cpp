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

Road::Road(int x,int y):Facility(x,y){
	n = NULL;
}

void Road::setNext(Road * ne){
	n = ne;
}

Road * Road::next(){
	return n;
}

void Road::render(){
	cout << " ";
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