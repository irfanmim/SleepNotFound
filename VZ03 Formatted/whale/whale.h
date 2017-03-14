#ifndef WHALE_H
#define WHALE_H
#include "../water_animal/water_animal.h"
#include "../carnivore/carnivore.h"
#include "../mammal/mammal.h"

/** @class Whale
  * Real class whale
  */
class Whale : public WaterAnimal, public Carnivore, public Mammal {
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * @param weight berat badan
    * Konstruktor kelas whale
    */
  Whale(int x, int y, int weight);
  /** @brief Method interaksi whale
    */
  void Interact();
  void RenderAnimal();
};

#endif