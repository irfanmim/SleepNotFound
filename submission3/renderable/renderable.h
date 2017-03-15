#ifndef RENDERABLE_H
#define RENDERABLE_H
#include <string>
using namespace std;

class Renderable{
public:
  /** @brief Pure Virtual function Render
    */
  virtual void Render()=0;
};

#endif