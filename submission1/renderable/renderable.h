#ifndef RenderABLE_H
#define RenderABLE_H
#include <string>
using namespace std;

/** @class Renderable
  * Kelas ABC untuk mewariskan fungsi Render.
  */
class Renderable{
public:

  /** @brief Pure Virtual function Render
    */
  virtual void Render()=0;
};

#endif