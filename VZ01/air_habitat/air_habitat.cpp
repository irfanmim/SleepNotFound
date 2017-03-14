#include "air_habitat.h"
#include <iostream>
using namespace std;

AirHabitat::AirHabitat(int x,int y,bool s):Habitat(x,y,s) {

}

void AirHabitat::Render() {
  if (IsInCage) {
    cout << "A";
  } else {
    cout << "a";
  }
}
