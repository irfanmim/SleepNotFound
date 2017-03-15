#include "exit.h"
#include <iostream>
using namespace std;

Exit::Exit(int x,int y):Road(x,y) {
  
}

void Exit::Render() {
  cout << "(";
}