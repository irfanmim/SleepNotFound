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

Zoo::Zoo(ifstream& infile) {
  string s;
  getline(infile,s);
  if (s!="#Zoo") {throw 1;}
  GetRowCol(height,width,infile);
  member = new Cell**[height];
  for(int i = 0;i < height;i++) {
    member[i] = new Cell*[width];
  }

  Initialize(height,width,infile);
}

Cell * Zoo::GetMember(int i,int j) {
  return member[i][j];
}

void Zoo::setMember(int i,int j,Cell * c) {
  member[i][j] = c;
}

void Zoo::Initialize(int row,int col,ifstream& infile) {
  char ** c = ParseZoo(row,col,infile);
  for(int i = 0;i < row;i++) {
    for(int j = 0;j < col;j++) {
      switch(c[i][j]) {
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
  for(int i = 0;i < row;i++) {
    delete [] c[i];
  }
  delete [] c;
}

Habitat ** Zoo::ParseCage(int& nh,ifstream& infile) {
  string temp;
  int x,y,w;
  char an;
  GetNum(nh,infile);
  Habitat ** h = new Habitat*[nh];
  int i = 0;
  while(getline(infile,temp) && temp!="#") {
    if (i >= nh) {throw 1;}
    GetEntry(temp,x,y,w,an);
    h[i] = (Habitat *)member[x][y];
    h[i]->SetCageStatus(true);
    h[i]->ResetAnimal();
    switch(an) {
      case 'b': h[i]->SetAnimal(new Bat(x,y,w));break;
      case 'c': h[i]->SetAnimal(new Cendrawasih(x,y,w));break;
      case 'e': h[i]->SetAnimal(new Eagle(x,y,w));break;
      case 'k': h[i]->SetAnimal(new Kolibri(x,y,w));break;
      case 'h': h[i]->SetAnimal(new Cheetah(x,y,w));break;
      case 'm': h[i]->SetAnimal(new Chimpanzee(x,y,w));break;
      case 'a': h[i]->SetAnimal(new Coala(x,y,w));break;
      case 'g': h[i]->SetAnimal(new Gorilla(x,y,w));break;
      case 'y': h[i]->SetAnimal(new Hyena(x,y,w));break;
      case 'n': h[i]->SetAnimal(new Kangaroo(x,y,w));break;
      case 'd': h[i]->SetAnimal(new Komodo(x,y,w));break;
      case 'i': h[i]->SetAnimal(new Lion(x,y,w));break;
      case 'r': h[i]->SetAnimal(new Orangutan(x,y,w));break;
      case 's': h[i]->SetAnimal(new Ostrich(x,y,w));break;
      case 'p': h[i]->SetAnimal(new Panda(x,y,w));break;
      case '&': h[i]->SetAnimal(new Peacock(x,y,w));break;
      case 't': h[i]->SetAnimal(new Tiger(x,y,w));break;
      case 'O': h[i]->SetAnimal(new Dolphin(x,y,w));break;
      case 'M': h[i]->SetAnimal(new Mantaray(x,y,w));break;
      case 'S': h[i]->SetAnimal(new Shark(x,y,w));break;
      case 'Q': h[i]->SetAnimal(new Whale(x,y,w));break;
      case '?': h[i]->SetAnimal(new Frog(x,y,w));break;
    }
    i++;
  }
  return h;
}

void Zoo::InitializeCage(ifstream& infile) {
  string s;
  getline(infile,s);
  if (s!="#Cage") {throw 1;}
  int nh;
  getline(infile,s);
  while(s=="#Entry") {
    Habitat ** h = ParseCage(nh,infile);
    Cage c(h,nh);
    c.Validate();
    if (cl.IsOverlap(c)) {throw 8;}
    cl.AddCage(c);
    getline(infile,s);
  }
}

bool Zoo::isInPath(int x,int y) {
  bool found = false;
  int i = 0;
  while(i < path.size() && !found) {
    if (path[i]->GetX()==x && path[i]->GetY()==y) {
      found = true;
    } else {
      i++;
    }
  }
  return found;
}

void Zoo::Tour() {
  int n = rand() % ent.size();
  Road * p = ent[n];
  while(p != getExit()) {
    cout << endl;
    p -> SetIsHere(true);
    ShowByEdge(0,height-1,0,width-1);
    p -> SetIsHere(false);
    p -> SetVisited(true);
    vector<Road *> cand;
    int x = p->GetX();int y = p->GetY();
    if (isInPath(x-1,y)) {
      if (((Road *)member[x-1][y])->IsVisited()) {
      } else {
        cand.push_back((Road *)member[x-1][y]);
      }
    }
    if (isInPath(x+1,y)) {
      if (((Road *)member[x+1][y])->IsVisited()) {
      } else {
        cand.push_back((Road *)member[x+1][y]);
      }
    }
    if (isInPath(x,y-1)) {
      if (((Road *)member[x][y-1])->IsVisited()) {
      } else {
        cand.push_back((Road *)member[x][y-1]);
      }
    }
    if (isInPath(x,y+1)) {
      if (((Road *)member[x][y+1])->IsVisited()) {
      } else {
        cand.push_back((Road *)member[x][y+1]);
      }
    }
    if (cand.size()>0) {
      int a[4];
      a[0] = cl.SearchByCoor(x-1,y);
      a[1] = cl.SearchByCoor(x+1,y);
      a[2] = cl.SearchByCoor(x,y-1);
      a[3] = cl.SearchByCoor(x,y+1);
      for(int i = 0;i < 4;i++) {
        if (a[i]!=-1) {
          cl.GetCage(a[i]).WakeAllAnimal();
        }
      }
      n = rand() % cand.size();
      p = cand[n];
      //sleep(1.5);
    } else {
      break;
    }
  }
  ClearPath();
}

void Zoo::ShowByEdge(int a,int b,int c,int d) {

  cout << endl;
  cout << "+==================================+" << endl;
  cout << "      __ ___             ___ __  __ " << endl;
  cout << "\\  /||__) | /  \\ /\\ |     _//  \\/  \\" << endl;
  cout << " \\/ || \\  | \\__//--\\|__  /__\\__/\\__/" << endl << endl;
  cout << "+==================================+" << endl << endl;

  for(int i = a;i <= b;i++) {
    for(int j = c;j <= d;j++) {
      (member[i][j])->Render();
    }
    cout << endl;
  }
}

void Zoo::Show() {
  int a,b,c,d;
  cout << "Masukkan batas atas = ";cin >> a;
  cout << "Masukkan batas bawah = ";cin >> b;
  cout << "Masukkan batas kiri = ";cin >> c;
  cout << "Masukkan batas kanan = ";cin >> d;
  if (a<0 || b >= height || c < 0 || d >= width || b<a || d<c) {throw 4;}
  ShowByEdge(a,b,c,d);
}

Zoo::~Zoo() {
  for(int i = 0;i < height;i++) {
    delete [] member[i];
  }
  delete [] member;
}

Road * Zoo::getExit() {
  return ext;
}

int Zoo::GetHeight() const{
  return height;
}

int Zoo::GetWidth() const{
  return width;
}

void Zoo::ClearPath() {
  for(int i = 0;i < path.size();i++) {
    path[i]->SetVisited(false);
  }
}

void Zoo::ShowFood() {
  cout << "Jumlah daging " << Carnivore::total_cfood << " kg" << endl;  
  cout << "Jumlah tumbuhan " << Herbivore::total_hfood << " kg" << endl;  
}

void Zoo::MoveAnimal() {
  for(int i = 0;i < cl.GetSize();i++) {
    vector<Habitat *> an;
    for(int j = 0;j < cl.GetCage(i).GetNH();j++) {
      if (cl.GetCage(i).GetHabitat(j)->GetAnimal()!=NULL) {
        an.push_back(cl.GetCage(i).GetHabitat(j));
      }
    }
    vector<Habitat *> dest;
    for(int j = 0;j < an.size();j++) {
      int n;
      vector<Habitat *> cand;
      int x = an[j]->GetX();int y = an[j]->GetY();
      if (cl.GetCage(i).IsCoorInCage(x-1,y)) {
        if (((Habitat *)member[x-1][y])->GetAnimal()==NULL) {
          cand.push_back((Habitat *)member[x-1][y]);
        }
      }
      if (cl.GetCage(i).IsCoorInCage(x+1,y)) {
        if (((Habitat *)member[x+1][y])->GetAnimal()==NULL) {
          cand.push_back((Habitat *)member[x+1][y]);
        }
      }
      if (cl.GetCage(i).IsCoorInCage(x,y-1)) {
        if (((Habitat *)member[x][y-1])->GetAnimal()==NULL) {
          cand.push_back((Habitat *)member[x][y-1]);
        }
      }
      if (cl.GetCage(i).IsCoorInCage(x,y+1)) {
        if (((Habitat *)member[x][y+1])->GetAnimal()==NULL) {
          cand.push_back((Habitat *)member[x][y+1]);
        }
      }
      if (cand.size()>0) {
        int n =rand() % cand.size();
        if (SearchInVector(dest,cand[n])) {
          dest.push_back(NULL);
        } else {
          dest.push_back(cand[n]);
        }
      } else {
        dest.push_back(NULL);
      }
    }
    for(int j = 0;j < an.size();j++) {
      if (dest[j]!=NULL) {
        int x = dest[j]->GetX();int y = dest[j]->GetY();
        int z = cl.GetCage(i).GetHabByCoor(x,y);
        if (z!=-1) {
          cl.GetCage(i).GetHabitat(z)->SetAnimal(an[j]->GetAnimal());
        }
        ((Habitat *)member[x][y])->SetAnimal(an[j]->GetAnimal());
        x = an[j]->GetX();y = an[j]->GetY();
        z = cl.GetCage(i).GetHabByCoor(x,y);
        if (z!=-1) {
          cl.GetCage(i).GetHabitat(z)->SetAnimal(NULL);
        }
        ((Habitat *)member[x][y])->SetAnimal(NULL);
      }
    }
  }
}

void Zoo::Animate() {
  ShowByEdge(0,height-1,0,width-1);
  for(int i = 0;i < 10;i++) {
    cout << endl;
    MoveAnimal();
    ShowByEdge(0,height-1,0,width-1);
    //sleep(1.5);
  }
}

bool SearchInVector(const vector<Habitat *>& v,Habitat * h) {
  bool found = false;
  int i = 0;
  while(i < v.size() && !found) {
    if (h == v[i]) {
      found = true;
    } else {
      i++;
    }
  } 
  return found;
}
