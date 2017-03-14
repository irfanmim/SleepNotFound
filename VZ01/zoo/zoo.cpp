#include "Zoo.h"
#include "../facility/facility.h"
#include "../habitat/habitat.h"
#include "../flying_animal/flying_animal.h"
#include "../land_animal/land_animal.h"
#include "../water_animal/water_animal.h"
#include "../parse/parse.h"

#include "../air_habitat/air_habitat.h"
#include "../amphibi/amphibi.h"
#include "../animal/animal.h"
#include "../aves/aves.h"
#include "../Bat/Bat.h"
#include "../cage/cage.h"
#include "../cageList/cageList.h"
#include "../cell/cell.h"
#include "../cendrawasih/cendrawasih.h"
#include "../cheetah/cheetah.h"
#include "../chimpanzee/chimpanzee.h"
#include "../coala/coala.h"
#include "../dolphin/dolphin.h"
#include "../driver/driver.h"
#include "../eagle/eagle.h"
#include "../entrance/entrance.h"
#include "../exit/exit.h"
#include "../facility/facility.h"
#include "../flying_animal/flying_animal.h"
#include "../gorilla/gorilla.h"
#include "../habitat/habitat.h"
#include "../hyena/hyena.h"
#include "../kangaroo/kangaroo.h"
#include "../kolibri/kolibri.h"
#include "../komodo/komodo.h"
#include "../land_animal/land_animal.h"
#include "../landHabitat/landHabitat.h"
#include "../lion/lion.h"
#include "../mammal/mammal.h"
#include "../mantaray/mantaray.h"
#include "../orangutan/orangutan.h"
#include "../ostrich/ostrich.h"
#include "../panda/panda.h"
#include "../park/park.h"
#include "../parse/parse.h"
#include "../peacock/peacock.h"
#include "../pisces/pisces.h"
#include "../point/point.h"
#include "../reptile/reptile.h"
#include "../restaurant/restaurant.h"
#include "../road/road.h"
#include "../shark/shark.h"
#include "../tiger/tiger.h"
#include "../water_animal/water_animal.h"
#include "../water_habitat/water_habitat.h"
#include "../whale/whale.h"

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
  for (int i = 0;i < height;i++) {
    member[i] = new Cell*[width];
  }

  Initialize(height,width,infile);
}

Cell * Zoo::GetMember(int i,int j) {
  return member[i][j];
}

void Zoo::SetMember(int i,int j,Cell * c) {
  member[i][j] = c;
}

