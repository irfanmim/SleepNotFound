#include "omnivore.h"

int Omnivore::n_omnivore = 0;

float Omnivore::total_ofood = 0;

float Omnivore :: GetFood() const {
  return ofood;
}

Omnivore :: Omnivore(int weight) : Herbivore(factor * weight), Carnivore(factor * weight) {
  ofood = hfood + cfood;
  n_omnivore++;
  total_ofood += ofood;
}