#ifndef WHALE_H
#define WHALE_H
#include "../water_animal/water_animal.h"
#include "../mammal/mammal.h"

/** @class Whale
  * Real class whale
  */
class Whale : public WaterAnimal, public Mammal {
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * Konstruktor kelas whale
    */
  Whale(int x, int y);
  /** @brief Method interaksi whale
    */
  void Interact();
};

#endif
