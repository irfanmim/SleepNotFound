#include "herbivore.h"

int Herbivore::n_herbivore = 0;

float Herbivore::total_hfood = 0;

float Herbivore::GetFood() const {
  return hfood;
}

Herbivore::Herbivore(int weight) : hfood(weight * factor) {
  n_herbivore++;
  total_hfood += hfood;
}