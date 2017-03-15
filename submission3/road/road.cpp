#include "road.h"
#include <iostream>
using namespace std;

Road::Road(int x,int y):Facility(x,y),visited(false),is_here(false) {
  
}

bool Road::IsVisited() {
  return visited;
}

void Road::SetVisited(bool s) {
  visited = s;
}

void Road::SetIsHere(bool s) {
  is_here = s;
}

void Road::Render() {
  if (visited) {
    cout << "-";
  } else {
    if (!is_here) {
      cout << " ";
    } else {
      cout << "@";
    }
  }
}