#include "water_habitat.h"
#include <iostream>
using namespace std;

WaterHabitat::WaterHabitat(int x,int y,bool s):Habitat(x,y,s) {
  hab_code = 2;
}

void WaterHabitat::Render() {
  if (IsInCage) {
    cout << "W";
  } else {
    cout << "w";
  }
}
