#include "air_habitat.h"
#include <iostream>
using namespace std;

AirHabitat::AirHabitat(int x,int y,bool s):Habitat(x,y,s) {
  hab_code = 3;
}

void AirHabitat::Render() {
  if (is_in_cage) {
    if (a!=NULL) {
      a->RenderAnimal();
    } else {
      cout << "A";
    }
  } else {
    cout << "a";
  }
}