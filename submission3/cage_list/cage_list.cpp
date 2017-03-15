#include "cage_list.h"

void CageList::AddCage(Cage c) {
  CageList.push_back(c);
}

Cage& CageList::GetCage(int i) {
  return CageList[i];
}

int CageList::GetSize() {
  return CageList.size();
}

int CageList::SearchByCoor(int x,int y) {
  int i = 0;
  bool found = false;
  while(i < CageList.size() && !found) {
    found = CageList[i].IsCoorInCage(x,y);
    if (!found) {
      i++;
    }
  }
  return (found)?i:-1;
}

bool CageList::IsOverlap(const Cage& c) {
  int x = c.GetHabitat(0)->GetX();
  int y = c.GetHabitat(0)->GetY();
  int i = 1;bool overlap = false;
  while(i < c.GetNH() && !overlap) {
    if (SearchByCoor(x,y)!=-1) {
      overlap = true;
    } else {
      x = c.GetHabitat(i)->GetX();
      y = c.GetHabitat(i)->GetY();
      i++;
    }
  }
  return overlap;
}
