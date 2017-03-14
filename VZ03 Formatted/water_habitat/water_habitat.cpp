#include "water_habitat.h"
#include <iostream>
using namespace std;

WaterHabitat::WaterHabitat(int x,int y,bool s):Habitat(x,y,s) {
  hab_code = 2;
}

void WaterHabitat::Render() {
  if (is_in_cage) {
    if (a!=NULL) {
      a->RenderAnimal();
    } else {
      cout << "W";
    }
  } else {
    cout << "w";
  }
}