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
	void PrintPoint();
  /** @brief Method yang mengembalikan nilai x
    */
	int GetX() const;
	/** @brief Method yang mengembalikan nilai x
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
	private:
		int x;
		int y;
};

#endif