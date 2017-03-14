#include "water_habitat.h"
#include <iostream>
using namespace std;

water_habitat::water_habitat(int x,int y,bool s):Habitat(x,y,s) {

}

void water_habitat::Render() {
  if (IsInCage) {
    cout << "W";
  } else {
    cout << "w";
  }
}
