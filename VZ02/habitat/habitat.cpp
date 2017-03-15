#include "habitat.h"
#include <iostream>
using namespace std;

Habitat::Habitat(int x,int y,bool s): is_in_cage(s){

}

bool Habitat::GetCageStatus() const{
  return is_in_cage;
}

void Habitat::SetCageStatus(bool s){
  is_in_cage = s;
}