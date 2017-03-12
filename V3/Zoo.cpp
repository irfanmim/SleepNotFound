#include "Zoo.h"
#include "Facility.h"
#include "Habitat.h"
#include <iostream>
using namespace std;

Zoo::Zoo():width(DEF_WIDTH),height(DEF_HEIGHT){
	member = new Cell**[height];
	for(int i = 0;i < height;i++){
		member[i] = new Cell*[width];
	}
}

Zoo::Zoo(int w,int h):width(w),height(h){
	member = new Cell**[height];
	for(int i = 0;i < height;i++){
		member[i] = new Cell*[width];
	}
}

Cell * Zoo::getMember(int i,int j){
	return member[i][j];
}

void Zoo::setMember(int i,int j,Cell * c){
	member[i][j] = c;
}

void Zoo::initialize(char ** c,int row,int col){
	for(int i = 0;i < row;i++){
		for(int j = 0;j < col;j++){
			switch(c[i][j]){
				case 'S': setMember(i,j,new Restaurant(i,j));break;
				case 'R': setMember(i,j,new Road(i,j));break;
				case 'P': setMember(i,j,new Park(i,j));break;
				case 'E': setMember(i,j,new Entrance(i,j));break;
				case 'B': setMember(i,j,new Exit(i,j));break;
				case 'a': setMember(i,j,new AirHabitat(i,j,false));break;
				case 'w': setMember(i,j,new WaterHabitat(i,j,false));break;
				case 'l': setMember(i,j,new LandHabitat(i,j,false));break;
				default: setMember(i,j,new Cell(i,j));break;
			}
		}
	}
}

void Zoo::show(){
	for(int i = 0;i < height;i++){
		for(int j = 0;j < width;j++){
			(member[i][j])->render();
		}
		cout << endl;
	}
}

Zoo::~Zoo(){
	for(int i = 0;i < height;i++){
		delete [] member[i];
	}
	delete [] member;
}