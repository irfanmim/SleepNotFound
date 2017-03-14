#ifndef CARNIVORE_H
#define CARNIVORE_H
#define factor 0.5

/** @class Carnivore
  * Base class carnivore
  */
class Carnivore{
public:
  /** @brief Constructor
    * @param weight
    * Konstruktor carnivore dengan parameter berat badan 
    */
  Carnivore(int weight);
  /** @brief Method GetFood mengembalikan makanan karnivora
    */
  float GetFood() const;
  /** Jumlah hewan karnivora */
  static int n_carnivore;   
  /** Jumlah total makanan karnivora */
  static float total_cfood;
protected:
  /** Makanan karnivora */
  float cfood;
};

#endif