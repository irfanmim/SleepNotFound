#include "cage.h"
#include <iostream>
using namespace std;

Cage::Cage(Habitat ** hl,int n):nh(n) {
  h = new Habitat*[nh];
  na = 0;
  for (int i = 0;i < nh;i++) {
    h[i] = new Habitat(*(hl[i]));
    if (h[i]->GetAnimal()!=NULL) {
      na++;
    }
  }
}

Cage::Cage(const Cage& c) {
  nh = c.nh;
  h = new Habitat*[nh];
  na = 0;
  for (int i = 0;i < nh;i++) {
    h[i] = new Habitat(*(c.h[i]));
    if (h[i]->GetAnimal()!=NULL) {
      na++;
    }
  }
}

Cage::~Cage() {
  for (int i = 0;i < nh;i++) {
    h[i] = NULL;
  }
  delete [] h;
}

Cage& Cage::operator=(const Cage& c) {
  delete [] h;
  nh = c.nh;
  h = new Habitat*[nh];
  na = 0;
  for (int i = 0;i < nh;i++) {
    h[i] = new Habitat(*(c.h[i]));
    if (h[i]->GetAnimal()!=NULL) {
      na++;
    }
  }
  return *this;
}

bool Cage::IsCoorInCage(int x,int y) {
  bool found = false;
  int i = 0;
  while (i < nh && !found) {
    if ((h[i]->GetX()==x)&&(h[i]->GetY()==y)) {
      found = true;
    } else {
      i++;
    }
  }
  return found;
}

int Cage::GetNH() const{
  return nh;
}

void Cage::WakeAllAnimal() {
  for (int i = 0;i < nh;i++) {
    if (h[i]->GetAnimal()!=NULL) {
      h[i]->WakeAnimal();
    }
  }
}

Habitat * Cage::GetHabitat(int i) const {
  return h[i];
}

void Cage::Validate(){
  int x = h[0]->GetHabCode();
  int i = 1;
  while(i < nh){
    if(x != h[i]->GetHabCode()){
      throw 5;
    }else{
      i++;
    }
  }
  i = 0;
  while(i < nh){
    if(h[i]->GetAnimal()!=NULL){
      if(!(h[i]->GetAnimal()->IsHabMatch(x))){
        throw 6;
      }
    }
    i++;
  }
}