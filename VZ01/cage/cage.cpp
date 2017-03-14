#include "cage.h"


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
    if ((h[i]->getX()==x)&&(h[i]->getY()==y)) {
      found = true;
    } else {
      i++;
    }
  }
  return found;
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