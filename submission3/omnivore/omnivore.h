#ifndef OMNIVORE_H
#define OMNIVORE_H
#include "../carnivore/carnivore.h"
#include "../herbivore/herbivore.h"

/** @class Omnivore
  * Base class omnivore
  */
class Omnivore : public Herbivore, public Carnivore {
public:
  /** @brief Constructor
    * @param weight
    * Konstruktor omnivore dengan parameter berat badan 
    */
  Omnivore(int weight);
  /** @brief Method GetFood mengembalikan makanan omnivora
    */
  float GetFood() const;
  /** Jumlah hewan omnivora */
  static int n_omnivore; 
  /** Jumlah total makanan omnivora */
  static float total_ofood;
protected :
  /** Makanan omnivora */
  float ofood;
};

#endif