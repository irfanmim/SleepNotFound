#include "Zoo.h"
#include "Facility.h"
#include "Habitat.h"
#include "FlyingAnimal.h"
#include "LandAnimal.h"
#include "WaterAnimal.h"
#include "parse.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <unistd.h>
using namespace std;

Zoo::Zoo(ifstream& infile){
	string s;
	getline(infile,s);
	if(s!="#Zoo"){throw 1;}
	getRowCol(height,width,infile);
	member = new Cell**[height];
	for(int i = 0;i < height;i++){
		member[i] = new Cell*[width];
	}

	initialize(height,width,infile);
}

Cell * Zoo::getMember(int i,int j){
	return member[i][j];
}

void Zoo::setMember(int i,int j,Cell * c){
	member[i][j] = c;
}

void Zoo::initialize(int row,int col,ifstream& infile){
	char ** c = parseZoo(row,col,infile);
	for(int i = 0;i < row;i++){
		for(int j = 0;j < col;j++){
			switch(c[i][j]){
				case '$': setMember(i,j,new Restaurant(i,j));break;
				case 'R': setMember(i,j,new Road(i,j));path.push_back((Road *)member[i][j]);break;
				case '*': setMember(i,j,new Park(i,j));break;
				case ')': 
					setMember(i,j,new Entrance(i,j));
					ent.push_back((Road *)member[i][j]);
					path.push_back((Road *)member[i][j]);break;
				case '(':
					setMember(i,j,new Exit(i,j));
					ext = (Road *)member[i][j];
					path.push_back((Road *)member[i][j]);break;
				case 'a': setMember(i,j,new AirHabitat(i,j,false));break;
				case 'w': setMember(i,j,new WaterHabitat(i,j,false));break;
				case 'l': setMember(i,j,new LandHabitat(i,j,false));break;
				default: setMember(i,j,new Cell(i,j));break;
			}
		}
	}
	for(int i = 0;i < row;i++){
		delete [] c[i];
	}
	delete [] c;
}

Habitat ** Zoo::parseCage(int& nh,ifstream& infile){
	string temp;
	int x,y,w;
	char an;
	getNum(nh,infile);
	Habitat ** h = new Habitat*[nh];
	int i = 0;
	while(getline(infile,temp) && temp!="#"){
		//if(i >= nh){throw 2;}
		getEntry(temp,x,y,w,an);
		h[i] = (Habitat *)member[x][y];
		h[i]->setCageStatus(true);
		h[i]->resetAnimal();
		switch(an){
			case 'b': h[i]->setAnimal(new Bat(x,y));break;
			case 'c': h[i]->setAnimal(new Cendrawasih(x,y));break;
			case 'e': h[i]->setAnimal(new Eagle(x,y));break;
			case 'k': h[i]->setAnimal(new Kolibri(x,y));break;
			case 'h': h[i]->setAnimal(new Cheetah(x,y));break;
			case 'm': h[i]->setAnimal(new Chimpanzee(x,y));break;
			case 'a': h[i]->setAnimal(new Coala(x,y));break;
			case 'g': h[i]->setAnimal(new Gorilla(x,y));break;
			case 'y': h[i]->setAnimal(new Hyena(x,y));break;
			case 'n': h[i]->setAnimal(new Kangaroo(x,y));break;
			case 'd': h[i]->setAnimal(new Komodo(x,y));break;
			case 'i': h[i]->setAnimal(new Lion(x,y));break;
			case 'r': h[i]->setAnimal(new Orangutan(x,y));break;
			case 's': h[i]->setAnimal(new Ostrich(x,y));break;
			case 'p': h[i]->setAnimal(new Panda(x,y));break;
			case '&': h[i]->setAnimal(new Peacock(x,y));break;
			case 't': h[i]->setAnimal(new Tiger(x,y));break;
			case 'O': h[i]->setAnimal(new Dolphin(x,y));break;
			case 'M': h[i]->setAnimal(new Mantaray(x,y));break;
			case 'S': h[i]->setAnimal(new Shark(x,y));break;
			case 'Q': h[i]->setAnimal(new Whale(x,y));break;
		}
		i++;
	}
	return h;
}

void Zoo::initializeCage(ifstream& infile){
	string s;
	getline(infile,s);
	if(s!="#Cage"){throw 1;}
	int nh;
	getline(infile,s);
	while(s=="#Entry"){
		Habitat ** h = parseCage(nh,infile);
		Cage c(h,nh);
		cl.addCage(c);
		getline(infile,s);
	}
}

bool Zoo::isInPath(int x,int y){
	bool found = false;
	int i = 0;
	while(i < path.size() && !found){
		if(path[i]->getX()==x && path[i]->getY()==y){
			found = true;
		}else{
			i++;
		}
	}
	return found;
}

void Zoo::tour(){
	int n = rand() % ent.size();
	Road * p = ent[n];
	while(p != getExit()){
		system("clear");
		p -> setIsHere(true);
		show();
		p -> setIsHere(false);
		p -> setVisited(true);
		vector<Road *> cand;
		int x = p->getX();int y = p->getY();
		if(isInPath(x-1,y)){
			if(((Road *)member[x-1][y])->isVisited()){
			}else{
				cand.push_back((Road *)member[x-1][y]);
			}
		}
		if(isInPath(x+1,y)){
			if(((Road *)member[x+1][y])->isVisited()){
			}else{
				cand.push_back((Road *)member[x+1][y]);
			}
		}
		if(isInPath(x,y-1)){
			if(((Road *)member[x][y-1])->isVisited()){
			}else{
				cand.push_back((Road *)member[x][y-1]);
			}
		}
		if(isInPath(x,y+1)){
			if(((Road *)member[x][y+1])->isVisited()){
			}else{
				cand.push_back((Road *)member[x][y+1]);
			}
		}
		if(cand.size()>0){
			int a[4];
			a[0] = cl.searchByCoor(x-1,y);
			a[1] = cl.searchByCoor(x+1,y);
			a[2] = cl.searchByCoor(x,y-1);
			a[3] = cl.searchByCoor(x,y+1);
			for(int i = 0;i < 4;i++){
				if(a[i]!=-1){
					cl.getCage(a[i]).wakeAllAnimal();
				}
			}
			n = rand() % cand.size();
			p = cand[n];
			sleep(1.5);
		}else{
			break;
		}
	}
	clearPath();
}

void Zoo::show(){
	system("clear");
	cout << "VIRTUAL ZOO" << endl << endl;
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

Road * Zoo::getExit(){
	return ext;
}

int Zoo::getHeight() const{
	return height;
}

int Zoo::getWidth() const{
	return width;
}

void Zoo::clearPath(){
	for(int i = 0;i < path.size();i++){
		path[i]->setVisited(false);
	}
}
