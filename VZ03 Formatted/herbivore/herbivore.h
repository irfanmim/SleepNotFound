#ifndef HERBIVORE_H
#define HERBIVORE_H
#define factor 0.5

/** @class Herbivore
  * Base class herbivore
  */
class Herbivore{
public:
  /** @brief Constructor
    * @param weight
    * Konstruktor herbivore dengan parameter berat badan 
    */
  Herbivore(int weight);
  /** Jumlah hewan herbivora */
  static int n_herbivore; 
  /** Jumlah total makanan herbivora */
  static float total_hfood;
  /** @brief Method GetFood mengembalikan makanan herbivora
    */
  float GetFood() const;
protected :
  /** Makanan herbivora */
  float hfood;
};

#endif