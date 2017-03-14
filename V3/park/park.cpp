#include "park.h"
#include <iostream>
using namespace std;

Park::Park(int x,int y):Facility(x,y){
	
}
	
void Park::render(){
	cout << "^";
}