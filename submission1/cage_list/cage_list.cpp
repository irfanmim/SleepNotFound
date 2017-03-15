#include "cage_list.h"
#include <iostream>
using namespace std;

void CageList::AddCage(Cage c) {
  cage_list.push_back(c);
}

Cage& CageList::GetCage(int i) {
  return cage_list[i];
}

int CageList::GetSize() {
  return cage_list.size();
}

int CageList::SearchByCoor(int x,int y) {
  int i = 0;
  bool found = false;
  while (i < cage_list.size() && !found) {
    found = cage_list[i].IsCoorInCage(x,y);
    if (!found) {
      i++;
    }
  }
  return (found)?i:-1;
}

bool CageList::IsOverlap(const Cage& c){
  int x = c.GetHabitat(0)->GetX();
  int y = c.GetHabitat(0)->GetY();
  int i = 1;bool overlap = false;
  while(i < c.GetNH() && !overlap){
    if(SearchByCoor(x,y)!=-1){
      overlap = true;
    }else{
      x = c.GetHabitat(i)->GetX();
      y = c.GetHabitat(i)->GetY();
      i++;
    }
  }
  return overlap;
}