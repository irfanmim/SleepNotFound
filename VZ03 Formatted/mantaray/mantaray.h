#ifndef MANTARAY_H
#define MANTARAY_H
#include "../water_animal/water_animal.h"
#include "../carnivore/carnivore.h"
#include "../pisces/pisces.h"

/** @class Mantaray
  * Real class mantaray
  */
class Mantaray : public WaterAnimal, public Carnivore, public Pisces{
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * @param weight berat badan
    * Konstruktor kelas mantaray
    */
  Mantaray(int x, int y, int weight);
  /** @brief Method interaksi mantaray
    */
  void Interact();
  /** @brief Method render mantaray
    */
  void RenderAnimal();
};

#endif