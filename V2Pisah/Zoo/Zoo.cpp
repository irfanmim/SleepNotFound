#include "Zoo.h"
#include "Facility.h"
#include "Habitat.h"
//#include "FlyingAnimal.h"
//#include "LandAnimal.h"
//#include "WaterAnimal.h"
#include "parse.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
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
			setMember(i, j, new Cell(i, j));
				member[i][j]->setAtr(c[i][j]);
			if (c[i][j] == ')') {
				arrent.push_back(member[i][j]);
			}
			if (c[i][j] == 'R') {
				path.push_back(member[i][j]);
			}
			/*switch(c[i][j]){
				case '$': setMember(i,j,new Restaurant(i,j));break;
				case 'R': setMember(i,j,new Road(i,j));break;
				case '*': setMember(i,j,new Park(i,j));break;
				case ')': 
					setMember(i,j,new Entrance(i,j));
					arrent = member[i][j];break;
				case '(':
					setMember(i,j,new Exit(i,j));
					ext = member[i][j];break;
				case 'a': setMember(i,j,new AirHabitat(i,j,false));break;
				case 'w': setMember(i,j,new WaterHabitat(i,j,false));break;
				case 'l': setMember(i,j,new LandHabitat(i,j,false));break;
				default: setMember(i,j,new Cell(i,j));break;
			}*/
		}
	}
	for(int i = 0;i < row;i++){
		delete [] c[i];
	}
	delete [] c;
}

