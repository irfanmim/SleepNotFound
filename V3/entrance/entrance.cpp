#include "entrance.h"
#include <iostream>
using namespace std;

Entrance::Entrance(int x,int y):Road(x,y){

}

void Entrance::render(){
	cout << ")";
}