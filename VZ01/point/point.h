#ifndef POINT_H
#define POINT_H

/** @class Point
  * Kelas yang merepresentasikan koordinat suatu objek.
  */
class Point{
  public:
    /** @brief Constructor berparameter.
        * @param x Koordinat x
        * @param y Koordinat y
        * Membuat objek cage dengan koordinat yang terdefinisi
        */
    Point(int x, int y);

    /** @brief CopyConstructor.
        */
    Point(const Point& P);
    
    /** @brief Method untuk print Point
        */
    void printPoint();
    
    /** @brief Method yang mengembalikan nilai x
        */
    int GetX() const;
    
    /** @brief Method yang mengembalikan nilai x
        */
    int GetY() const;
    
    /** @brief Method untuk mengubah koordinat x dengan nilai x
      * @param x Nilai x 
        */
    void setX(int x);

    /** @brief Method untuk mengubah koordinat y dengan nilai y
      * @param y Nilai y
        */    
    void setY(int y);

    /** @brief Method untuk menambahkan koordinat x dengan nilai x dan koordinat y dengan nilai y
        * @param x Nilai x
        * @param y Nilai y
        */    
    void add(int x,int y);
  
  private:
    /*absis dari point
     */
    int x;
    /*ordinat dari point
     */
    int y;
};

#endif