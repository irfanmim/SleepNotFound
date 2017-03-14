#include "air_habitat.h"
#include <iostream>
using namespace std;

air_habitat::air_habitat(int x,int y,bool s):Habitat(x,y,s) {

}

void air_habitat::Render() {
  if (IsInCage) {
    cout << "A";
  } else {
    cout << "a";
  }
}