Cell * Zoo::parseCage(int& nh,ifstream& infile){
	string temp;
	int x,y,w;
	char an;
	getNum(nh,infile);
	Cell * h = new Cell[nh];
	int i = 0;
	while(getline(infile,temp) && temp!="#"){
		if(i >= nh){throw 1;}
		getEntry(temp,x,y,w,an);
		h[i] = *(member[x][y]);
		h[i].setHabitat();
		h[i].inCage();
		member[x][y]->setHabitat();
		member[x][y]->inCage();
		if ((an == 'b')|| (an == 'c') || (an == 'e') ||(an == 'k')||(an ==  'h')||(an ==  'm')||(an ==  'a')||(an ==  'g')||(an ==  'y')||(an ==  'n')||(an ==  'd')|(an == 'i')|| (an == 'r')||(an ==  's')||(an ==  'p')||(an ==  'P')||(an ==  't')||(an ==  'D')|| (an == 'M')|| (an == 'S')||(an ==  'W')) {
				h[i].setAnimalExist(); h[i].setAnimalchar(an);
				member[x][y]->setAnimalExist(); member[x][y]->setAnimalchar(an);
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
		Cell * h = parseCage(nh,infile);
//		for(int i = 0;i < nh;i++){
//			h[i].printCoor();
//			cout << h[i].getAnimalchar() << endl;
//		}
		Cage c(h,nh);
		cl.addCage(c);
		getline(infile,s);
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

Cell * Zoo::getExit(){
	return ext;
}

bool Zoo::isInPath(int x,int y){
	bool found = false;
	int i = 0;
	while(i < path.size() && !found){
		if(path[i]->getLoc().getX()==x && path[i]->getLoc().getY()==y){
			found = true;
		}else{
			i++;
		}
	}
	return found;
}


void Zoo::tour(){
	int n = rand() % arrent.size();
	Cell * p = arrent[n];
	
	while(p != getExit()){
		system("clear");
		show();
		p -> setVisited(true);
		vector<Cell *> cand;
		if(isInPath(p->getLoc().getX()-1,p->getLoc().getY())){
			if((member[p->getLoc().getX()-1][p->getLoc().getY()])->isVisited()){
			}else{
				cand.push_back(member[p->getLoc().getX()-1][p->getLoc().getY()]);
			}
		}
		if(isInPath(p->getLoc().getX()+1,p->getLoc().getY())){
			if((member[p->getLoc().getX()+1][p->getLoc().getY()])->isVisited()){
			}else{
				cand.push_back(member[p->getLoc().getX()+1][p->getLoc().getY()]);
			}
		}
		if(isInPath(p->getLoc().getX(),p->getLoc().getY()-1)){
			if((member[p->getLoc().getX()][p->getLoc().getY()-1])->isVisited()){
			}else{
				cand.push_back(member[p->getLoc().getX()][p->getLoc().getY()-1]);
			}
		}
		if(isInPath(p->getLoc().getX(),p->getLoc().getY()+1)){
			if((member[p->getLoc().getX()][p->getLoc().getY()+1])->isVisited()){
			}else{
				cand.push_back(member[p->getLoc().getX()][p->getLoc().getY()+1]);
			}
		}
		//cout << cand.size() << endl;
		if(cand.size()>0){
			int a[4];
			a[0] = cl.searchByCoor(p->getLoc().getX()-1,p->getLoc().getY());
			a[1] = cl.searchByCoor(p->getLoc().getX()+1,p->getLoc().getY());
			a[2] = cl.searchByCoor(p->getLoc().getX(),p->getLoc().getY()-1);
			a[3] = cl.searchByCoor(p->getLoc().getX(),p->getLoc().getY()+1);
			for(int i = 0;i < 4;i++){
				if(a[i]!=-1){
					//cout << cl.getCage(i).getCells()[0].isAnimalExist() << " " << cl.getCage(i).getCells()[2].isAnimalExist() << endl;
					//cout << "Tour x, y, i " << x << " " << y << " " << i << endl;
					cl.getCage(a[i]).wakeAllAnimal();
				}
			}
			n = rand() % cand.size();
			p = cand[n];
			usleep(1000000);
		}else{
			break;
		}
	}
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

void Zoo::animate(){
	show();
	for(int i = 0;i < 10;i++){
		system("clear");
		moveAnimal();
		show();
		sleep(1.5);
	}
}


void Zoo::moveAnimal(){
	for(int i = 0;i < cl.getSize();i++){
		vector<Cell *> an;
		for(int j = 0;j < cl.getCage(i).getNH();j++){
			if(cl.getCage(i).getCell(j)->isAnimalExist()==true){
				an.push_back(cl.getCage(i).getCell(j));
			}
		}
		vector<Cell *> dest;
		for(int j = 0;j < an.size();j++){
			int n;
			vector<Cell *> cand;
			int x = an[j]->getX();int y = an[j]->getY();
			if(cl.getCage(i).isCoorInCage(x-1,y)){
				if(((Cell *)member[x-1][y])->isAnimalExist()==false){
					cand.push_back((Cell *)member[x-1][y]);
				}
			}
			if(cl.getCage(i).isCoorInCage(x+1,y)){
				if(((Cell *)member[x+1][y])->isAnimalExist()==false){
					cand.push_back((Cell *)member[x+1][y]);
				}
			}
			if(cl.getCage(i).isCoorInCage(x,y-1)){
				if(((Cell *)member[x][y-1])->isAnimalExist()==false){
					cand.push_back((Cell *)member[x][y-1]);
				}
			}
			if(cl.getCage(i).isCoorInCage(x,y+1)){
				if(((Cell *)member[x][y+1])->isAnimalExist()==false){
					cand.push_back((Cell *)member[x][y+1]);
				}
			}
			if(cand.size()>0){
				int n =rand() % cand.size();
				if(searchInVector(dest,cand[n])){
					dest.push_back(NULL);
				}else{
					dest.push_back(cand[n]);
				}
			}else{
				dest.push_back(NULL);
			}
		}
		for(int j = 0;j < an.size();j++){
			if(dest[j]!=NULL){
				int x = dest[j]->getX();int y = dest[j]->getY();
				int z = cl.getCage(i).getHabByCoor(x,y);
				if(z!=-1){
					cl.getCage(i).getCell(z)->setAnimalchar(an[j]->getAnimalchar());
				}
				((Cell *)member[x][y])->setAnimalchar(an[j]->getAnimalchar());
				x = an[j]->getX();y = an[j]->getY();
				z = cl.getCage(i).getHabByCoor(x,y);
				if(z!=-1){
					cl.getCage(i).getCell(z)->setAnimalchar(NULL);
				}
				((Cell *)member[x][y])->setAnimalchar(NULL);
			}
		}
	}
}

bool searchInVector(const vector<Cell *>& v,Cell * h){
	bool found = false;
	int i = 0;
	while(i < v.size() && !found){
		if(h == v[i]){
			found = true;
		}else{
			i++;
		}
	} 
	return found;
}
