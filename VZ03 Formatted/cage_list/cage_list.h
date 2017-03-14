#ifndef CAGE_LIST_H
#define CAGE_LIST_H
#include "../cage/cage.h"
#include <vector>

class cage_list{
public:
  void AddCage(Cage c);
  Cage& GetCage(int i);
  int GetSize();
  int SearchByCoor(int x,int y);
  bool IsOverlap(const Cage& c);
private:
  vector<Cage> cage_list;
};

#endif