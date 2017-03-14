#ifndef COALA_H
#define COALA_H
#include "../land_animal/land_animal.h"
#include "../herbivore/herbivore.h"
#include "../mammal/mammal.h"

/** @class Coala
  * Real class coala
  */
class Coala : public LandAnimal, public Herbivore, public Mammal {
public :
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y ordinat lokasi
    * @param weight berat badan
    * Konstruktor kelas coala
    */  
  Coala(int x, int y, int weight);
  /** @brief Method interaksi coala
    */
  void Interact();
  /** @brief Method render coala
    */
  void RenderAnimal();
};

#endif