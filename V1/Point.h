#ifndef POINT_H
#define POINT_H

/** @class Point
  * Kelas yang merepresentasikan koordinat suatu objek.
  */
class Point{
	public:
		/** @brief Constructor berparameter.
	  	  * Membuat objek cage dengan koordinat yang terdefinisi
	  	  * @param x koordinat x
	  	  * @param y koordinat y
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
		int getX() const;
		
		/** @brief Method yang mengembalikan nilai x
	  	  */
		int getY() const;
		
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
		int x;
		int y;
};

#endif