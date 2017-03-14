#include "habitat.h"
#include <iostream>
using namespace std;

Habitat::Habitat(int x,int y,bool s):Cell(x,y),a(NULL),IsInCage(s) {

}

Habitat::~Habitat() {
  delete a;
}


Animal * Habitat::GetAnimal() {
  return a;
}

void Habitat::SetAnimal(Animal * an) {
  a = an;
}

void Habitat::ResetAnimal() {
  a = NULL;
}

void Habitat::WakeAnimal() {
  a -> Interact();
}

bool Habitat::GetCageStatus() const{
  return IsInCage;
}

void Habitat::SetCageStatus(bool s) {
  IsInCage = s;
}

int Habitat::GetHabCode() const{
	return hab_code;
}