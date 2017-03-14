#ifndef CHIMPANZEE_H
#define CHIMPANZEE_H
#include "../land_animal/land_animal.h"
#include "../omnivore/omnivore.h"
#include "../mammal/mammal.h"

/** @class Chimpanzee
  * Real class chimpanzee
  */
class Chimpanzee : public LandAnimal, public Omnivore, public Mammal {
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * @param weight berat badan
    * Konstruktor kelas chimpanzee
    */  
  Chimpanzee(int x, int y, int weight);
  /** @brief Method interaksi chimpanzee
    */
  void Interact();
  /** @brief Method render chimpanzee
    */
  void RenderAnimal();
};

#endif