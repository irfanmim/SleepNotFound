#ifndef POINT_H
#define POINT_H

class Point{
  public:

  /** @brief Constructor.
    */
    Point(int x, int y);
  /** @brief CopyConstructor.
    */
    Point(const Point& P);
  /** @brief Method untuk print Point
    */  
    void PrintPoint();
      /** @brief Method yang mengembalikan nilai x
    */
    int GetX() const;
     
  /** @brief Method yang mengembalikan nilai y
    */
    int GetY() const;
      /** @brief Method untuk mengubah koordinat x dengan nilai x
    * @param x Nilai x 
    */
    void SetX(int x);
      /** @brief Method untuk mengubah koordinat y dengan nilai y
    * @param y Nilai y
    */ 
    void SetY(int y);
      /** @brief Method untuk menambahkan koordinat x dengan nilai x dan koordinat y dengan nilai y
    * @param x Nilai x
    * @param y Nilai y
    */  
    void Add(int x,int y);
  private:
    int x;
    int y;
};

#endif