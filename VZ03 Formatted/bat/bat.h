#ifndef BAT_H
#define BAT_H
#include "../flying_animal/flying_animal.h"
#include "../carnivore/carnivore.h"
#include "../mammal/mammal.h"

/** @class Bat
  * Real class bat
  */
class Bat : public FlyingAnimal, public Carnivore, public Mammal{
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * @param weight berat badan
    * Konstruktor kelas bat
    */  
  Bat(int x, int y, int weight);
  /** @brief Method interaksi bat
    */
  void Interact();
  void RenderAnimal();
};

#endif