#include "restaurant.h"
#include <iostream>
using namespace std;

Restaurant::Restaurant(int x,int y):Facility(x,y) {
  
}
  
void Restaurant::Render() {
  cout << "$";
}
