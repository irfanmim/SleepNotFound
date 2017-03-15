#ifndef SHARK_H
#define SHARK_H
#include "../water_animal/water_animal.h"
#include "../carnivore/carnivore.h"
#include "../pisces/pisces.h"

/** @class Shark
  * Real class shark
  */
class Shark : public WaterAnimal, public Carnivore, public Pisces{
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * @param weight berat badan
    * Konstruktor kelas shark
    */
  Shark(int x, int y, int weight);
  /** @brief Method interaksi shark
    */
  void Interact();
  /** @brief Method render shark
    */
  void RenderAnimal();
};

#endif