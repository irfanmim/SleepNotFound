#include "land_habitat.h"
#include <iostream>
using namespace std;

LandHabitat::LandHabitat(int x,int y,bool s):Habitat(x,y,s) {
  
}


void LandHabitat::Render() {
  if (IsInCage) {
    cout << "L";
  } else {
    cout << "l";
  }
}