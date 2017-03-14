#include "cage.h"
#include <iostream>
#include <algorithm>

using namespace std;

Cage::Cage(Cell * hl,int n):nh(n){
  c = new Cell[nh];
  na = 0;
  for(int i = 0;i < nh;i++){
    c[i] = hl[i];
    if(c[i].IsAnimalExist()){
      na++;
    }
  }
  
}

Cage::Cage(const Cage& ca){
  nh = ca.nh;
  c = new Cell[nh];
  na = 0;
  for(int i = 0;i < nh;i++){
    c[i] = ca.c[i];
    if(c[i].IsAnimalExist()){
      na++;
    }
  }
}

Cage::~Cage(){
  delete [] c;
}

Cage& Cage::operator=(const Cage& ca){
  delete [] c;
  nh = ca.nh;
  c = new Cell[nh];
  na = 0;
  for(int i = 0;i < nh;i++){
    c[i] = ca.c[i];
    if(c[i].IsAnimalExist()){
      na++;
    }
  }
  return *this;
}

bool Cage::IsCoorInCage(int x,int y){
  bool found = false;
  int i = 0;
  while(i < nh && !found){
    if((c[i].GetLoc().GetX()==x)&&(c[i].GetLoc().GetY()==y)){
      found = true;
//      cout << "IsCoorInCage x, y, i : " << x << " " << y << " " << i << endl;
    }else{
      i++;
    }
  }
  return found;
}


void Cage::WakeAllAnimal(){
  for(int i = 0;i < nh;i++){
    if(c[i].IsAnimalExist()){
      c[i].WakeAnimal();
    }
  }
}

Cell * Cage::GetCells() const {
  return c;
}

int Cage::GetHabByCoor(int x,int y) const{
  bool found = false;
  int i = 0;
  while(i < nh && !found){
    if((c[i].GetX()==x)&&(c[i].GetY()==y)){
      found = true;
    }else{
      i++;
    }
  }
  if(found){
    return i;
  }else{
    return -1;
  }
}

int Cage::GetNH() const{
  return nh;
}

void Cage::MoveAllAnimal() {
  /*vector<Cell> temp;
  
  for (int i = 0; i < nh; i++) {
    temp.push_back(c[i]);
  }
  do{
    ;
  } while(std::next_permutation(temp.begin(), temp.end());
      
  for (int i = 0; i < nh; i++) {
    if (temp[i].IsAnimalExist()) {
      c[i].setAnimalExist(true);
      c[i].setAnimalchar(temp[i].getAnimalchar());
    }
    else {
      c[i].setAnimalExist(false);
    }
  } */
}
                
