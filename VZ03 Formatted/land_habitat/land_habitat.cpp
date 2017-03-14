#include "land_habitat.h"
#include <iostream>
using namespace std;

LandHabitat::LandHabitat(int x,int y,bool s):Habitat(x,y,s) {
  hab_code = 1;
}

void LandHabitat::Render() {
  if (is_in_cage) {
    if (a!=NULL) {
      a->RenderAnimal();
    } else {
      cout << "L";
    }
  } else {
    cout << "l";
  }
}