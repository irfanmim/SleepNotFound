#include "zoo.h"
#include "../parse/parse.h"
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
	GetRowCol(height,width,infile);
	member = new Cell**[height];
	for(int i = 0;i < height;i++){
		member[i] = new Cell*[width];
	}

	Initialize(height,width,infile);
}

Cell * Zoo::GetMember(int i,int j){
	return member[i][j];
}

void Zoo::SetMember(int i,int j,Cell * c){
	member[i][j] = c;
}

void Zoo::Initialize(int row,int col,ifstream& infile){
	char ** c = ParseZoo(row,col,infile);
	for(int i = 0;i < row;i++){
		for(int j = 0;j < col;j++){
			SetMember(i, j, new Cell(i, j));
				member[i][j]->SetAtr(c[i][j]);
			if (c[i][j] == ')') {
				arrent.push_back(member[i][j]);
			}
			if (c[i][j] == 'R') {
				path.push_back(member[i][j]);
			}
		}
	}
	for(int i = 0;i < row;i++){
		delete [] c[i];
	}
	delete [] c;
}

Cell * Zoo::ParseCage(int& nh,ifstream& infile){
	string temp;
	int x,y,w;
	char an;
	GetNum(nh,infile);
	Cell * h = new Cell[nh];
	int i = 0;
	while(getline(infile,temp) && temp!="#"){
		//if(i >= nh){throw 1;}
		GetEntry(temp,x,y,w,an);
		h[i] = *(member[x][y]);
		h[i].SetHabitat();
		h[i].InCage();
		member[x][y]->SetHabitat();
		member[x][y]->InCage();
		if ((an == 'b')|| (an == 'c') || (an == 'e') ||(an == 'k')||(an ==  'h')||(an ==  'm')||(an ==  'a')||(an ==  'g')||(an ==  'y')||(an ==  'n')||(an ==  'd')|(an == 'i')|| (an == 'r')||(an ==  's')||(an ==  'p')||(an ==  'P')||(an ==  't')||(an ==  'D')|| (an == 'M')|| (an == 'S')||(an ==  'W')) {
				h[i].SetAnimalExist(true); h[i].SetAnimalChar(an);
				member[x][y]->SetAnimalExist(true); member[x][y]->SetAnimalChar(an);
		}
		i++;
	}
	return h;
}

void Zoo::InitializeCage(ifstream& infile){
	string s;
	getline(infile,s);
	if(s!="#Cage"){throw 1;}
	int nh;
	getline(infile,s);
	while(s=="#Entry"){
		Cell * h = ParseCage(nh,infile);
//		for(int i = 0;i < nh;i++){
//			h[i].printCoor();
//			cout << h[i].GetAnimalChar() << endl;
//		}
		Cage c(h,nh);
		cl.AddCage(c);
		getline(infile,s);
	}
}

