#include "carnivore.h"

int Carnivore::n_carnivore = 0;

float Carnivore::total_cfood = 0;

Carnivore :: Carnivore(int weight) : cfood(weight * factor) {
  n_carnivore++;
  total_cfood += cfood;
}

float Carnivore :: GetFood() const {
  return cfood;
}
