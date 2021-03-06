#include "zoo.h"
#include "../cell/cell.h"
#include "../parse/parse.h"
#include "../restaurant/restaurant.h"
#include "../road/road.h"
#include "../park/park.h"
#include "../entrance/entrance.h"
#include "../exit/exit.h"
#include "../habitat/habitat.h"
#include "../air_habitat/air_habitat.h"
#include "../water_habitat/water_habitat.h"
#include "../land_habitat/land_habitat.h"
#include "../bat/bat.h"
#include "../cendrawasih/cendrawasih.h"
#include "../kolibri/kolibri.h"
#include "../eagle/eagle.h"
#include "../cheetah/cheetah.h"
#include "../chimpanzee/chimpanzee.h"
#include "../coala/coala.h"
#include "../gorilla/gorilla.h"
#include "../hyena/hyena.h"
#include "../kangaroo/kangaroo.h"
#include "../komodo/komodo.h"
#include "../lion/lion.h"
#include "../orangutan/orangutan.h"
#include "../ostrich/ostrich.h"
#include "../panda/panda.h"
#include "../peacock/peacock.h"
#include "../tiger/tiger.h"
#include "../dolphin/dolphin.h"
#include "../mantaray/mantaray.h"
#include "../shark/shark.h"
#include "../whale/whale.h"
#include "../frog/frog.h"
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
		if(i >= nh){throw 1;}
		getEntry(temp,x,y,w,an);
		h[i] = (Habitat *)member[x][y];
		h[i]->setCageStatus(true);
		h[i]->resetAnimal();
		switch(an){
			case 'b': h[i]->setAnimal(new Bat(x,y,w));break;
			case 'c': h[i]->setAnimal(new Cendrawasih(x,y,w));break;
			case 'e': h[i]->setAnimal(new Eagle(x,y,w));break;
			case 'k': h[i]->setAnimal(new Kolibri(x,y,w));break;
			case 'h': h[i]->setAnimal(new Cheetah(x,y,w));break;
			case 'm': h[i]->setAnimal(new Chimpanzee(x,y,w));break;
			case 'a': h[i]->setAnimal(new Coala(x,y,w));break;
			case 'g': h[i]->setAnimal(new Gorilla(x,y,w));break;
			case 'y': h[i]->setAnimal(new Hyena(x,y,w));break;
			case 'n': h[i]->setAnimal(new Kangaroo(x,y,w));break;
			case 'd': h[i]->setAnimal(new Komodo(x,y,w));break;
			case 'i': h[i]->setAnimal(new Lion(x,y,w));break;
			case 'r': h[i]->setAnimal(new Orangutan(x,y,w));break;
			case 's': h[i]->setAnimal(new Ostrich(x,y,w));break;
			case 'p': h[i]->setAnimal(new Panda(x,y,w));break;
			case '&': h[i]->setAnimal(new Peacock(x,y,w));break;
			case 't': h[i]->setAnimal(new Tiger(x,y,w));break;
			case 'O': h[i]->setAnimal(new Dolphin(x,y,w));break;
			case 'M': h[i]->setAnimal(new Mantaray(x,y,w));break;
			case 'S': h[i]->setAnimal(new Shark(x,y,w));break;
			case 'Q': h[i]->setAnimal(new Whale(x,y,w));break;
			case '?': h[i]->setAnimal(new Frog(x,y,w));break;
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
		c.Validate();
		if(cl.IsOverlap(c)){throw 8;}
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
		ShowByEdge(0,height-1,0,width-1);
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

void Zoo::ShowByEdge(int a,int b,int c,int d){
	for(int i = a;i <= b;i++){
		for(int j = c;j <= d;j++){
			(member[i][j])->render();
		}
		cout << endl;
	}
}

void Zoo::show(){
	int a,b,c,d;
	cout << "Masukkan batas atas = ";cin >> a;
	cout << "Masukkan batas bawah = ";cin >> b;
	cout << "Masukkan batas kiri = ";cin >> c;
	cout << "Masukkan batas kanan = ";cin >> d;
	if(a<0 || b >= height || c < 0 || d >= width || b<a || d<c){throw 4;}
	ShowByEdge(a,b,c,d);
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

void Zoo::showFood(){
	cout << "Jumlah daging " << Carnivore::total_cFood << " kg" << endl;	
	cout << "Jumlah tumbuhan " << Herbivore::total_hFood << " kg" << endl;	
}

void Zoo::moveAnimal(){
	for(int i = 0;i < cl.getSize();i++){
		vector<Habitat *> an;
		for(int j = 0;j < cl.getCage(i).getNH();j++){
			if(cl.getCage(i).getHabitat(j)->getAnimal()!=NULL){
				an.push_back(cl.getCage(i).getHabitat(j));
			}
		}
		vector<Habitat *> dest;
		for(int j = 0;j < an.size();j++){
			int n;
			vector<Habitat *> cand;
			int x = an[j]->getX();int y = an[j]->getY();
			if(cl.getCage(i).isCoorInCage(x-1,y)){
				if(((Habitat *)member[x-1][y])->getAnimal()==NULL){
					cand.push_back((Habitat *)member[x-1][y]);
				}
			}
			if(cl.getCage(i).isCoorInCage(x+1,y)){
				if(((Habitat *)member[x+1][y])->getAnimal()==NULL){
					cand.push_back((Habitat *)member[x+1][y]);
				}
			}
			if(cl.getCage(i).isCoorInCage(x,y-1)){
				if(((Habitat *)member[x][y-1])->getAnimal()==NULL){
					cand.push_back((Habitat *)member[x][y-1]);
				}
			}
			if(cl.getCage(i).isCoorInCage(x,y+1)){
				if(((Habitat *)member[x][y+1])->getAnimal()==NULL){
					cand.push_back((Habitat *)member[x][y+1]);
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
					cl.getCage(i).getHabitat(z)->setAnimal(an[j]->getAnimal());
				}
				((Habitat *)member[x][y])->setAnimal(an[j]->getAnimal());
				x = an[j]->getX();y = an[j]->getY();
				z = cl.getCage(i).getHabByCoor(x,y);
				if(z!=-1){
					cl.getCage(i).getHabitat(z)->setAnimal(NULL);
				}
				((Habitat *)member[x][y])->setAnimal(NULL);
			}
		}
	}
}

void Zoo::animate(){
	ShowByEdge(0,height-1,0,width-1);
	for(int i = 0;i < 10;i++){
		system("clear");
		moveAnimal();
		ShowByEdge(0,height-1,0,width-1);
		sleep(1.5);
	}
}

bool searchInVector(const vector<Habitat *>& v,Habitat * h){
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