void Zoo::Initialize(int row,int col,ifstream& infile) {
  char ** c = ParseZoo(row,col,infile);
  for (int i = 0;i < row;i++) {
    for (int j = 0;j < col;j++) {
      switch(c[i][j]) {
        case '$': SetMember(i,j,new Restaurant(i,j));break;
        case 'R': SetMember(i,j,new Road(i,j));path.push_back((Road *)member[i][j]);break;
        case '*': SetMember(i,j,new Park(i,j));break;
        case ')': 
          SetMember(i,j,new Entrance(i,j));
          ent.push_back((Road *)member[i][j]);
          path.push_back((Road *)member[i][j]);break;
        case '(':
          SetMember(i,j,new Exit(i,j));
          ext = (Road *)member[i][j];
          path.push_back((Road *)member[i][j]);break;
        case 'a': SetMember(i,j,new Air_habitat(i,j,false));break;
        case 'w': SetMember(i,j,new Water_habitat(i,j,false));break;
        case 'l': SetMember(i,j,new LandHabitat(i,j,false));break;
        default: SetMember(i,j,new Cell(i,j));break;
      }
    }
  }
  for (int i = 0;i < row;i++) {
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
  while (getline(infile,temp) && temp!="#") {
    //if (i >= nh) {throw 2;}
    GetEntry(temp,x,y,w,an);
    h[i] = (Habitat *)member[x][y];
    h[i]->SetCageStatus(true);
    h[i]->ResetAnimal();
    switch(an) {
      case 'b': h[i]->SetAnimal(new Bat(x,y));break;
      case 'c': h[i]->SetAnimal(new Cendrawasih(x,y));break;
      case 'e': h[i]->SetAnimal(new Eagle(x,y));break;
      case 'k': h[i]->SetAnimal(new Kolibri(x,y));break;
      case 'h': h[i]->SetAnimal(new Cheetah(x,y));break;
      case 'm': h[i]->SetAnimal(new Chimpanzee(x,y));break;
      case 'a': h[i]->SetAnimal(new Coala(x,y));break;
      case 'g': h[i]->SetAnimal(new Gorilla(x,y));break;
      case 'y': h[i]->SetAnimal(new Hyena(x,y));break;
      case 'n': h[i]->SetAnimal(new Kangaroo(x,y));break;
      case 'd': h[i]->SetAnimal(new Komodo(x,y));break;
      case 'i': h[i]->SetAnimal(new Lion(x,y));break;
      case 'r': h[i]->SetAnimal(new Orangutan(x,y));break;
      case 's': h[i]->SetAnimal(new Ostrich(x,y));break;
      case 'p': h[i]->SetAnimal(new Panda(x,y));break;
      case '&': h[i]->SetAnimal(new Peacock(x,y));break;
      case 't': h[i]->SetAnimal(new Tiger(x,y));break;
      case 'O': h[i]->SetAnimal(new Dolphin(x,y));break;
      case 'M': h[i]->SetAnimal(new Mantaray(x,y));break;
      case 'S': h[i]->SetAnimal(new Shark(x,y));break;
      case 'Q': h[i]->SetAnimal(new Whale(x,y));break;
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
  while (s=="#Entry") {
    Habitat ** h = ParseCage(nh,infile);
    Cage c(h,nh);
    cl.addCage(c);
    getline(infile,s);
  }
}

bool Zoo::IsInPath(int x,int y) {
  bool found = false;
  int i = 0;
  while (i < path.size() && !found) {
    if (path[i]->getX()==x && path[i]->getY()==y) {
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
  while (p != ParseCage()) {
    //system("clear");
    p -> SetIsHere(true);
    Show();
    p -> SetIsHere(false);
    p -> SetVisited(true);
    vector<Road *> cand;
    int x = p->getX();int y = p->getY();
    if (IsInPath(x-1,y)) {
      if (((Road *)member[x-1][y])->IsVisited()) {
      } else {
        cand.push_back((Road *)member[x-1][y]);
      }
    }
    if (IsInPath(x+1,y)) {
      if (((Road *)member[x+1][y])->IsVisited()) {
      } else {
        cand.push_back((Road *)member[x+1][y]);
      }
    }
    if (IsInPath(x,y-1)) {
      if (((Road *)member[x][y-1])->IsVisited()) {
      } else {
        cand.push_back((Road *)member[x][y-1]);
      }
    }
    if (IsInPath(x,y+1)) {
      if (((Road *)member[x][y+1])->IsVisited()) {
      } else {
        cand.push_back((Road *)member[x][y+1]);
      }
    }
    if (cand.size()>0) {
      int a[4];
      a[0] = cl.searchByCoor(x-1,y);
      a[1] = cl.searchByCoor(x+1,y);
      a[2] = cl.searchByCoor(x,y-1);
      a[3] = cl.searchByCoor(x,y+1);
      for (int i = 0;i < 4;i++) {
        if (a[i]!=-1) {
          cl.getCage(a[i]).wakeAllAnimal();
        }
      }
      n = rand() % cand.size();
      p = cand[n];
      sleep(1.5);
    } else {
      break;
    }
  }
  ClearPath();
}

void Zoo::Show() {
  //system("clear");
cout << endl;
cout << "+==================================+" << endl;
cout << "      __ ___             ___ __  __ " << endl;
cout << "\\  /||__) | /  \\ /\\ |     _//  \\/  \\" << endl;
cout << " \\/ || \\  | \\__//--\\|__  /__\\__/\\__/" << endl << endl;
cout << "+==================================+" << endl << endl;

  for (int i = 0;i < height;i++) {
    for (int j = 0;j < width;j++) {
      (member[i][j])->Render();
    }
    cout << endl;
  }
}

Zoo::~Zoo() {
  for (int i = 0;i < height;i++) {
    delete [] member[i];
  }
  delete [] member;
}

Road * Zoo::ParseCage() {
  return ext;
}

int Zoo::GetHeight() const{
  return height;
}

int Zoo::GetWidth() const{
  return width;
}

void Zoo::ClearPath() {
  for (int i = 0;i < path.size();i++) {
    path[i]->SetVisited(false);
  }
}
