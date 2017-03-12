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

void Zoo::initialize(char ** c,int row,int col){
	for(int i = 0;i < row;i++){
		for(int j = 0;j < col;j++){
			switch(c[i][j]){
				case 'S': member[i][j] = new Restaurant(i,j);break;
				case 'R': member[i][j] = new Road(i,j);break;
				case 'P': member[i][j] = new Park(i,j);break;
				case 'E': member[i][j] = new Entrance(i,j);break;
				case 'B': member[i][j] = new Exit(i,j);break;
				case 'A': member[i][j] = new AirHabitat(i,j);break;
				case 'W': member[i][j] = new WaterHabitat(i,j);break;
				case 'L': member[i][j] = new LandHabitat(i,j);break;
				default: member[i][j] = new Cell(i,j);break;
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