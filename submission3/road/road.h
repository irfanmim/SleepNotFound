#ifndef ROAD_H
#define ROAD_H
#include "../facility/facility.h"

/** @class Road
  * Real class road
  */
class Road: public Facility{
public:
  /** @brief Constructor.
    * @param x absis lokasi
    * @param y oridnat lokasi
    * Konstruktor kelas road
    */  
  Road(int x,int y);
  /** @brief Method virtual render.
    */
  virtual void Render();
  /** @brief Method yang mengembalikan boolean sudah dilewati atau belum
    */
  bool IsVisited();
  /** @brief Method untuk men-set nilai visited
    */
  void SetVisited(bool s);
  /** @brief Method untuk men-set nilai is_here
    */
  void SetIsHere(bool s);

private:
  bool visited;
  bool is_here;
};

#endif