void Zoo::Show(){
  cout << endl;
  cout << "+==================================+" << endl;
  cout << "      __ ___             ___ __  __ " << endl;
  cout << "\\  /||__) | /  \\ /\\ |     _//  \\/  \\" << endl;
  cout << " \\/ || \\  | \\__//--\\|__  /__\\__/\\__/" << endl << endl;
  cout << "+==================================+" << endl << endl;
	for(int i = 0;i < height;i++){
		for(int j = 0;j < width;j++){
			(member[i][j])->Render();
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

Cell * Zoo::GetExit(){
	return ext;
}

bool Zoo::IsInPath(int x,int y){
	bool found = false;
	int i = 0;
	while(i < path.size() && !found){
		if(path[i]->GetLoc().GetX()==x && path[i]->GetLoc().GetY()==y){
			found = true;
		}else{
			i++;
		}
	}
	return found;
}


void Zoo::Tour(){
	int n = rand() % arrent.size();
	Cell * p = arrent[n];
	
	while(p != GetExit()){
		cout << endl;
		Show();
		p -> SetVisited(true);
		vector<Cell *> cand;
		if(IsInPath(p->GetLoc().GetX()-1,p->GetLoc().GetY())){
			if((member[p->GetLoc().GetX()-1][p->GetLoc().GetY()])->IsVisited()){
			}else{
				cand.push_back(member[p->GetLoc().GetX()-1][p->GetLoc().GetY()]);
			}
		}
		if(IsInPath(p->GetLoc().GetX()+1,p->GetLoc().GetY())){
			if((member[p->GetLoc().GetX()+1][p->GetLoc().GetY()])->IsVisited()){
			}else{
				cand.push_back(member[p->GetLoc().GetX()+1][p->GetLoc().GetY()]);
			}
		}
		if(IsInPath(p->GetLoc().GetX(),p->GetLoc().GetY()-1)){
			if((member[p->GetLoc().GetX()][p->GetLoc().GetY()-1])->IsVisited()){
			}else{
				cand.push_back(member[p->GetLoc().GetX()][p->GetLoc().GetY()-1]);
			}
		}
		if(IsInPath(p->GetLoc().GetX(),p->GetLoc().GetY()+1)){
			if((member[p->GetLoc().GetX()][p->GetLoc().GetY()+1])->IsVisited()){
			}else{
				cand.push_back(member[p->GetLoc().GetX()][p->GetLoc().GetY()+1]);
			}
		}
		//cout << cand.size() << endl;
		if(cand.size()>0){
			int a[4];
			a[0] = cl.SearchByCoor(p->GetLoc().GetX()-1,p->GetLoc().GetY());
			a[1] = cl.SearchByCoor(p->GetLoc().GetX()+1,p->GetLoc().GetY());
			a[2] = cl.SearchByCoor(p->GetLoc().GetX(),p->GetLoc().GetY()-1);
			a[3] = cl.SearchByCoor(p->GetLoc().GetX(),p->GetLoc().GetY()+1);
			for(int i = 0;i < 4;i++){
				if(a[i]!=-1){
					cl.GetCage(a[i]).WakeAllAnimal();
				}
			}
			n = rand() % cand.size();
			p = cand[n];
			//usleep(1000000);
		}else{
			break;
		}
	}
}

int Zoo::GetHeight() const{
	return height;
}

int Zoo::GetWidth() const{
	return width;
}

void Zoo::ClearPath(){
	for(int i = 0;i < path.size();i++){
		path[i]->SetVisited(false);
	}
}

void Zoo::MoveAnimal(){
	for(int i = 0;i < cl.GetSize();i++){
		vector<Cell *> an;
		for(int j = 0;j < cl.GetCage(i).GetNH();j++){
			if(cl.GetCage(i).GetCells()[j].IsAnimalExist()==true){
				an.push_back(cl.GetCage(i).GetCells());
			}
		}
		vector<Cell *> dest;
		for(int j = 0;j < an.size();j++){
			int n;
			vector<Cell *> cand;
			int x = an[j]->GetX();int y = an[j]->GetY();
			if(cl.GetCage(i).IsCoorInCage(x-1,y)){
				if(((Cell *)member[x-1][y])->IsAnimalExist()==false){
					cand.push_back((Cell *)member[x-1][y]);
				}
			}
			if(cl.GetCage(i).IsCoorInCage(x+1,y)){
				if(((Cell *)member[x+1][y])->IsAnimalExist()==false){
					cand.push_back((Cell *)member[x+1][y]);
				}
			}
			if(cl.GetCage(i).IsCoorInCage(x,y-1)){
				if(((Cell *)member[x][y-1])->IsAnimalExist()==false){
					cand.push_back((Cell *)member[x][y-1]);
				}
			}
			if(cl.GetCage(i).IsCoorInCage(x,y+1)){
				if(((Cell *)member[x][y+1])->IsAnimalExist()==false){
					cand.push_back((Cell *)member[x][y+1]);
				}
			}
			if(cand.size()>0){
				int n =rand() % cand.size();
				if(SearchInVector(dest,cand[n])){
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
				int x = dest[j]->GetX();int y = dest[j]->GetY();
				int z = cl.GetCage(i).GetHabByCoor(x,y);
				if(z!=-1){
					cl.GetCage(i).GetCells()[z].SetAnimalExist(an[j]->IsAnimalExist());
					cl.GetCage(i).GetCells()[z].SetAnimalChar(an[j]->GetAnimalChar());
				}
				((Cell *)member[x][y])->SetAnimalExist(an[j]->IsAnimalExist());
				((Cell *)member[x][y])->SetAnimalChar(an[j]->GetAnimalChar());
				x = an[j]->GetX();y = an[j]->GetY();
				z = cl.GetCage(i).GetHabByCoor(x,y);
				if(z!=-1){
					cl.GetCage(i).GetCells()[z].SetAnimalExist(false);
				}
				((Cell *)member[x][y])->SetAnimalExist(false);
			}
		}
	} 
}

bool SearchInVector(const vector<Cell *>& v,Cell * h){
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
