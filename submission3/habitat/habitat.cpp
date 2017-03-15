#include "habitat.h"

Habitat::Habitat(int x,int y,bool s):Cell(x,y),a(NULL),is_in_cage(s) {

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
  return is_in_cage;
}

void Habitat::SetCageStatus(bool s) {
  is_in_cage = s;
}

int Habitat::GetHabCode() const{
  return hab_code;
}
