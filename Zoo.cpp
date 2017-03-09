#include "Zoo.h"
#include <iostream>
using namespace std;

Zoo::Zoo():width(DEF_WIDTH),height(DEF_HEIGHT){
	member = new Cell**[height];
	for(int i = 0;i < height;i++){
		member[i] = new Cell*[height];
	}
}

Zoo::Zoo(int w,int h):width(w),height(h){
	member = new Cell**[height];
	for(int i = 0;i < height;i++){
		member[i] = new Cell*[height];
	}
}

void Zoo::initialize(){
	for(int i = 0;i < height;i++){
		for(int j = 0;j < height;j++){
			member[i][j] = new Road(i,j);
		}
	}
}

Zoo::~Zoo(){
	for(int i = 0;i < height;i++){
		delete [] member[i];
	}
	delete [] member;
}